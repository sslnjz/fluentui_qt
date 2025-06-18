#ifndef BADGE_H
#define BADGE_H

#include <QFlags>
#include <QIcon>
#include <QSize>
#include <QString>

#include <fluentui/FluentuiDefs.h>
#include <fluentui/components/BadgeProps.h>
#include <fluentui/core/IFluentPropsWidget.h>

class FLUENTUI_EXPORT Badge : public IFluentPropsWidget<BadgeProps>
{
    Q_OBJECT
    Q_DISABLE_COPY(Badge)

public:
    Q_PROPERTY(QString icon READ svgIcon WRITE setSvgIcon)
    Q_PROPERTY(QString text READ text WRITE setText)
    Q_PROPERTY(BadgeProps::Status status READ status WRITE setStatus)
    Q_PROPERTY(BadgeProps::Scale scale READ scale WRITE setScale)
    Q_PROPERTY(BadgeProps::Appearance appearance READ appearance WRITE setAppearance)

    explicit Badge(QWidget* parent = nullptr,
        BadgeProps::Appearance appear = BadgeProps::Appearance::filled,
        BadgeProps::Status status = BadgeProps::Status::brand,
        BadgeProps::Shape shape = BadgeProps::Shape::circular);
    ~Badge() override;

    QString svgIcon() const;
    void setSvgIcon(const QString& icon);

    QString text() const;
    void setText(const QString& text);

    BadgeProps::Status status() const;
    void setStatus(BadgeProps::Status status);

    BadgeProps::Scale scale() const;
    void setScale(BadgeProps::Scale scale);

    BadgeProps::Shape shape() const;
    void setShpe(BadgeProps::Shape shape);

    BadgeProps::Appearance appearance() const;
    void setAppearance(BadgeProps::Appearance appear);

protected:
    void paintEvent(QPaintEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;

public:
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;

private:
    QSize actualSize() const;
};

#endif // BADGE_H
