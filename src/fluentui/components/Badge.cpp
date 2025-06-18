
#include "Badge.h"
#include "BadgeProps.h"
#include "fluentui/components/SvgIcons.h"
#include <QtCore/qlogging.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qnamespace.h>
#include <QtCore/qpoint.h>
#include <QtCore/qrect.h>
#include <fluentui/styles/BadgeStyle.h>

#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>

Badge::Badge(QWidget* parent, BadgeProps::Appearance appear,
    BadgeProps::Status status, BadgeProps::Shape shape)
    : IFluentPropsWidget<BadgeProps>(parent)
{
    setAttribute(Qt::WA_StyledBackground, true);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    m_props.appear = appear;
    m_props.status = status;
    m_props.shape = shape;

    m_style = new BadgeStyle(m_props);
    m_style->updateStyle();
}

Badge::~Badge() { }

QString Badge::svgIcon() const
{
    return m_props.icon;
}

void Badge::setSvgIcon(const QString& icon)
{
    m_props.icon = icon;
    update();
}

QString Badge::text() const
{
    return m_props.text;
}

void Badge::setText(const QString& text)
{
    if (m_props.text != text)
    {
        m_props.text = text;
        update();
    }
}

BadgeProps::Status Badge::status() const
{
    return m_props.status;
}

void Badge::setStatus(BadgeProps::Status status)
{
    if (m_props.status != status)
    {
        m_props.status = status;
        propsChanged();
        update();
    }
}

BadgeProps::Appearance Badge::appearance() const
{
    return m_props.appear;
}

void Badge::setAppearance(BadgeProps::Appearance a)
{
    if (m_props.appear != a)
    {
        m_props.appear = a;
        propsChanged();
        update();
    }
}

BadgeProps::Scale Badge::scale() const
{
    return m_props.scale;
}

void Badge::setScale(BadgeProps::Scale s)
{
    if (m_props.scale != s)
    {
        m_props.scale = s;
        propsChanged();
        update();
    }
}

void Badge::paintEvent(QPaintEvent*)
{
    auto* style = dynamic_cast<BadgeStyle*>(m_style);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    const QRect fullRect = rect();
    constexpr int margin = 2;
    const QRect contentRect = fullRect.adjusted(margin, margin, -margin, -margin);
    const int height = contentRect.height();
    const int radius = style->borderRadius() > 50 ? height / 2 : style->borderRadius();
    const int padding = style->spacingHorizontal();
    const int iconSize = style->font().pointSize();

    // 背景绘制
    if ((m_props.appear == BadgeProps::Appearance::ghost || m_props.appear == BadgeProps::Appearance::outline) && m_props.status == BadgeProps::Status::subtle)
    {
        painter.fillRect(fullRect, style->backgroundColor());
    }

    // 圆角矩形边框
    QPainterPath path;
    path.addRoundedRect(contentRect, radius, radius);
    painter.setPen(QPen(style->borderColor(), style->strokeWidth()));
    painter.setBrush(style->backgroundColor());
    painter.drawPath(path);

    int offsetX = padding;

    // 绘制图标（可选）
    if (!m_props.icon.isEmpty())
    {
        QRect iconRect;

        if (!m_props.text.isEmpty())
        {
            // 图标靠左
            int iconY = contentRect.y() + (height - iconSize) / 2;
            iconRect = QRect(contentRect.x() + offsetX, iconY, iconSize, iconSize);
            offsetX += iconSize + margin;
        }
        else
        {
            // 仅图标居中
            int iconX = contentRect.x() + (contentRect.width() - iconSize) / 2;
            int iconY = contentRect.y() + (height - iconSize) / 2;
            iconRect = QRect(iconX, iconY, iconSize, iconSize);
        }

        const QIcon icon = SvgIcons::createByFile(m_props.icon, style->foregroundColor());
        painter.drawPixmap(iconRect, icon.pixmap(iconSize, iconSize));
    }

    // 绘制文本（可选）
    if (!m_props.text.isEmpty())
    {
        QRect textRect(
            contentRect.x() + offsetX,
            contentRect.y(),
            contentRect.width() - offsetX - padding + margin,
            height);

        painter.setPen(style->foregroundColor());
        painter.setFont(style->font());
        painter.drawText(textRect, Qt::AlignCenter, m_props.text);
    }
}

void Badge::resizeEvent(QResizeEvent* event)
{
    QSize size;
    if (size.isEmpty())
    {
        return;
    }

    size = actualSize();
    auto gm = this->geometry();
    setGeometry(QRect(gm.x(), gm.y(), size.width(), size.height()));

    QWidget::resizeEvent(event);
}

QSize Badge::sizeHint() const
{
    return actualSize();
}

QSize Badge::minimumSizeHint() const
{
    return sizeHint();
}

QSize Badge::actualSize() const
{
    auto* style = dynamic_cast<BadgeStyle*>(m_style);
    const int scale = static_cast<int>(m_props.scale);
    const int margin = 2;
    const int height = scale + margin * 2;
    const int padding = style->spacingHorizontal();
    int width = 0;

    const bool hasText = !m_props.text.isEmpty();
    const bool hasIcon = !m_props.icon.isEmpty();

    if (hasText)
    {
        const int textWidth = QFontMetrics(style->font()).horizontalAdvance(m_props.text);
        width = margin * 2 + padding * 2 + textWidth;
        if (hasIcon)
            width += scale - 8;
    }
    else
    {
        width = scale + margin * 2;
    }

    width = qMax(scale, width);
    return QSize(width, height);
}