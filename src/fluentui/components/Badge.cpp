
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qwindowdefs.h>


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

    void filledAppearance(QPainter& painter)
    {

        // qDebug() << "contentsRect: " << q_ptr->contentsRect();
        // qDebug() << "rect: " << q_ptr->rect();
        // qDebug() << "sizeHint: " << q_ptr->sizeHint();

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

    void ghostAppearance(QPainter& painter)
    {
        painter.save();

        painter.restore();
    }

    void outlineAppearance(QPainter& painter)
    {

    }
    void tintAppearance(QPainter& painter)
    {

    }

    int fontMetrics() const
    {
        if(text.isEmpty()) return 0;
        QFontMetricsF metric(q_ptr->font());
        return metric.horizontalAdvance(text) + 12; //Padding
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
        return 11;
    }

    QSize acturalSize() const
    {
        QSize size;
        auto metrics = fontMetrics();
        // Adjust the size based on the preset size
        switch (presetSize) {
            case PresetSize::tiny:
                size = QSize(qMax(8, metrics), 8);
                break;
            case PresetSize::extrasmall:
                size = QSize(qMax(12, metrics), 12);
                break;
            case PresetSize::small:
                size = QSize(qMax(18, metrics), 18);
                break;
            case PresetSize::medium:
                size = QSize(qMax(22, metrics), 22);
                break;
            case PresetSize::large:
                size = QSize(qMax(26, metrics), 26);
                break;
            case PresetSize::extralarge:
                size = QSize(qMax(34, metrics), 34);
                break;
            default:
                size = QSize(qMax(22, metrics), 22); // Default size if no preset matches
                break;
        }
        return size;
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
    setAttribute(Qt::WA_StyledBackground, true);
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

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
}

void Badge::paintEvent(QPaintEvent *event)
{
    Q_D(Badge);
    QPainter painter(this);

    switch (d->appearance)
    {
    case Appearance::filled:
        d->filledAppearance(painter);
        break;
    case Appearance::ghost:
        d->ghostAppearance(painter);
        break;
    case Appearance::outline:
        d->outlineAppearance(painter);
        break;
    case Appearance::tint:
        d->tintAppearance(painter);
        break;
    }

    QWidget::paintEvent(event);
}

void Badge::resizeEvent(QResizeEvent *event)
{
    Q_D(Badge);

    QSize size;
    if (size.isEmpty()) {
        return;
    }

    size = d->acturalSize();
    auto gm = this->geometry();
    setGeometry(QRect(gm.x(), gm.y(), size.width(), size.height()));

    QWidget::resizeEvent(event);
}


QSize Badge::sizeHint() const
{
    Q_D(const Badge);
    return d->acturalSize();
}

QSize Badge::minimumSizeHint() const
{
    Q_D(const Badge);
    return d->acturalSize();
}