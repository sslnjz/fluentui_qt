
#include "Badge.h"
#include <QtCore/qlogging.h>
#include <QtCore/qnamespace.h>
#include <QtGui/qfontmetrics.h>
#include <QtGui/qpainter.h>
#include <QtGui/qpen.h>
#include <fluentui/styles/Light.h>

#include <QPaintEvent>
#include <QPainter>
#include <qlogging.h>
#include <qnamespace.h>
#include <qsizepolicy.h>


using Color = Badge::Color;
using Appearance = Badge::Appearance;
using PresetSize = Badge::PresetSize;

class BadgePrivate
{
    Q_DECLARE_PUBLIC(Badge)
public:
    BadgePrivate(Badge *q)
        : q_ptr(q)
        , color(Badge::Color::brand)
        , presetSize(Badge::PresetSize::medium)
        , appearance(Badge::Appearance::filled)
        , backgroundColor(fluentui::Light::colorBrandBackground)
        , foregroundColor(fluentui::Light::colorNeutralForegroundOnBrand)
        {
        }

    ~BadgePrivate() = default;

    void filled(QPainter& painter)
    {

        qDebug() << "contentsRect: " << q_ptr->contentsRect();
        qDebug() << "rect: " << q_ptr->rect();
        qDebug() << "sizeHint: " << q_ptr->sizeHint();

        painter.save();
        painter.setPen(Qt::NoPen);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setBrush(backgroundColor);
        painter.drawRoundedRect(q_ptr->rect().adjusted(1, 1, -1, -1), radius(), radius());

        if(!text.isEmpty())
        {
            painter.setPen(QPen(foregroundColor));
            painter.drawText(q_ptr->rect(), Qt::AlignCenter, text);
        }

        painter.restore();
    }
    
    void ghost(QPainter& painter)
    {

    }

    void outline(QPainter& painter);
    void tint(QPainter& painter);

    int fontMetrics() const
    {
        if(text.isEmpty()) return 0;
        QFontMetricsF metric(q_ptr->font());
        return metric.horizontalAdvance(text) + 12;
    }

    int radius()
    {
        switch (presetSize) {
        case Badge::PresetSize::tiny:
            return 4;
        case Badge::PresetSize::extrasmall:
            return 6;
        case Badge::PresetSize::small:
            return 9;
        case Badge::PresetSize::medium:
            return 11;
        case Badge::PresetSize::large:
            return 13;
        case Badge::PresetSize::extralarge:
            return 17;
        }
    }

public:
    QIcon icon;
    QString text;
    Color color;
    PresetSize presetSize;
    Appearance appearance;

private:
    Badge *q_ptr;

    QColor backgroundColor;
    QColor foregroundColor;
};

Badge::Badge(QWidget *parent)
    : QWidget(parent)
    , d_ptr(new BadgePrivate(this))
{
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    setAttribute(Qt::WA_StyledBackground, true);

    auto f = font();
    f.setPixelSize(12);
    setFont(f);
}

Badge::~Badge() {
}

QIcon Badge::icon() const
{
    Q_D(const Badge);
    return d->icon;
}

void Badge::setIcon(const QIcon &icon)
{
    Q_D(Badge);
    d->icon = icon;
}

QString Badge::text() const
{
    Q_D(const Badge);
    return d->text;
}

void Badge::setText(const QString &text)
{
    Q_D(Badge);
    d->text = text;
    setFixedSize(sizeHint()); // Update the fixed size based on the preset size
}

Color Badge::color() const
{
    Q_D(const Badge);
    return d->color;
}

void Badge::setColor(Color color)
{
    Q_D(Badge);
    d->color = color;
}

Appearance Badge::appearance() const
{
    Q_D(const Badge);
    return d->appearance;
}

void Badge::setAppearance(Appearance appearance)
{
    Q_D(Badge);
    d->appearance = appearance;
    update(); // Trigger a repaint when the appearance changes
}

PresetSize Badge::presetSize() const
{
    Q_D(const Badge);
    return d->presetSize;
}

void Badge::setPresetSize(PresetSize s)
{
    Q_D(Badge);
    d->presetSize = s;
    setFixedSize(sizeHint()); // Update the fixed size based on the preset size
    update(); // Trigger a repaint when the size changes
}

void Badge::paintEvent(QPaintEvent *event)
{
    Q_D(Badge);
    QPainter painter(this);

    switch (d->appearance) 
    {
    case Appearance::filled:
        d->filled(painter);
        break;
    case Appearance::ghost:
        break;
    case Appearance::outline:
        break;
    case Appearance::tint:
        break;
    }

    QWidget::paintEvent(event);
}


QSize Badge::sizeHint() const
{
    Q_D(const Badge);
    switch (d->presetSize) {
        case PresetSize::tiny:
            return QSize(qMax(8, d->fontMetrics()), 8);
        case PresetSize::extrasmall:
            return QSize(qMax(12, d->fontMetrics()), 12);
        case PresetSize::small:
            return QSize(qMax(18, d->fontMetrics()), 18);
        case PresetSize::medium:
            return QSize(qMax(22, d->fontMetrics()), 22);
        case PresetSize::large:
            return QSize(qMax(26, d->fontMetrics()), 26);
        case PresetSize::extralarge:
            return QSize(qMax(34, d->fontMetrics()), 34);
        default:
            return QSize(qMax(22, d->fontMetrics()), 22); // Default size if no preset matches
    }
}

QSize Badge::minimumSizeHint() const
{
    return sizeHint(); // Minimum size is the same as size hint
}