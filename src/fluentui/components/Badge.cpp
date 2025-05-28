
#include "Badge.h"
#include "fluentui/core/colors.h"

#include <QPaintEvent>
#include <QPainter>


using Badge = fluent::Badge;
using Appearances = Badge::Appearances;

Badge::Badge(QWidget *parent)
    : QWidget(parent)
{
}

Badge::~Badge() {
}

QIcon Badge::icon() const
{
    return m_icon;
}

void Badge::setIcon(const QIcon &icon)
{
    m_icon = icon;
}

Appearances Badge::appearance() const
{
    return m_appearance;
}

void Badge::setAppearance(Appearances appearance)
{
    m_appearance = appearance;
    update(); // Trigger a repaint when the appearance changes
}

void Badge::paintEvent(QPaintEvent *event)
{

    QPainter p(this);

    p.save();
    p.setRenderHint(QPainter::Antialiasing);
    p.setPen(QPen(Qt::NoPen));
    p.setBrush(colors::Light::colorBrandBackground);
    p.drawEllipse(1,1,20,20);
    p.restore();

    QWidget::paintEvent(event);
}

QSize Badge::sizeHint() const
{
    return QSize(22,22);
}
