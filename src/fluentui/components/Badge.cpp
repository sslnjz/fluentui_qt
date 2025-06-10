
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
#include <fluentui/styles/Style.h>
#include <fluentui/styles/Tokens.h>
#include <qcolor.h>
#include <qlogging.h>
#include <qnamespace.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qwindowdefs.h>

#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <tuple>

using Color = Badge::Color;
using Shape = Badge::Shape;
using Appearance = Badge::Appearance;
using PresetSize = Badge::PresetSize;

class BadgeStyle : public StyleBase {
public:
    BadgeStyle()
    {
        setFontStyle(_fontFamily, _fontSize, _fontWeight);

        _spacingHorizontal
            = Tokens::spacingHorizontalXS + Tokens::spacingHorizontalXXS;
        _spacingVertical = Tokens::spacingVerticalNone;
        _borderRadius = Tokens::borderRadiusCircular;
        _borderColor = Tokens::colorTransparentStroke[m_theme];
        _backgroundColor = Tokens::colorTransparentBackground[m_theme];
    }

    QFont
    font() const
    {
        return m_font;
    }

    int
    spacingHorizontal() const
    {
        return _spacingHorizontal;
    };

    int
    borderRadius(int height) const
    {
        return _borderRadius > 50 ? height / 2 : _borderRadius;
    }

    QColor
    backgroundColor() const
    {
        return _backgroundColor;
    }

    QColor
    foregroundColor() const
    {
        return _foregroundColor;
    }

    QColor
    borderColor() const
    {
        return _borderColor;
    }

    void
    setFontStyle(QStringList families, int pointSize, int weight)
    {
        m_font = QFont(families, pointSize, weight);
    }

