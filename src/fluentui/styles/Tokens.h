#ifndef TOKENS_H
#define TOKENS_H

#include <QColor>
#include <QList>
#include <qanystringview.h>
#include <qstringview.h>

namespace fluent::borders {
    constexpr inline int borderRadiusNone = 0;
    constexpr inline int borderRadiusSmall = 2;
    constexpr inline int borderRadiusMedium = 4;
    constexpr inline int borderRadiusLarge = 8;
    constexpr inline int borderRadiusExtraLarge = 12;
    constexpr inline int borderRadiusCircular = 9999;
}

namespace fluent::colors {

    constexpr auto _sc(const QAnyStringView& color) {return QColor::fromString(color);}

    static const QList<QColor> colorNeutralForeground1 { _sc("#242424"), _sc("#ffffff"), _sc("#242424"), _sc("#ffffff") };


}

namespace fluent::fonts {
    static const QStringList fontFamilyBase      {"-apple-system", "BlinkMacSystemFont", "Segoe UI", "system-ui", "Apple Color Emoji", "Segoe UI Emoji", "sans-serif"};
    static const QStringList fontFamilyMonospace {"Consolas", "Courier New", "Courier", "monospace"};
    static const QStringList fontFamilyNumeric   {"Bahnschrift", "Segoe UI", "Segoe UI Web (West European)", "-apple-system", "BlinkMacSystemFont", "Roboto", "Helvetica Neue", "sans-serif"};

    constexpr inline int fontSizeBase100  = 10;
    constexpr inline int fontSizeBase200  = 12;
    constexpr inline int fontSizeBase300  = 14;
    constexpr inline int fontSizeBase400  = 16;
    constexpr inline int fontSizeBase500  = 20;
    constexpr inline int fontSizeBase600  = 24;
    constexpr inline int fontSizeHero700  = 28;
    constexpr inline int fontSizeHero800  = 32;
    constexpr inline int fontSizeHero900  = 40;
    constexpr inline int fontSizeHero1000 = 68;

    constexpr inline int fontWeightRegular = 400;
    constexpr inline int fontWeightMedium = 500;
    constexpr inline int fontWeightSemibold = 600;
    constexpr inline int fontWeightBold = 700;

    constexpr inline int lineHeightBase100 = 14;
    constexpr inline int lineHeightBase200 = 16;
    constexpr inline int lineHeightBase300 = 20;
    constexpr inline int lineHeightBase400 = 22;
    constexpr inline int lineHeightBase500 = 28;
    constexpr inline int lineHeightBase600 = 32;
    constexpr inline int lineHeightHero700 = 36;
    constexpr inline int lineHeightHero800 = 40;
    constexpr inline int lineHeightHero900 = 52;
    constexpr inline int lineHeightHero1000 = 92;
}

namespace fluent::shadows {

}

namespace fluent::spacing {
    constexpr inline int spacingHorizontalNone = 0;
    constexpr inline int spacingHorizontalXXS = 2;
    constexpr inline int spacingHorizontalXS = 4;
    constexpr inline int spacingHorizontalSNudge = 6;
    constexpr inline int spacingHorizontalS = 8;
    constexpr inline int spacingHorizontalMNudge = 10;
    constexpr inline int spacingHorizontalM = 12;
    constexpr inline int spacingHorizontalL = 16;
    constexpr inline int spacingHorizontalXL = 20;
    constexpr inline int spacingHorizontalXXL = 24;
    constexpr inline int spacingHorizontalXXXL = 32;
    constexpr inline int spacingVerticalNone = 0;
    constexpr inline int spacingVerticalXXS = 2;
}

namespace fluent::strokes {
    constexpr inline int strokeWidthThin = 1;
    constexpr inline int strokeWidthThick = 2;
    constexpr inline int strokeWidthThicker = 3;
    constexpr inline int strokeWidthThickest = 4;
}

#endif // TOKENS_H