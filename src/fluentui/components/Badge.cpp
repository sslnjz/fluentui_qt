
#include "Badge.h"
#include <QtCore/qcontainerfwd.h>
#include <QtCore/qlogging.h>
#include <QtCore/qminmax.h>
#include <QtCore/qnamespace.h>
#include <QtCore/qpair.h>
#include <QtGui/qfont.h>
#include <QtGui/qfontmetrics.h>
#include <QtGui/qpainter.h>
#include <QtGui/qpen.h>

#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <qlogging.h>
#include <qnamespace.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qwindowdefs.h>

#include <fluentui/styles/Style.h>
#include <fluentui/styles/Tokens.h>

using Color = Badge::Color;
using Shape = Badge::Shape;
using Appearance = Badge::Appearance;
using PresetSize = Badge::PresetSize;

class BadgeStyle : public StyleBase {
public:
  BadgeStyle() {
    setFontStyle(_fontFamily, _fontSize, _fontWeight);

    _spacingHorizontal =
        Tokens::spacingHorizontalXS + Tokens::spacingHorizontalXXS;
    _spacingVertical = Tokens::spacingVerticalNone;
    _borderRadius = Tokens::borderRadiusCircular;
    _borderColor = Tokens::colorTransparentStroke[m_theme];
    _backgroundColor = Tokens::colorTransparentBackground[m_theme];
  }

  QFont font() const { return m_font; }
  int spacingHorizontal() const { return _spacingHorizontal; };
  int borderRadius(int height) const {
    return _borderRadius > 50 ? height / 2 : _borderRadius;
  }

  QColor backgroundColor() const { return _backgroundColor; }
  QColor foregroundColor() const { return _foregroundColor; }
  QColor borderColor() const { return _borderColor; }

  void setFontStyle(QStringList families, int pointSize, int weight) {
    m_font = QFont(families, pointSize, weight);
  }

  void setShapeStyle(Shape s) {
    switch (s) {
    case Badge::Shape::circular:
      _borderRadius = Tokens::borderRadiusCircular;
      break;
    case Badge::Shape::rounded:
      _borderRadius = Tokens::borderRadiusMedium;
      break;
    case Badge::Shape::square:
      _borderRadius = Tokens::borderRadiusNone;
      break;
    }
  }

