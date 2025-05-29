
#include "Badge.h"
#include <fluentui/styles/Light.h>

#include <QPaintEvent>
#include <QPainter>
#include <qlogging.h>
#include <qnamespace.h>
#include <qsizepolicy.h>


using Colors = Badge::Colors;
using Appearances = Badge::Appearances;
using PresetSizes = Badge::PresetSizes;

class BadgePrivate
{
    Q_DECLARE_PUBLIC(Badge)
public:
    BadgePrivate(Badge *q)
        : q_ptr(q)
        , _color(Badge::brand)
        , _size(Badge::medium)
        , _appearance(Badge::filled)
        {
        }

    ~BadgePrivate() = default;

    QIcon _icon;
    Colors _color;
    PresetSizes _size;
    Appearances _appearance;

private:
    Badge *q_ptr;
};

Badge::Badge(QWidget *parent)
    : QWidget(parent)
    , d_ptr(new BadgePrivate(this))
{
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setAttribute(Qt::WA_StyledBackground, true);
}

Badge::~Badge() {
}

QIcon Badge::icon() const
{
    Q_D(const Badge);
    return d->_icon;
}

void Badge::setIcon(const QIcon &icon)
{
    Q_D(Badge);
    d->_icon = icon;
}

Colors Badge::color() const
{
    Q_D(const Badge);
    return d->_color;
}

void Badge::setColor(Colors color)
{
    Q_D(Badge);
    d->_color = color;
}

Appearances Badge::appearance() const
{
    Q_D(const Badge);
    return d->_appearance;
}

void Badge::setAppearance(Appearances appearance)
{
    Q_D(Badge);
    d->_appearance = appearance;
    update(); // Trigger a repaint when the appearance changes
}

PresetSizes Badge::presetSize() const
{
    Q_D(const Badge);
    return d->_size;
}

void Badge::setPresetSize(PresetSizes size)
{
    Q_D(Badge);
    d->_size = size;
    setFixedSize(sizeHint()); // Update the fixed size based on the preset size
    update(); // Trigger a repaint when the size changes
}

void Badge::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::NoPen));
    painter.setBrush(fluentui::Light::colorBrandBackground);
    painter.drawEllipse(rect().adjusted(1, 1, -1, -1));

    qDebug() << "rect:" << rect().adjusted(1, 1, -1, -1) << "sizeHint:" << sizeHint();

    painter.restore();

    QWidget::paintEvent(event);
}


QSize Badge::sizeHint() const
{
    Q_D(const Badge);
    switch (d->_size) {
        case Badge::tiny:
            return QSize(8, 8);
        case Badge::extrasmall:
            return QSize(12, 12);
        case Badge::small:
            return QSize(18, 18);
        case Badge::medium:
            return QSize(22, 22);
        case Badge::large:
            return QSize(26, 26);
        case Badge::extralarge:
            return QSize(34, 34);
        default:
            return QSize(22, 22); // Default size if no preset matches
    }
}

QSize Badge::minimumSizeHint() const
{
    return sizeHint(); // Minimum size is the same as size hint
}