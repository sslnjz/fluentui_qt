#ifndef BADGEPROPS_H
#define BADGEPROPS_H

#include <QFont>
#include <QIcon>
#include <QString>

#include <fluentui/FluentuiDefs.h>

class FLUENTUI_EXPORT BadgeProps
{
public:
    enum class Status
    {
        brand,
        danger,
        important,
        informative,
        severe,
        subtle,
        success,
        warning
    };

    enum class Appearance
    {
        filled,
        ghost,
        outline,
        tint
    };

    enum class Scale
    {
        tiny = 6,
        extrasmall = 10,
        small = 16,
        medium = 20,
        large = 24,
        extralarge = 32
    };

    enum class Shape
    {
        circular,
        rounded,
        square
    };

    bool operator==(const BadgeProps& other) const
    {
        return text == other.text
            && status == other.status
            && scale == other.scale
            && appear == other.appear
            && shape == other.shape;
    }

    bool operator!=(const BadgeProps& other) const
    {
        return !(*this != other);
    }

    QFont font;
    QString icon = "";
    QString text = "";
    Scale scale = Scale::medium;
    Status status = Status::brand;
    Shape shape = Shape::circular;
    Appearance appear = Appearance::filled;
};

#endif