    void
    setShapeStyle(Shape s)
    {
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

    void
    updateStyle(Appearance appearance = Appearance::filled,
        Color color = Color::brand)
    {
        static std::tuple<QColor, QColor, QColor> styleMatrix[8][4]
            = {
                  // brand
                  {
                      { Tokens::colorNeutralForegroundOnBrand[m_theme],
                          Tokens::colorBrandBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] }, // filled
                      { Tokens::colorBrandForeground1[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] }, // ghost
                      { Tokens::colorBrandForeground1[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorBrandForeground1[m_theme] }, // outline
                      { Tokens::colorBrandForeground1[m_theme],
                          Tokens::colorBrandBackground2[m_theme],
                          Tokens::colorBrandStroke2[m_theme] }, // tint
                  },
                  // danger
                  {
                      { Tokens::colorNeutralForegroundOnBrand[m_theme],
                          Tokens::colorPaletteRedBackground3[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorPaletteRedForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorPaletteRedForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorPaletteRedBorder2[m_theme] },
                      { Tokens::colorPaletteRedForeground1[m_theme],
                          Tokens::colorPaletteRedBackground1[m_theme],
                          Tokens::colorPaletteRedBorder1[m_theme] },
                  },
                  // important
                  {
                      { Tokens::colorNeutralBackground1[m_theme],
                          Tokens::colorNeutralForeground1[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorNeutralForeground1[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorNeutralForeground1[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorNeutralStrokeAccessible[m_theme] },
                      { Tokens::colorNeutralBackground1[m_theme],
                          Tokens::colorNeutralForeground3[m_theme],
                          Tokens::colorTransparentStroke[m_theme] } },
                  // informative
                  {
                      { Tokens::colorNeutralForeground3[m_theme],
                          Tokens::colorNeutralBackground5[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorNeutralForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorNeutralForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorNeutralStroke2[m_theme] },
                      { Tokens::colorNeutralForeground3[m_theme],
                          Tokens::colorNeutralBackground4[m_theme],
                          Tokens::colorNeutralStroke2[m_theme] } },
                  // severe
                  {
                      { Tokens::colorNeutralForegroundOnBrand[m_theme],
                          Tokens::colorPaletteDarkOrangeBackground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme] },
                      { Tokens::colorPaletteDarkOrangeForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorPaletteDarkOrangeForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorPaletteDarkOrangeForeground3[m_theme] },
                      { Tokens::colorPaletteDarkOrangeForeground1[m_theme],
                          Tokens::colorPaletteDarkOrangeBackground1[m_theme],
                          Tokens::colorPaletteDarkOrangeBorder1[m_theme] } },
                  // subtle
                  {
                      { Tokens::colorNeutralForeground1[m_theme],
                          Tokens::colorNeutralBackground1[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorNeutralForegroundStaticInverted[m_theme],
                          Tokens::colorBrandBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorNeutralForegroundStaticInverted[m_theme],
                          Tokens::colorBrandBackground[m_theme],
                          Tokens::colorNeutralForegroundStaticInverted[m_theme] },
                      { Tokens::colorNeutralForeground3[m_theme],
                          Tokens::colorNeutralBackground1[m_theme],
                          Tokens::colorNeutralStroke2[m_theme] } },
                  // success
                  { { Tokens::colorNeutralForegroundOnBrand[m_theme],
                        Tokens::colorPaletteGreenBackground3[m_theme],
                        Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorPaletteGreenForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorPaletteGreenForeground3[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorPaletteGreenBorder2[m_theme] },
                      { Tokens::colorPaletteGreenForeground1[m_theme],
                          Tokens::colorPaletteGreenBackground1[m_theme],
                          Tokens::colorPaletteGreenBorder1[m_theme] } },
                  // warning
                  {
                      { Tokens::colorNeutralForeground1Static[m_theme],
                          Tokens::colorPaletteYellowBackground3[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorPaletteYellowForeground2[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorTransparentStroke[m_theme] },
                      { Tokens::colorPaletteYellowForeground2[m_theme],
                          Tokens::colorTransparentBackground[m_theme],
                          Tokens::colorPaletteYellowForeground2[m_theme] },
                      { Tokens::colorPaletteYellowForeground1[m_theme],
                          Tokens::colorPaletteYellowBackground1[m_theme],
                          Tokens::colorPaletteYellowBorder1[m_theme] } }
              };

        auto [fg, bg, bd]
            = styleMatrix[static_cast<int>(color)][static_cast<int>(appearance)];
        _foregroundColor = fg;
        _backgroundColor = bg;
        _borderColor = bd;
    }

private:
    QFont m_font;
    using Theme = Tokens::Theme;
    Theme m_theme = Theme::Light;
};

class BadgePrivate {
    Q_DECLARE_PUBLIC(Badge)

public:
    BadgePrivate(Appearance a, Color c, Shape s, Badge* q)
        : q_ptr(q)
        , color(c)
        , appearance(a)
        , shape(s)
    {
        updateStyle();
    }

    ~BadgePrivate() = default;

    QSize
    actualSize() const
    {
        int textWidth
            = text.isEmpty()
            ? 0
            : QFontMetricsF(_style.font()).horizontalAdvance(text);
        int iconWidth = icon.isNull() ? 0 : 16;
        int totalWidth = textWidth + iconWidth
            + (textWidth > 0 ? _style.spacingHorizontal() * 2 : 0);

        constexpr int hTable[] = { 8, 12, 18, 22, 26, 34 };
        int index = static_cast<int>(presetSize);
        int height
            = (index >= 0 && index < std::size(hTable)) ? hTable[index] : 22;

        return QSize(qMax(height, totalWidth), height);
    }

    void
    updateStyle()
    {
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
    Badge* q_ptr;
    BadgeStyle _style;
};

Badge::Badge(QWidget* parent, Appearance a, Color c, Shape s)
    : QWidget(parent)
    , d_ptr(new BadgePrivate(a, c, s, this))
{
    setAttribute(Qt::WA_StyledBackground, true);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setPresetSize(PresetSize::medium);
}

Badge::~Badge() { }

QIcon Badge::icon() const
{
    Q_D(const Badge);
    return d->icon;
}

void Badge::setIcon(const QIcon& icon)
{
    Q_D(Badge);
    d->icon = icon;
    update();
}

QString
Badge::text() const
{
    Q_D(const Badge);
    return d->text;
}

void Badge::setText(const QString& text)
{
    Q_D(Badge);
    if (d->text != text) {
        d->text = text;
        update();
    }
}

Color Badge::color() const
{
    Q_D(const Badge);
    return d->color;
}

void Badge::setColor(Color color)
{
    Q_D(Badge);
    if (d->color != color) {
        d->color = color;
        d->updateStyle();
        update();
    }
}

Appearance
Badge::appearance() const
{
    Q_D(const Badge);
    return d->appearance;
}

void Badge::setAppearance(Appearance appearance)
{
    Q_D(Badge);
    if (d->appearance != appearance) {
        d->appearance = appearance;
        d->updateStyle();
        update();
    }
}

PresetSize
Badge::presetSize() const
{
    Q_D(const Badge);
    return d->presetSize;
}

void Badge::setPresetSize(PresetSize s)
{
    Q_D(Badge);
    if (d->presetSize != s) {
        d->presetSize = s;
        update();
    }
}

void Badge::paintEvent(QPaintEvent* event)
{
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
    painter.drawText(r.adjusted(2, 0, -2, 0), Qt::AlignCenter, d->text);
}

void Badge::resizeEvent(QResizeEvent* event)
{
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

QSize Badge::sizeHint() const
{
    Q_D(const Badge);
    return d->actualSize();
}

QSize Badge::minimumSizeHint() const
{
    Q_D(const Badge);
    return sizeHint();
}