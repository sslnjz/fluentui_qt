#ifndef STYLE_H
#define STYLE_H

#include <QColor>
#include <QColorSpace>
#include <QFont>
#include <QSurfaceFormat>
#include <fluentui/styles/Tokens.h>

class Style
{
public:
    Style()
    {
        QSurfaceFormat format;
        format.setColorSpace(QColorSpace::SRgb);
        QSurfaceFormat::setDefaultFormat(format);
    }
    virtual ~Style() { }

    Tokens::Theme theme() const { return _theme; }

    virtual QFont font() const { return QFont(_fontFamily, _fontSize, _fontWeight); }
    virtual int spacingHorizontal() const { return _spacingHorizontal; }
    virtual int spacingVertical() const { return _spacingVertical; }

    virtual int borderRadius() const { return _borderRadius; }

    virtual QColor foregroundColor() const { return _foregroundColor; }
    virtual QColor backgroundColor() const { return _backgroundColor; }
    virtual QColor borderColor() const { return _borderColor; }

    virtual int strokeWidth() const { return _strokeWidth; }

    virtual void updateStyle() = 0;

protected:
    QStringList _fontFamily = Tokens::fontFamilyBase;
    int _fontSize = Tokens::fontSizeBase200;
    int _fontWeight = Tokens::fontWeightSemibold;
    int _lineHeight = Tokens::lineHeightBase200;

    int _spacingHorizontal = Tokens::spacingHorizontalXXS;
    int _spacingVertical = Tokens::spacingVerticalXXS;

    int _borderRadius = Tokens::borderRadiusMedium;
    int _strokeWidth = Tokens::strokeWidthThin;

    QColor _foregroundColor = Tokens::colorBrandForeground1[Tokens::Theme::Light];
    QColor _backgroundColor = Tokens::colorBrandBackground[Tokens::Theme::Light];
    QColor _borderColor = Tokens::colorTransparentStroke[Tokens::Theme::Light];
    Tokens::Theme _theme = Tokens::Theme::Light;
};

#endif