  void updateStyle(Appearance appearance = Appearance::filled,
                   Color color = Color::brand) {
    switch (color) {
    case Badge::Color::brand:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralForegroundOnBrand[m_theme];
        _backgroundColor = Tokens::colorBrandBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor = Tokens::colorBrandForeground1[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor = Tokens::colorBrandForeground1[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorBrandForeground1[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorBrandForeground1[m_theme];
        _backgroundColor = Tokens::colorBrandBackground2[m_theme];
        _borderColor = Tokens::colorBrandStroke2[m_theme];
      } break;
      }
      break;
    case Badge::Color::danger:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralForegroundOnBrand[m_theme];
        _backgroundColor = Tokens::colorPaletteRedBackground3[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor = Tokens::colorPaletteRedForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor = Tokens::colorPaletteRedForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorPaletteRedBorder2[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorPaletteRedForeground1[m_theme];
        _backgroundColor = Tokens::colorPaletteRedBackground1[m_theme];
        _borderColor = Tokens::colorPaletteRedBorder1[m_theme];
      } break;
      }
      break;
    case Badge::Color::important:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralBackground1[m_theme];
        _backgroundColor = Tokens::colorNeutralForeground1[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor = Tokens::colorNeutralForeground1[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor = Tokens::colorNeutralForeground1[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorNeutralStrokeAccessible[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorNeutralBackground1[m_theme];
        _backgroundColor = Tokens::colorNeutralForeground3[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      }
      break;
    case Badge::Color::informative:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralForeground3[m_theme];
        _backgroundColor = Tokens::colorNeutralBackground5[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor = Tokens::colorNeutralForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor = Tokens::colorNeutralForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorNeutralStroke2[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorNeutralForeground3[m_theme];
        _backgroundColor = Tokens::colorNeutralBackground4[m_theme];
        _borderColor = Tokens::colorNeutralStroke2[m_theme];
      } break;
      }
      break;
    case Badge::Color::severe:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralForegroundOnBrand[m_theme];
        _backgroundColor = Tokens::colorPaletteDarkOrangeBackground3[m_theme];
        _borderColor = Tokens::colorTransparentBackground[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor = Tokens::colorPaletteDarkOrangeForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor = Tokens::colorPaletteDarkOrangeForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorPaletteDarkOrangeForeground3[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorPaletteDarkOrangeForeground1[m_theme];
        _backgroundColor = Tokens::colorPaletteDarkOrangeBackground1[m_theme];
        _borderColor = Tokens::colorPaletteDarkOrangeBorder1[m_theme];
      } break;
      }
      break;
    case Badge::Color::subtle:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralForeground1[m_theme];
        _backgroundColor = Tokens::colorNeutralBackground1[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor =
            Tokens::colorNeutralForegroundStaticInverted[m_theme];
        _backgroundColor = Tokens::colorBrandBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor =
            Tokens::colorNeutralForegroundStaticInverted[m_theme];
        _backgroundColor = Tokens::colorBrandBackground[m_theme];
        _borderColor = Tokens::colorNeutralForegroundStaticInverted[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorNeutralForeground3[m_theme];
        _backgroundColor = Tokens::colorNeutralBackground1[m_theme];
        _borderColor = Tokens::colorNeutralStroke2[m_theme];
      } break;
      }
      break;
    case Badge::Color::success:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralForegroundOnBrand[m_theme];
        _backgroundColor = Tokens::colorPaletteGreenBackground3[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor = Tokens::colorPaletteGreenForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor = Tokens::colorPaletteGreenForeground3[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorPaletteGreenBorder2[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorPaletteGreenForeground1[m_theme];
        _backgroundColor = Tokens::colorPaletteGreenBackground1[m_theme];
        _borderColor = Tokens::colorPaletteGreenBorder1[m_theme];
      } break;
      }
      break;
    case Badge::Color::warning:
      switch (appearance) {
      case Badge::Appearance::filled: {
        _foregroundColor = Tokens::colorNeutralForeground1Static[m_theme];
        _backgroundColor = Tokens::colorPaletteYellowBackground3[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::ghost: {
        _foregroundColor = Tokens::colorPaletteYellowForeground2[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorTransparentStroke[m_theme];
      } break;
      case Badge::Appearance::outline: {
        _foregroundColor = Tokens::colorPaletteYellowForeground2[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
        _borderColor = Tokens::colorPaletteYellowForeground2[m_theme];
      } break;
      case Badge::Appearance::tint: {
        _foregroundColor = Tokens::colorPaletteYellowForeground1[m_theme];
        _backgroundColor = Tokens::colorPaletteYellowBackground1[m_theme];
        _borderColor = Tokens::colorPaletteYellowBorder1[m_theme];
      } break;
      }
      break;
    }
  }

private:
  QFont m_font;
  using Theme = Tokens::Theme;
  Theme m_theme = Theme::Light;
};

class BadgePrivate {
  Q_DECLARE_PUBLIC(Badge)
public:
  BadgePrivate(Appearance a, Color c, Shape s, Badge *q)
      : q_ptr(q), color(c), appearance(a), shape(s) {
    updateStyle();
  }

  ~BadgePrivate() = default;

  QSize actualSize() const {
    QSize size;

    int totalWidth = 0;
    if (!text.isEmpty()) {
      QFontMetricsF fm(_style.font());
      auto textWidth = fm.horizontalAdvance(text);

      int iconWidth = icon.isNull() ? 0 : 16;
      totalWidth = textWidth + iconWidth + _style._spacingHorizontal * 2 + 4;
    }

    // Adjust the size based on the preset size
    switch (presetSize) {
    case PresetSize::tiny:
      size = QSize(qMax(8, totalWidth), 8);
      break;
    case PresetSize::extrasmall:
      size = QSize(qMax(12, totalWidth), 12);
      break;
    case PresetSize::small:
      size = QSize(qMax(18, totalWidth), 18);
      break;
    case PresetSize::medium:
      size = QSize(qMax(22, totalWidth), 22);
      break;
    case PresetSize::large:
      size = QSize(qMax(26, totalWidth), 26);
      break;
    case PresetSize::extralarge:
      size = QSize(qMax(34, totalWidth), 34);
      break;
    default:
      size = QSize(qMax(22, totalWidth), 22);
      break;
    }
    return size;
  }

  void updateStyle() {
    _style.setShapeStyle(shape);
    _style.updateStyle(appearance, color);
  }

public:
  QIcon icon;
  QString text;
  Color color;
  PresetSize presetSize;
  Appearance appearance;
  Shape shape;

private:
  Badge *q_ptr;
  BadgeStyle _style;
};

Badge::Badge(QWidget *parent, Appearance a, Color c, Shape s)
    : QWidget(parent), d_ptr(new BadgePrivate(a, c, s, this)) {
  setAttribute(Qt::WA_StyledBackground, true);
  setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
  setPresetSize(PresetSize::medium);
}

Badge::~Badge() {}

QIcon Badge::icon() const {
  Q_D(const Badge);
  return d->icon;
}

void Badge::setIcon(const QIcon &icon) {
  Q_D(Badge);
  d->icon = icon;
  update();
}

QString Badge::text() const {
  Q_D(const Badge);
  return d->text;
}

void Badge::setText(const QString &text) {
  Q_D(Badge);
  if (d->text != text) {
    d->text = text;
    update();
  }
}

Color Badge::color() const {
  Q_D(const Badge);
  return d->color;
}

void Badge::setColor(Color color) {
  Q_D(Badge);
  if (d->color != color) {
    d->color = color;
    d->updateStyle();
    update();
  }
}

Appearance Badge::appearance() const {
  Q_D(const Badge);
  return d->appearance;
}

void Badge::setAppearance(Appearance appearance) {
  Q_D(Badge);
  if (d->appearance != appearance) {
    d->appearance = appearance;
    d->updateStyle();
    update();
  }
}

PresetSize Badge::presetSize() const {
  Q_D(const Badge);
  return d->presetSize;
}

void Badge::setPresetSize(PresetSize s) {
  Q_D(Badge);
  if (d->presetSize != s) {
    d->presetSize = s;
    update();
  }
}

void Badge::paintEvent(QPaintEvent *event) {
  Q_D(Badge);
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);

  const QRect r = rect().adjusted(1, 1, -1, -1);
  const int radius = d->_style.borderRadius(r.height()) > 50
                         ? r.height() / 2
                         : d->_style.borderRadius(r.height());

  QPainterPath path;
  path.addRoundedRect(r, radius, radius);

  QPen borderPen(d->_style.borderColor(), 1);
  painter.setPen(borderPen);
  painter.setBrush(d->_style.backgroundColor());
  painter.drawPath(path);

  painter.setPen(d->_style.foregroundColor());
  painter.setFont(d->_style.font());
  const int padding = d->_style.spacingHorizontal();
  painter.drawText(r.adjusted(padding, 0, -padding, 0), Qt::AlignCenter,
                   d->text);
}

void Badge::resizeEvent(QResizeEvent *event) {
  Q_D(Badge);

  QSize size;
  if (size.isEmpty()) {
    return;
  }

  size = d->actualSize();
  auto gm = this->geometry();
  setGeometry(QRect(gm.x(), gm.y(), size.width(), size.height()));

  QWidget::resizeEvent(event);
}

QSize Badge::sizeHint() const {
  Q_D(const Badge);
  return d->actualSize();
}

QSize Badge::minimumSizeHint() const {
  Q_D(const Badge);
  return sizeHint();
}