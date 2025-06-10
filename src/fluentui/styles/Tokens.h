#ifndef TOKENS_H
#define TOKENS_H

#include <QAnyStringView>
#include <QColor>
#include <QList>

constexpr auto _sc(const QAnyStringView& c)
{
    return QColor::fromString(c);
}

namespace Tokens {
enum Theme {
    Light = 0,
    Dark,
    TeamsLight,
    TeamsDark,
    ThemeCount
};

constexpr inline int borderRadiusNone = 0;
constexpr inline int borderRadiusSmall = 2;
constexpr inline int borderRadiusMedium = 4;
constexpr inline int borderRadiusLarge = 8;
constexpr inline int borderRadiusExtraLarge = 12;
constexpr inline int borderRadiusCircular = 10000;

static const QColor colorNeutralForeground1[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground1Hover[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground1Pressed[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground1Selected[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground2[ThemeCount] = {
    _sc("#ff424242"), _sc("#ffd6d6d6"), _sc("#ff424242"), _sc("#ffd6d6d6")
};
static const QColor colorNeutralForeground2Hover[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground2Pressed[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground2Selected[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground2BrandHover[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorNeutralForeground2BrandPressed[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff2886de"), _sc("#ff4f52b2"), _sc("#ff7579eb")
};
static const QColor colorNeutralForeground2BrandSelected[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorNeutralForeground3[ThemeCount] = {
    _sc("#ff616161"), _sc("#ffadadad"), _sc("#ff616161"), _sc("#ffadadad")
};
static const QColor colorNeutralForeground3Hover[ThemeCount] = {
    _sc("#ff424242"), _sc("#ffd6d6d6"), _sc("#ff424242"), _sc("#ffd6d6d6")
};
static const QColor colorNeutralForeground3Pressed[ThemeCount] = {
    _sc("#ff424242"), _sc("#ffd6d6d6"), _sc("#ff424242"), _sc("#ffd6d6d6")
};
static const QColor colorNeutralForeground3Selected[ThemeCount] = {
    _sc("#ff424242"), _sc("#ffd6d6d6"), _sc("#ff424242"), _sc("#ffd6d6d6")
};
static const QColor colorNeutralForeground3BrandHover[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorNeutralForeground3BrandPressed[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff2886de"), _sc("#ff4f52b2"), _sc("#ff7579eb")
};
static const QColor colorNeutralForeground3BrandSelected[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorNeutralForeground4[ThemeCount] = {
    _sc("#ff707070"), _sc("#ff999999"), _sc("#ff707070"), _sc("#ff999999")
};
static const QColor colorNeutralForegroundDisabled[ThemeCount] = {
    _sc("#ffbdbdbd"), _sc("#ff5c5c5c"), _sc("#ffbdbdbd"), _sc("#ff5c5c5c")
};
static const QColor colorNeutralForegroundInvertedDisabled[ThemeCount] = {
    _sc("#66ffffff"), _sc("#66ffffff"), _sc("#66ffffff"), _sc("#66ffffff")
};
static const QColor colorBrandForegroundLink[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff479ef5"), _sc("#ff4f52b2"), _sc("#ff7f85f5")
};
static const QColor colorBrandForegroundLinkHover[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff62abf5"), _sc("#ff444791"), _sc("#ff9299f7")
};
static const QColor colorBrandForegroundLinkPressed[ThemeCount] = {
    _sc("#ff0c3b5e"), _sc("#ff2886de"), _sc("#ff383966"), _sc("#ff7579eb")
};
static const QColor colorBrandForegroundLinkSelected[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff479ef5"), _sc("#ff4f52b2"), _sc("#ff7f85f5")
};
static const QColor colorNeutralForeground2Link[ThemeCount] = {
    _sc("#ff424242"), _sc("#ffd6d6d6"), _sc("#ff424242"), _sc("#ffd6d6d6")
};
static const QColor colorNeutralForeground2LinkHover[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground2LinkPressed[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorNeutralForeground2LinkSelected[ThemeCount] = {
    _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff")
};
static const QColor colorCompoundBrandForeground1[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorCompoundBrandForeground1Hover[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff62abf5"), _sc("#ff4f52b2"), _sc("#ff9299f7")
};
static const QColor colorCompoundBrandForeground1Pressed[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff2886de"), _sc("#ff444791"), _sc("#ff7579eb")
};
static const QColor colorBrandForeground1[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorBrandForeground2[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff62abf5"), _sc("#ff4f52b2"), _sc("#ffaab1fa")
};
static const QColor colorBrandForeground2Hover[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff96c6fa"), _sc("#ff444791"), _sc("#ffb6bcfa")
};
static const QColor colorBrandForeground2Pressed[ThemeCount] = {
    _sc("#ff0a2e4a"), _sc("#ffebf3fc"), _sc("#ff333357"), _sc("#ffe8ebfa")
};
static const QColor colorNeutralForeground1Static[ThemeCount] = {
    _sc("#ff242424"), _sc("#ff242424"), _sc("#ff242424"), _sc("#ff242424")
};
static const QColor colorNeutralForegroundStaticInverted[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralForegroundInverted[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424")
};
static const QColor colorNeutralForegroundInvertedHover[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424")
};
static const QColor colorNeutralForegroundInvertedPressed[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424")
};
static const QColor colorNeutralForegroundInvertedSelected[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424")
};
static const QColor colorNeutralForegroundInverted2[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff242424"), _sc("#ffffffff"), _sc("#ff242424")
};
static const QColor colorNeutralForegroundOnBrand[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralForegroundInvertedLink[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralForegroundInvertedLinkHover[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralForegroundInvertedLinkPressed[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralForegroundInvertedLinkSelected[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorBrandForegroundInverted[ThemeCount] = {
    _sc("#ff479ef5"), _sc("#ff0f6cbd"), _sc("#ff7f85f5"), _sc("#ff5b5fc7")
};
static const QColor colorBrandForegroundInvertedHover[ThemeCount] = {
    _sc("#ff62abf5"), _sc("#ff115ea3"), _sc("#ff9299f7"), _sc("#ff4f52b2")
};
static const QColor colorBrandForegroundInvertedPressed[ThemeCount] = {
    _sc("#ff479ef5"), _sc("#ff0f548c"), _sc("#ff7f85f5"), _sc("#ff444791")
};
static const QColor colorBrandForegroundOnLight[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff0f6cbd"), _sc("#ff5b5fc7"), _sc("#ff5b5fc7")
};
static const QColor colorBrandForegroundOnLightHover[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff115ea3"), _sc("#ff4f52b2"), _sc("#ff4f52b2")
};
static const QColor colorBrandForegroundOnLightPressed[ThemeCount] = {
    _sc("#ff0e4775"), _sc("#ff0e4775"), _sc("#ff3d3e78"), _sc("#ff3d3e78")
};
static const QColor colorBrandForegroundOnLightSelected[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff0f548c"), _sc("#ff444791"), _sc("#ff444791")
};
static const QColor colorNeutralBackground1[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff292929"), _sc("#ffffffff"), _sc("#ff292929")
};
static const QColor colorNeutralBackground1Hover[ThemeCount] = {
    _sc("#fff5f5f5"), _sc("#ff3d3d3d"), _sc("#fff5f5f5"), _sc("#ff3d3d3d")
};
static const QColor colorNeutralBackground1Pressed[ThemeCount] = {
    _sc("#ffe0e0e0"), _sc("#ff1f1f1f"), _sc("#ffe0e0e0"), _sc("#ff1f1f1f")
};
static const QColor colorNeutralBackground1Selected[ThemeCount] = {
    _sc("#ffebebeb"), _sc("#ff383838"), _sc("#ffebebeb"), _sc("#ff383838")
};
static const QColor colorNeutralBackground2[ThemeCount] = {
    _sc("#fffafafa"), _sc("#ff1f1f1f"), _sc("#fffafafa"), _sc("#ff242424")
};
static const QColor colorNeutralBackground2Hover[ThemeCount] = {
    _sc("#fff0f0f0"), _sc("#ff333333"), _sc("#fff0f0f0"), _sc("#ff383838")
};
static const QColor colorNeutralBackground2Pressed[ThemeCount] = {
    _sc("#ffdbdbdb"), _sc("#ff141414"), _sc("#ffdbdbdb"), _sc("#ff1a1a1a")
};
static const QColor colorNeutralBackground2Selected[ThemeCount] = {
    _sc("#ffe6e6e6"), _sc("#ff2e2e2e"), _sc("#ffe6e6e6"), _sc("#ff333333")
};
static const QColor colorNeutralBackground3[ThemeCount] = {
    _sc("#fff5f5f5"), _sc("#ff141414"), _sc("#fff5f5f5"), _sc("#ff1f1f1f")
};
static const QColor colorNeutralBackground3Hover[ThemeCount] = {
    _sc("#ffebebeb"), _sc("#ff292929"), _sc("#ffebebeb"), _sc("#ff333333")
};
static const QColor colorNeutralBackground3Pressed[ThemeCount] = {
    _sc("#ffd6d6d6"), _sc("#ff0a0a0a"), _sc("#ffd6d6d6"), _sc("#ff141414")
};
static const QColor colorNeutralBackground3Selected[ThemeCount] = {
    _sc("#ffe0e0e0"), _sc("#ff242424"), _sc("#ffe0e0e0"), _sc("#ff2e2e2e")
};
static const QColor colorNeutralBackground4[ThemeCount] = {
    _sc("#fff0f0f0"), _sc("#ff0a0a0a"), _sc("#fff0f0f0"), _sc("#ff141414")
};
static const QColor colorNeutralBackground4Hover[ThemeCount] = {
    _sc("#fffafafa"), _sc("#ff1f1f1f"), _sc("#fffafafa"), _sc("#ff292929")
};
static const QColor colorNeutralBackground4Pressed[ThemeCount] = {
    _sc("#fff5f5f5"), _sc("#ff000000"), _sc("#fff5f5f5"), _sc("#ff0a0a0a")
};
static const QColor colorNeutralBackground4Selected[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff1a1a1a"), _sc("#ffffffff"), _sc("#ff242424")
};
static const QColor colorNeutralBackground5[ThemeCount] = {
    _sc("#ffebebeb"), _sc("#ff000000"), _sc("#ffebebeb"), _sc("#ff0a0a0a")
};
static const QColor colorNeutralBackground5Hover[ThemeCount] = {
    _sc("#fff5f5f5"), _sc("#ff141414"), _sc("#fff5f5f5"), _sc("#ff1f1f1f")
};
static const QColor colorNeutralBackground5Pressed[ThemeCount] = {
    _sc("#fff0f0f0"), _sc("#ff050505"), _sc("#fff0f0f0"), _sc("#ff000000")
};
static const QColor colorNeutralBackground5Selected[ThemeCount] = {
    _sc("#fffafafa"), _sc("#ff0f0f0f"), _sc("#fffafafa"), _sc("#ff1a1a1a")
};
static const QColor colorNeutralBackground6[ThemeCount] = {
    _sc("#ffe6e6e6"), _sc("#ff333333"), _sc("#ffe6e6e6"), _sc("#ff333333")
};
static const QColor colorNeutralBackgroundInverted[ThemeCount] = {
    _sc("#ff292929"), _sc("#ffffffff"), _sc("#ff292929"), _sc("#ffffffff")
};
static const QColor colorNeutralBackgroundStatic[ThemeCount] = {
    _sc("#ff333333"), _sc("#ff3d3d3d"), _sc("#ff333333"), _sc("#ff3d3d3d")
};
static const QColor colorNeutralBackgroundAlpha[ThemeCount] = {
    _sc("#7fffffff"), _sc("#801a1a1a"), _sc("#80ffffff"), _sc("#801a1a1a")
};
static const QColor colorNeutralBackgroundAlpha2[ThemeCount] = {
    _sc("#ccffffff"), _sc("#b31f1f1f"), _sc("#ccffffff"), _sc("#b31f1f1f")
};
static const QColor colorSubtleBackground[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorSubtleBackgroundHover[ThemeCount] = {
    _sc("#fff5f5f5"), _sc("#ff383838"), _sc("#fff5f5f5"), _sc("#ff383838")
};
static const QColor colorSubtleBackgroundPressed[ThemeCount] = {
    _sc("#ffe0e0e0"), _sc("#ff2e2e2e"), _sc("#ffe0e0e0"), _sc("#ff2e2e2e")
};
static const QColor colorSubtleBackgroundSelected[ThemeCount] = {
    _sc("#ffebebeb"), _sc("#ff333333"), _sc("#ffebebeb"), _sc("#ff333333")
};
static const QColor colorSubtleBackgroundLightAlphaHover[ThemeCount] = {
    _sc("#b3ffffff"), _sc("#cc242424"), _sc("#b3ffffff"), _sc("#cc242424")
};
static const QColor colorSubtleBackgroundLightAlphaPressed[ThemeCount] = {
    _sc("#7fffffff"), _sc("#80242424"), _sc("#80ffffff"), _sc("#80242424")
};
static const QColor colorSubtleBackgroundLightAlphaSelected[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorSubtleBackgroundInverted[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorSubtleBackgroundInvertedHover[ThemeCount] = {
    _sc("#1a000000"), _sc("#19000000"), _sc("#19000000"), _sc("#19000000")
};
static const QColor colorSubtleBackgroundInvertedPressed[ThemeCount] = {
    _sc("#4d000000"), _sc("#4d000000"), _sc("#4d000000"), _sc("#4d000000")
};
static const QColor colorSubtleBackgroundInvertedSelected[ThemeCount] = {
    _sc("#33000000"), _sc("#33000000"), _sc("#33000000"), _sc("#33000000")
};
static const QColor colorTransparentBackground[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorTransparentBackgroundHover[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorTransparentBackgroundPressed[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorTransparentBackgroundSelected[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorNeutralBackgroundDisabled[ThemeCount] = {
    _sc("#fff0f0f0"), _sc("#ff141414"), _sc("#fff0f0f0"), _sc("#ff141414")
};
static const QColor colorNeutralBackgroundInvertedDisabled[ThemeCount] = {
    _sc("#1affffff"), _sc("#19ffffff"), _sc("#19ffffff"), _sc("#19ffffff")
};
static const QColor colorNeutralStencil1[ThemeCount] = {
    _sc("#ffe6e6e6"), _sc("#ff575757"), _sc("#ffe6e6e6"), _sc("#ff575757")
};
static const QColor colorNeutralStencil2[ThemeCount] = {
    _sc("#fffafafa"), _sc("#ff333333"), _sc("#fffafafa"), _sc("#ff333333")
};
static const QColor colorNeutralStencil1Alpha[ThemeCount] = {
    _sc("#1a000000"), _sc("#19ffffff"), _sc("#19000000"), _sc("#19ffffff")
};
static const QColor colorNeutralStencil2Alpha[ThemeCount] = {
    _sc("#0d000000"), _sc("#0dffffff"), _sc("#0d000000"), _sc("#80ffffff")
};
static const QColor colorBackgroundOverlay[ThemeCount] = {
    _sc("#66000000"), _sc("#80000000"), _sc("#66000000"), _sc("#80000000")
};
static const QColor colorScrollbarOverlay[ThemeCount] = {
    _sc("#80000000"), _sc("#99ffffff"), _sc("#80000000"), _sc("#99ffffff")
};
static const QColor colorBrandBackground[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff115ea3"), _sc("#ff5b5fc7"), _sc("#ff4f52b2")
};
static const QColor colorBrandBackgroundHover[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff0f6cbd"), _sc("#ff4f52b2"), _sc("#ff5b5fc7")
};
static const QColor colorBrandBackgroundPressed[ThemeCount] = {
    _sc("#ff0c3b5e"), _sc("#ff0c3b5e"), _sc("#ff383966"), _sc("#ff383966")
};
static const QColor colorBrandBackgroundSelected[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff0f548c"), _sc("#ff444791"), _sc("#ff444791")
};
static const QColor colorCompoundBrandBackground[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorCompoundBrandBackgroundHover[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff62abf5"), _sc("#ff4f52b2"), _sc("#ff9299f7")
};
static const QColor colorCompoundBrandBackgroundPressed[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff2886de"), _sc("#ff444791"), _sc("#ff7579eb")
};
static const QColor colorBrandBackgroundStatic[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff0f6cbd"), _sc("#ff5b5fc7"), _sc("#ff5b5fc7")
};
static const QColor colorBrandBackground2[ThemeCount] = {
    _sc("#ffebf3fc"), _sc("#ff082338"), _sc("#ffe8ebfa"), _sc("#ff2f2f4a")
};
static const QColor colorBrandBackground2Hover[ThemeCount] = {
    _sc("#ffcfe4fa"), _sc("#ff0c3b5e"), _sc("#ffdce0fa"), _sc("#ff383966")
};
static const QColor colorBrandBackground2Pressed[ThemeCount] = {
    _sc("#ff96c6fa"), _sc("#ff061724"), _sc("#ffb6bcfa"), _sc("#ff2b2b40")
};
static const QColor colorBrandBackground3Static[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff0f548c"), _sc("#ff444791"), _sc("#ff444791")
};
static const QColor colorBrandBackground4Static[ThemeCount] = {
    _sc("#ff0c3b5e"), _sc("#ff0c3b5e"), _sc("#ff383966"), _sc("#ff383966")
};
static const QColor colorBrandBackgroundInverted[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorBrandBackgroundInvertedHover[ThemeCount] = {
    _sc("#ffebf3fc"), _sc("#ffebf3fc"), _sc("#ffe8ebfa"), _sc("#ffe8ebfa")
};
static const QColor colorBrandBackgroundInvertedPressed[ThemeCount] = {
    _sc("#ffb4d6fa"), _sc("#ffb4d6fa"), _sc("#ffc5cbfa"), _sc("#ffc5cbfa")
};
static const QColor colorBrandBackgroundInvertedSelected[ThemeCount] = {
    _sc("#ffcfe4fa"), _sc("#ffcfe4fa"), _sc("#ffdce0fa"), _sc("#ffdce0fa")
};
static const QColor colorNeutralCardBackground[ThemeCount] = {
    _sc("#fffafafa"), _sc("#ff333333"), _sc("#fffafafa"), _sc("#ff333333")
};
static const QColor colorNeutralCardBackgroundHover[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff3d3d3d"), _sc("#ffffffff"), _sc("#ff3d3d3d")
};
static const QColor colorNeutralCardBackgroundPressed[ThemeCount] = {
    _sc("#fff5f5f5"), _sc("#ff2e2e2e"), _sc("#fff5f5f5"), _sc("#ff2e2e2e")
};
static const QColor colorNeutralCardBackgroundSelected[ThemeCount] = {
    _sc("#ffebebeb"), _sc("#ff383838"), _sc("#ffebebeb"), _sc("#ff383838")
};
static const QColor colorNeutralCardBackgroundDisabled[ThemeCount] = {
    _sc("#fff0f0f0"), _sc("#ff141414"), _sc("#fff0f0f0"), _sc("#ff141414")
};
static const QColor colorNeutralStrokeAccessible[ThemeCount] = {
    _sc("#ff616161"), _sc("#ffadadad"), _sc("#ff616161"), _sc("#ffadadad")
};
static const QColor colorNeutralStrokeAccessibleHover[ThemeCount] = {
    _sc("#ff575757"), _sc("#ffbdbdbd"), _sc("#ff575757"), _sc("#ffbdbdbd")
};
static const QColor colorNeutralStrokeAccessiblePressed[ThemeCount] = {
    _sc("#ff4d4d4d"), _sc("#ffb3b3b3"), _sc("#ff4d4d4d"), _sc("#ffb3b3b3")
};
static const QColor colorNeutralStrokeAccessibleSelected[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorNeutralStroke1[ThemeCount] = {
    _sc("#ffd1d1d1"), _sc("#ff666666"), _sc("#ffd1d1d1"), _sc("#ff666666")
};
static const QColor colorNeutralStroke1Hover[ThemeCount] = {
    _sc("#ffc7c7c7"), _sc("#ff757575"), _sc("#ffc7c7c7"), _sc("#ff757575")
};
static const QColor colorNeutralStroke1Pressed[ThemeCount] = {
    _sc("#ffb3b3b3"), _sc("#ff6b6b6b"), _sc("#ffb3b3b3"), _sc("#ff6b6b6b")
};
static const QColor colorNeutralStroke1Selected[ThemeCount] = {
    _sc("#ffbdbdbd"), _sc("#ff707070"), _sc("#ffbdbdbd"), _sc("#ff707070")
};
static const QColor colorNeutralStroke2[ThemeCount] = {
    _sc("#ffe0e0e0"), _sc("#ff525252"), _sc("#ffe0e0e0"), _sc("#ff525252")
};
static const QColor colorNeutralStroke3[ThemeCount] = {
    _sc("#fff0f0f0"), _sc("#ff3d3d3d"), _sc("#fff0f0f0"), _sc("#ff3d3d3d")
};
static const QColor colorNeutralStrokeSubtle[ThemeCount] = {
    _sc("#ffe0e0e0"), _sc("#ff0a0a0a"), _sc("#ffe0e0e0"), _sc("#ff0a0a0a")
};
static const QColor colorNeutralStrokeOnBrand[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff292929"), _sc("#ffffffff"), _sc("#ff292929")
};
static const QColor colorNeutralStrokeOnBrand2[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralStrokeOnBrand2Hover[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralStrokeOnBrand2Pressed[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorNeutralStrokeOnBrand2Selected[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff"), _sc("#ffffffff")
};
static const QColor colorBrandStroke1[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7f85f5")
};
static const QColor colorBrandStroke2[ThemeCount] = {
    _sc("#ffb4d6fa"), _sc("#ff0e4775"), _sc("#ffc5cbfa"), _sc("#ff3d3e78")
};
static const QColor colorBrandStroke2Hover[ThemeCount] = {
    _sc("#ff77b7f7"), _sc("#ff0e4775"), _sc("#ffaab1fa"), _sc("#ff3d3e78")
};
static const QColor colorBrandStroke2Pressed[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff0a2e4a"), _sc("#ff5b5fc7"), _sc("#ff333357")
};
static const QColor colorBrandStroke2Contrast[ThemeCount] = {
    _sc("#ffb4d6fa"), _sc("#ff0e4775"), _sc("#ffc5cbfa"), _sc("#ff3d3e78")
};
static const QColor colorCompoundBrandStroke[ThemeCount] = {
    _sc("#ff0f6cbd"), _sc("#ff479ef5"), _sc("#ff5b5fc7"), _sc("#ff7579eb")
};
static const QColor colorCompoundBrandStrokeHover[ThemeCount] = {
    _sc("#ff115ea3"), _sc("#ff62abf5"), _sc("#ff4f52b2"), _sc("#ff7f85f5")
};
static const QColor colorCompoundBrandStrokePressed[ThemeCount] = {
    _sc("#ff0f548c"), _sc("#ff2886de"), _sc("#ff444791"), _sc("#ff5b5fc7")
};
static const QColor colorNeutralStrokeDisabled[ThemeCount] = {
    _sc("#ffe0e0e0"), _sc("#ff424242"), _sc("#ffe0e0e0"), _sc("#ff424242")
};
static const QColor colorNeutralStrokeInvertedDisabled[ThemeCount] = {
    _sc("#66ffffff"), _sc("#66ffffff"), _sc("#66ffffff"), _sc("#66ffffff")
};
static const QColor colorTransparentStroke[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorTransparentStrokeInteractive[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorTransparentStrokeDisabled[ThemeCount] = {
    _sc("#00000000"), _sc("#00000000"), _sc("#00000000"), _sc("#00000000")
};
static const QColor colorNeutralStrokeAlpha[ThemeCount] = {
    _sc("#0d000000"), _sc("#19ffffff"), _sc("#0d000000"), _sc("#19ffffff")
};
static const QColor colorNeutralStrokeAlpha2[ThemeCount] = {
    _sc("#33ffffff"), _sc("#33ffffff"), _sc("#33ffffff"), _sc("#33ffffff")
};
static const QColor colorStrokeFocus1[ThemeCount] = {
    _sc("#ffffffff"), _sc("#ff000000"), _sc("#ffffffff"), _sc("#ff000000")
};
static const QColor colorStrokeFocus2[ThemeCount] = {
    _sc("#ff000000"), _sc("#ffffffff"), _sc("#ff000000"), _sc("#ffffffff")
};
static const QColor colorNeutralShadowAmbient[ThemeCount] = {
    _sc("#1f000000"), _sc("#3d000000"), _sc("#1f000000"), _sc("#3d000000")
};
static const QColor colorNeutralShadowKey[ThemeCount] = {
    _sc("#24000000"), _sc("#47000000"), _sc("#24000000"), _sc("#47000000")
};
static const QColor colorNeutralShadowAmbientLighter[ThemeCount] = {
    _sc("#0f000000"), _sc("#1f000000"), _sc("#0f000000"), _sc("#1f000000")
};
static const QColor colorNeutralShadowKeyLighter[ThemeCount] = {
    _sc("#12000000"), _sc("#24000000"), _sc("#12000000"), _sc("#24000000")
};
static const QColor colorNeutralShadowAmbientDarker[ThemeCount] = {
    _sc("#33000000"), _sc("#66000000"), _sc("#33000000"), _sc("#66000000")
};
static const QColor colorNeutralShadowKeyDarker[ThemeCount] = {
    _sc("#3d000000"), _sc("#7a000000"), _sc("#3d000000"), _sc("#7a000000")
};
static const QColor colorBrandShadowAmbient[ThemeCount] = {
    _sc("#4d000000"), _sc("#4d000000"), _sc("#4d000000"), _sc("#4d000000")
};
static const QColor colorBrandShadowKey[ThemeCount] = {
    _sc("#40000000"), _sc("#40000000"), _sc("#40000000"), _sc("#40000000")
};
static const QColor colorPaletteRedBackground1[ThemeCount] = {
    _sc("#fffdf6f6"), _sc("#ff3f1011"), _sc("#fffdf6f6"), _sc("#ff3f1011")
};
static const QColor colorPaletteRedBackground2[ThemeCount] = {
    _sc("#fff1bbbc"), _sc("#ff751d1f"), _sc("#fff1bbbc"), _sc("#ff751d1f")
};
static const QColor colorPaletteRedBackground3[ThemeCount] = {
    _sc("#ffd13438"), _sc("#ffd13438"), _sc("#ffd13438"), _sc("#ffd13438")
};
static const QColor colorPaletteRedForeground1[ThemeCount] = {
    _sc("#ffbc2f32"), _sc("#ffe37d80"), _sc("#ffbc2f32"), _sc("#ffe37d80")
};
static const QColor colorPaletteRedForeground2[ThemeCount] = {
    _sc("#ff751d1f"), _sc("#fff1bbbc"), _sc("#ff751d1f"), _sc("#fff1bbbc")
};
static const QColor colorPaletteRedForeground3[ThemeCount] = {
    _sc("#ffd13438"), _sc("#ffe37d80"), _sc("#ffd13438"), _sc("#ffe37d80")
};
static const QColor colorPaletteRedBorderActive[ThemeCount] = {
    _sc("#ffd13438"), _sc("#ffe37d80"), _sc("#ffd13438"), _sc("#ffe37d80")
};
static const QColor colorPaletteRedBorder1[ThemeCount] = {
    _sc("#fff1bbbc"), _sc("#ffd13438"), _sc("#fff1bbbc"), _sc("#ffd13438")
};
static const QColor colorPaletteRedBorder2[ThemeCount] = {
    _sc("#ffd13438"), _sc("#ffe37d80"), _sc("#ffd13438"), _sc("#ffe37d80")
};
static const QColor colorPaletteGreenBackground1[ThemeCount] = {
    _sc("#fff1faf1"), _sc("#ff052505"), _sc("#fff1faf1"), _sc("#ff052505")
};
static const QColor colorPaletteGreenBackground2[ThemeCount] = {
    _sc("#ff9fd89f"), _sc("#ff094509"), _sc("#ff9fd89f"), _sc("#ff094509")
};
static const QColor colorPaletteGreenBackground3[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff107c10"), _sc("#ff107c10"), _sc("#ff107c10")
};
static const QColor colorPaletteGreenForeground1[ThemeCount] = {
    _sc("#ff0e700e"), _sc("#ff54b054"), _sc("#ff0e700e"), _sc("#ff54b054")
};
static const QColor colorPaletteGreenForeground2[ThemeCount] = {
    _sc("#ff094509"), _sc("#ff9fd89f"), _sc("#ff094509"), _sc("#ff9fd89f")
};
static const QColor colorPaletteGreenForeground3[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff9fd89f"), _sc("#ff107c10"), _sc("#ff9fd89f")
};
static const QColor colorPaletteGreenBorderActive[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff54b054"), _sc("#ff107c10"), _sc("#ff54b054")
};
static const QColor colorPaletteGreenBorder1[ThemeCount] = {
    _sc("#ff9fd89f"), _sc("#ff107c10"), _sc("#ff9fd89f"), _sc("#ff107c10")
};
static const QColor colorPaletteGreenBorder2[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff9fd89f"), _sc("#ff107c10"), _sc("#ff9fd89f")
};
static const QColor colorPaletteDarkOrangeBackground1[ThemeCount] = {
    _sc("#fffdf6f3"), _sc("#ff411200"), _sc("#fffdf6f3"), _sc("#ff411200")
};
static const QColor colorPaletteDarkOrangeBackground2[ThemeCount] = {
    _sc("#fff4bfab"), _sc("#ff7a2101"), _sc("#fff4bfab"), _sc("#ff7a2101")
};
static const QColor colorPaletteDarkOrangeBackground3[ThemeCount] = {
    _sc("#ffda3b01"), _sc("#ffda3b01"), _sc("#ffda3b01"), _sc("#ffda3b01")
};
static const QColor colorPaletteDarkOrangeForeground1[ThemeCount] = {
    _sc("#ffc43501"), _sc("#ffe9835e"), _sc("#ffc43501"), _sc("#ffe9835e")
};
static const QColor colorPaletteDarkOrangeForeground2[ThemeCount] = {
    _sc("#ff7a2101"), _sc("#fff4bfab"), _sc("#ff7a2101"), _sc("#fff4bfab")
};
static const QColor colorPaletteDarkOrangeForeground3[ThemeCount] = {
    _sc("#ffda3b01"), _sc("#ffe9835e"), _sc("#ffda3b01"), _sc("#ffe9835e")
};
static const QColor colorPaletteDarkOrangeBorderActive[ThemeCount] = {
    _sc("#ffda3b01"), _sc("#ffe9835e"), _sc("#ffda3b01"), _sc("#ffe9835e")
};
static const QColor colorPaletteDarkOrangeBorder1[ThemeCount] = {
    _sc("#fff4bfab"), _sc("#ffda3b01"), _sc("#fff4bfab"), _sc("#ffda3b01")
};
static const QColor colorPaletteDarkOrangeBorder2[ThemeCount] = {
    _sc("#ffda3b01"), _sc("#ffe9835e"), _sc("#ffda3b01"), _sc("#ffe9835e")
};
static const QColor colorPaletteYellowBackground1[ThemeCount] = {
    _sc("#fffffef5"), _sc("#ff4c4400"), _sc("#fffffef5"), _sc("#ff4c4400")
};
static const QColor colorPaletteYellowBackground2[ThemeCount] = {
    _sc("#fffef7b2"), _sc("#ff817400"), _sc("#fffef7b2"), _sc("#ff817400")
};
static const QColor colorPaletteYellowBackground3[ThemeCount] = {
    _sc("#fffde300"), _sc("#fffde300"), _sc("#fffde300"), _sc("#fffde300")
};
static const QColor colorPaletteYellowForeground1[ThemeCount] = {
    _sc("#ff817400"), _sc("#fffeee66"), _sc("#ff817400"), _sc("#fffeee66")
};
static const QColor colorPaletteYellowForeground2[ThemeCount] = {
    _sc("#ff817400"), _sc("#fffef7b2"), _sc("#ff817400"), _sc("#fffef7b2")
};
static const QColor colorPaletteYellowForeground3[ThemeCount] = {
    _sc("#fffde300"), _sc("#fffdea3d"), _sc("#fffde300"), _sc("#fffdea3d")
};
static const QColor colorPaletteYellowBorderActive[ThemeCount] = {
    _sc("#fffde300"), _sc("#fffeee66"), _sc("#fffde300"), _sc("#fffeee66")
};
static const QColor colorPaletteYellowBorder1[ThemeCount] = {
    _sc("#fffef7b2"), _sc("#fffde300"), _sc("#fffef7b2"), _sc("#fffde300")
};
static const QColor colorPaletteYellowBorder2[ThemeCount] = {
    _sc("#fffde300"), _sc("#fffdea3d"), _sc("#fffde300"), _sc("#fffdea3d")
};
static const QColor colorPaletteBerryBackground1[ThemeCount] = {
    _sc("#fffdf5fc"), _sc("#ff3a1136"), _sc("#fffdf5fc"), _sc("#ff3a1136")
};
static const QColor colorPaletteBerryBackground2[ThemeCount] = {
    _sc("#ffedbbe7"), _sc("#ff6d2064"), _sc("#ffedbbe7"), _sc("#ff6d2064")
};
static const QColor colorPaletteBerryBackground3[ThemeCount] = {
    _sc("#ffc239b3"), _sc("#ffc239b3"), _sc("#ffc239b3"), _sc("#ffc239b3")
};
static const QColor colorPaletteBerryForeground1[ThemeCount] = {
    _sc("#ffaf33a1"), _sc("#ffda7ed0"), _sc("#ffaf33a1"), _sc("#ffda7ed0")
};
static const QColor colorPaletteBerryForeground2[ThemeCount] = {
    _sc("#ff6d2064"), _sc("#ffedbbe7"), _sc("#ff6d2064"), _sc("#ffedbbe7")
};
static const QColor colorPaletteBerryForeground3[ThemeCount] = {
    _sc("#ffc239b3"), _sc("#ffd161c4"), _sc("#ffc239b3"), _sc("#ffd161c4")
};
static const QColor colorPaletteBerryBorderActive[ThemeCount] = {
    _sc("#ffc239b3"), _sc("#ffda7ed0"), _sc("#ffc239b3"), _sc("#ffda7ed0")
};
static const QColor colorPaletteBerryBorder1[ThemeCount] = {
    _sc("#ffedbbe7"), _sc("#ffc239b3"), _sc("#ffedbbe7"), _sc("#ffc239b3")
};
static const QColor colorPaletteBerryBorder2[ThemeCount] = {
    _sc("#ffc239b3"), _sc("#ffd161c4"), _sc("#ffc239b3"), _sc("#ffd161c4")
};
static const QColor colorPaletteLightGreenBackground1[ThemeCount] = {
    _sc("#fff2fbf2"), _sc("#ff063004"), _sc("#fff2fbf2"), _sc("#ff063004")
};
static const QColor colorPaletteLightGreenBackground2[ThemeCount] = {
    _sc("#ffa7e3a5"), _sc("#ff0b5a08"), _sc("#ffa7e3a5"), _sc("#ff0b5a08")
};
static const QColor colorPaletteLightGreenBackground3[ThemeCount] = {
    _sc("#ff13a10e"), _sc("#ff13a10e"), _sc("#ff13a10e"), _sc("#ff13a10e")
};
static const QColor colorPaletteLightGreenForeground1[ThemeCount] = {
    _sc("#ff11910d"), _sc("#ff5ec75a"), _sc("#ff11910d"), _sc("#ff5ec75a")
};
static const QColor colorPaletteLightGreenForeground2[ThemeCount] = {
    _sc("#ff0b5a08"), _sc("#ffa7e3a5"), _sc("#ff0b5a08"), _sc("#ffa7e3a5")
};
static const QColor colorPaletteLightGreenForeground3[ThemeCount] = {
    _sc("#ff13a10e"), _sc("#ff3db838"), _sc("#ff13a10e"), _sc("#ff3db838")
};
static const QColor colorPaletteLightGreenBorderActive[ThemeCount] = {
    _sc("#ff13a10e"), _sc("#ff5ec75a"), _sc("#ff13a10e"), _sc("#ff5ec75a")
};
static const QColor colorPaletteLightGreenBorder1[ThemeCount] = {
    _sc("#ffa7e3a5"), _sc("#ff13a10e"), _sc("#ffa7e3a5"), _sc("#ff13a10e")
};
static const QColor colorPaletteLightGreenBorder2[ThemeCount] = {
    _sc("#ff13a10e"), _sc("#ff3db838"), _sc("#ff13a10e"), _sc("#ff3db838")
};
static const QColor colorPaletteMarigoldBackground1[ThemeCount] = {
    _sc("#fffefbf4"), _sc("#ff463100"), _sc("#fffefbf4"), _sc("#ff463100")
};
static const QColor colorPaletteMarigoldBackground2[ThemeCount] = {
    _sc("#fff9e2ae"), _sc("#ff835b00"), _sc("#fff9e2ae"), _sc("#ff835b00")
};
static const QColor colorPaletteMarigoldBackground3[ThemeCount] = {
    _sc("#ffeaa300"), _sc("#ffeaa300"), _sc("#ffeaa300"), _sc("#ffeaa300")
};
static const QColor colorPaletteMarigoldForeground1[ThemeCount] = {
    _sc("#ffd39300"), _sc("#fff2c661"), _sc("#ffd39300"), _sc("#fff2c661")
};
static const QColor colorPaletteMarigoldForeground2[ThemeCount] = {
    _sc("#ff835b00"), _sc("#fff9e2ae"), _sc("#ff835b00"), _sc("#fff9e2ae")
};
static const QColor colorPaletteMarigoldForeground3[ThemeCount] = {
    _sc("#ffeaa300"), _sc("#ffefb839"), _sc("#ffeaa300"), _sc("#ffefb839")
};
static const QColor colorPaletteMarigoldBorderActive[ThemeCount] = {
    _sc("#ffeaa300"), _sc("#fff2c661"), _sc("#ffeaa300"), _sc("#fff2c661")
};
static const QColor colorPaletteMarigoldBorder1[ThemeCount] = {
    _sc("#fff9e2ae"), _sc("#ffeaa300"), _sc("#fff9e2ae"), _sc("#ffeaa300")
};
static const QColor colorPaletteMarigoldBorder2[ThemeCount] = {
    _sc("#ffeaa300"), _sc("#ffefb839"), _sc("#ffeaa300"), _sc("#ffefb839")
};
static const QColor colorPaletteRedForegroundInverted[ThemeCount] = {
    _sc("#ffdc5e62"), _sc("#ffd13438"), _sc("#ffdc5e62"), _sc("#ffd13438")
};
static const QColor colorPaletteGreenForegroundInverted[ThemeCount] = {
    _sc("#ff359b35"), _sc("#ff107c10"), _sc("#ff359b35"), _sc("#ff107c10")
};
static const QColor colorPaletteYellowForegroundInverted[ThemeCount] = {
    _sc("#fffef7b2"), _sc("#ff817400"), _sc("#fffef7b2"), _sc("#ff817400")
};
static const QColor colorPaletteDarkRedBackground2[ThemeCount] = {
    _sc("#ffd69ca5"), _sc("#ff590815"), _sc("#ffd69ca5"), _sc("#ff590815")
};
static const QColor colorPaletteDarkRedForeground2[ThemeCount] = {
    _sc("#ff420610"), _sc("#ffd69ca5"), _sc("#ff420610"), _sc("#ffd69ca5")
};
static const QColor colorPaletteDarkRedBorderActive[ThemeCount] = {
    _sc("#ff750b1c"), _sc("#ffac4f5e"), _sc("#ff750b1c"), _sc("#ffac4f5e")
};
static const QColor colorPaletteCranberryBackground2[ThemeCount] = {
    _sc("#ffeeacb2"), _sc("#ff6e0811"), _sc("#ffeeacb2"), _sc("#ff6e0811")
};
static const QColor colorPaletteCranberryForeground2[ThemeCount] = {
    _sc("#ff6e0811"), _sc("#ffeeacb2"), _sc("#ff6e0811"), _sc("#ffeeacb2")
};
static const QColor colorPaletteCranberryBorderActive[ThemeCount] = {
    _sc("#ffc50f1f"), _sc("#ffdc626d"), _sc("#ffc50f1f"), _sc("#ffdc626d")
};
static const QColor colorPalettePumpkinBackground2[ThemeCount] = {
    _sc("#ffefc4ad"), _sc("#ff712d09"), _sc("#ffefc4ad"), _sc("#ff712d09")
};
static const QColor colorPalettePumpkinForeground2[ThemeCount] = {
    _sc("#ff712d09"), _sc("#ffefc4ad"), _sc("#ff712d09"), _sc("#ffefc4ad")
};
static const QColor colorPalettePumpkinBorderActive[ThemeCount] = {
    _sc("#ffca5010"), _sc("#ffdf8e64"), _sc("#ffca5010"), _sc("#ffdf8e64")
};
static const QColor colorPalettePeachBackground2[ThemeCount] = {
    _sc("#ffffddb3"), _sc("#ff8f4e00"), _sc("#ffffddb3"), _sc("#ff8f4e00")
};
static const QColor colorPalettePeachForeground2[ThemeCount] = {
    _sc("#ff8f4e00"), _sc("#ffffddb3"), _sc("#ff8f4e00"), _sc("#ffffddb3")
};
static const QColor colorPalettePeachBorderActive[ThemeCount] = {
    _sc("#ffff8c00"), _sc("#ffffba66"), _sc("#ffff8c00"), _sc("#ffffba66")
};
static const QColor colorPaletteGoldBackground2[ThemeCount] = {
    _sc("#ffecdfa5"), _sc("#ff6c5700"), _sc("#ffecdfa5"), _sc("#ff6c5700")
};
static const QColor colorPaletteGoldForeground2[ThemeCount] = {
    _sc("#ff6c5700"), _sc("#ffecdfa5"), _sc("#ff6c5700"), _sc("#ffecdfa5")
};
static const QColor colorPaletteGoldBorderActive[ThemeCount] = {
    _sc("#ffc19c00"), _sc("#ffdac157"), _sc("#ffc19c00"), _sc("#ffdac157")
};
static const QColor colorPaletteBrassBackground2[ThemeCount] = {
    _sc("#ffe0cea2"), _sc("#ff553e06"), _sc("#ffe0cea2"), _sc("#ff553e06")
};
static const QColor colorPaletteBrassForeground2[ThemeCount] = {
    _sc("#ff553e06"), _sc("#ffe0cea2"), _sc("#ff553e06"), _sc("#ffe0cea2")
};
static const QColor colorPaletteBrassBorderActive[ThemeCount] = {
    _sc("#ff986f0b"), _sc("#ffc1a256"), _sc("#ff986f0b"), _sc("#ffc1a256")
};
static const QColor colorPaletteBrownBackground2[ThemeCount] = {
    _sc("#ffddc3b0"), _sc("#ff50301a"), _sc("#ffddc3b0"), _sc("#ff50301a")
};
static const QColor colorPaletteBrownForeground2[ThemeCount] = {
    _sc("#ff50301a"), _sc("#ffddc3b0"), _sc("#ff50301a"), _sc("#ffddc3b0")
};
static const QColor colorPaletteBrownBorderActive[ThemeCount] = {
    _sc("#ff8e562e"), _sc("#ffbb8f6f"), _sc("#ff8e562e"), _sc("#ffbb8f6f")
};
static const QColor colorPaletteForestBackground2[ThemeCount] = {
    _sc("#ffbdd99b"), _sc("#ff294903"), _sc("#ffbdd99b"), _sc("#ff294903")
};
static const QColor colorPaletteForestForeground2[ThemeCount] = {
    _sc("#ff294903"), _sc("#ffbdd99b"), _sc("#ff294903"), _sc("#ffbdd99b")
};
static const QColor colorPaletteForestBorderActive[ThemeCount] = {
    _sc("#ff498205"), _sc("#ff85b44c"), _sc("#ff498205"), _sc("#ff85b44c")
};
static const QColor colorPaletteSeafoamBackground2[ThemeCount] = {
    _sc("#ffa8f0cd"), _sc("#ff00723b"), _sc("#ffa8f0cd"), _sc("#ff00723b")
};
static const QColor colorPaletteSeafoamForeground2[ThemeCount] = {
    _sc("#ff00723b"), _sc("#ffa8f0cd"), _sc("#ff00723b"), _sc("#ffa8f0cd")
};
static const QColor colorPaletteSeafoamBorderActive[ThemeCount] = {
    _sc("#ff00cc6a"), _sc("#ff5ae0a0"), _sc("#ff00cc6a"), _sc("#ff5ae0a0")
};
static const QColor colorPaletteDarkGreenBackground2[ThemeCount] = {
    _sc("#ff9ad29a"), _sc("#ff063b06"), _sc("#ff9ad29a"), _sc("#ff063b06")
};
static const QColor colorPaletteDarkGreenForeground2[ThemeCount] = {
    _sc("#ff063b06"), _sc("#ff9ad29a"), _sc("#ff063b06"), _sc("#ff9ad29a")
};
static const QColor colorPaletteDarkGreenBorderActive[ThemeCount] = {
    _sc("#ff0b6a0b"), _sc("#ff4da64d"), _sc("#ff0b6a0b"), _sc("#ff4da64d")
};
static const QColor colorPaletteLightTealBackground2[ThemeCount] = {
    _sc("#ffa6e9ed"), _sc("#ff00666d"), _sc("#ffa6e9ed"), _sc("#ff00666d")
};
static const QColor colorPaletteLightTealForeground2[ThemeCount] = {
    _sc("#ff00666d"), _sc("#ffa6e9ed"), _sc("#ff00666d"), _sc("#ffa6e9ed")
};
static const QColor colorPaletteLightTealBorderActive[ThemeCount] = {
    _sc("#ff00b7c3"), _sc("#ff58d3db"), _sc("#ff00b7c3"), _sc("#ff58d3db")
};
static const QColor colorPaletteTealBackground2[ThemeCount] = {
    _sc("#ff9bd9db"), _sc("#ff02494c"), _sc("#ff9bd9db"), _sc("#ff02494c")
};
static const QColor colorPaletteTealForeground2[ThemeCount] = {
    _sc("#ff02494c"), _sc("#ff9bd9db"), _sc("#ff02494c"), _sc("#ff9bd9db")
};
static const QColor colorPaletteTealBorderActive[ThemeCount] = {
    _sc("#ff038387"), _sc("#ff4cb4b7"), _sc("#ff038387"), _sc("#ff4cb4b7")
};
static const QColor colorPaletteSteelBackground2[ThemeCount] = {
    _sc("#ff94c8d4"), _sc("#ff00333f"), _sc("#ff94c8d4"), _sc("#ff00333f")
};
static const QColor colorPaletteSteelForeground2[ThemeCount] = {
    _sc("#ff00333f"), _sc("#ff94c8d4"), _sc("#ff00333f"), _sc("#ff94c8d4")
};
static const QColor colorPaletteSteelBorderActive[ThemeCount] = {
    _sc("#ff005b70"), _sc("#ff4496a9"), _sc("#ff005b70"), _sc("#ff4496a9")
};
static const QColor colorPaletteBlueBackground2[ThemeCount] = {
    _sc("#ffa9d3f2"), _sc("#ff004377"), _sc("#ffa9d3f2"), _sc("#ff004377")
};
static const QColor colorPaletteBlueForeground2[ThemeCount] = {
    _sc("#ff004377"), _sc("#ffa9d3f2"), _sc("#ff004377"), _sc("#ffa9d3f2")
};
static const QColor colorPaletteBlueBorderActive[ThemeCount] = {
    _sc("#ff0078d4"), _sc("#ff5caae5"), _sc("#ff0078d4"), _sc("#ff5caae5")
};
static const QColor colorPaletteRoyalBlueBackground2[ThemeCount] = {
    _sc("#ff9abfdc"), _sc("#ff002c4e"), _sc("#ff9abfdc"), _sc("#ff002c4e")
};
static const QColor colorPaletteRoyalBlueForeground2[ThemeCount] = {
    _sc("#ff002c4e"), _sc("#ff9abfdc"), _sc("#ff002c4e"), _sc("#ff9abfdc")
};
static const QColor colorPaletteRoyalBlueBorderActive[ThemeCount] = {
    _sc("#ff004e8c"), _sc("#ff4a89ba"), _sc("#ff004e8c"), _sc("#ff4a89ba")
};
static const QColor colorPaletteCornflowerBackground2[ThemeCount] = {
    _sc("#ffc8d1fa"), _sc("#ff2c3c85"), _sc("#ffc8d1fa"), _sc("#ff2c3c85")
};
static const QColor colorPaletteCornflowerForeground2[ThemeCount] = {
    _sc("#ff2c3c85"), _sc("#ffc8d1fa"), _sc("#ff2c3c85"), _sc("#ffc8d1fa")
};
static const QColor colorPaletteCornflowerBorderActive[ThemeCount] = {
    _sc("#ff4f6bed"), _sc("#ff93a4f4"), _sc("#ff4f6bed"), _sc("#ff93a4f4")
};
static const QColor colorPaletteNavyBackground2[ThemeCount] = {
    _sc("#ffa3b2e8"), _sc("#ff001665"), _sc("#ffa3b2e8"), _sc("#ff001665")
};
static const QColor colorPaletteNavyForeground2[ThemeCount] = {
    _sc("#ff001665"), _sc("#ffa3b2e8"), _sc("#ff001665"), _sc("#ffa3b2e8")
};
static const QColor colorPaletteNavyBorderActive[ThemeCount] = {
    _sc("#ff0027b4"), _sc("#ff546fd2"), _sc("#ff0027b4"), _sc("#ff546fd2")
};
static const QColor colorPaletteLavenderBackground2[ThemeCount] = {
    _sc("#ffd2ccf8"), _sc("#ff3f3682"), _sc("#ffd2ccf8"), _sc("#ff3f3682")
};
static const QColor colorPaletteLavenderForeground2[ThemeCount] = {
    _sc("#ff3f3682"), _sc("#ffd2ccf8"), _sc("#ff3f3682"), _sc("#ffd2ccf8")
};
static const QColor colorPaletteLavenderBorderActive[ThemeCount] = {
    _sc("#ff7160e8"), _sc("#ffa79cf1"), _sc("#ff7160e8"), _sc("#ffa79cf1")
};
static const QColor colorPalettePurpleBackground2[ThemeCount] = {
    _sc("#ffc6b1de"), _sc("#ff341a51"), _sc("#ffc6b1de"), _sc("#ff341a51")
};
static const QColor colorPalettePurpleForeground2[ThemeCount] = {
    _sc("#ff341a51"), _sc("#ffc6b1de"), _sc("#ff341a51"), _sc("#ffc6b1de")
};
static const QColor colorPalettePurpleBorderActive[ThemeCount] = {
    _sc("#ff5c2e91"), _sc("#ff9470bd"), _sc("#ff5c2e91"), _sc("#ff9470bd")
};
static const QColor colorPaletteGrapeBackground2[ThemeCount] = {
    _sc("#ffd9a7e0"), _sc("#ff4c0d55"), _sc("#ffd9a7e0"), _sc("#ff4c0d55")
};
static const QColor colorPaletteGrapeForeground2[ThemeCount] = {
    _sc("#ff4c0d55"), _sc("#ffd9a7e0"), _sc("#ff4c0d55"), _sc("#ffd9a7e0")
};
static const QColor colorPaletteGrapeBorderActive[ThemeCount] = {
    _sc("#ff881798"), _sc("#ffb55fc1"), _sc("#ff881798"), _sc("#ffb55fc1")
};
static const QColor colorPaletteLilacBackground2[ThemeCount] = {
    _sc("#ffe6bfed"), _sc("#ff63276d"), _sc("#ffe6bfed"), _sc("#ff63276d")
};
static const QColor colorPaletteLilacForeground2[ThemeCount] = {
    _sc("#ff63276d"), _sc("#ffe6bfed"), _sc("#ff63276d"), _sc("#ffe6bfed")
};
static const QColor colorPaletteLilacBorderActive[ThemeCount] = {
    _sc("#ffb146c2"), _sc("#ffcf87da"), _sc("#ffb146c2"), _sc("#ffcf87da")
};
static const QColor colorPalettePinkBackground2[ThemeCount] = {
    _sc("#fff7c0e3"), _sc("#ff80215d"), _sc("#fff7c0e3"), _sc("#ff80215d")
};
static const QColor colorPalettePinkForeground2[ThemeCount] = {
    _sc("#ff80215d"), _sc("#fff7c0e3"), _sc("#ff80215d"), _sc("#fff7c0e3")
};
static const QColor colorPalettePinkBorderActive[ThemeCount] = {
    _sc("#ffe43ba6"), _sc("#ffef85c8"), _sc("#ffe43ba6"), _sc("#ffef85c8")
};
static const QColor colorPaletteMagentaBackground2[ThemeCount] = {
    _sc("#ffeca5d1"), _sc("#ff6b0043"), _sc("#ffeca5d1"), _sc("#ff6b0043")
};
static const QColor colorPaletteMagentaForeground2[ThemeCount] = {
    _sc("#ff6b0043"), _sc("#ffeca5d1"), _sc("#ff6b0043"), _sc("#ffeca5d1")
};
static const QColor colorPaletteMagentaBorderActive[ThemeCount] = {
    _sc("#ffbf0077"), _sc("#ffd957a8"), _sc("#ffbf0077"), _sc("#ffd957a8")
};
static const QColor colorPalettePlumBackground2[ThemeCount] = {
    _sc("#ffd696c0"), _sc("#ff5a003b"), _sc("#ffd696c0"), _sc("#ff5a003b")
};
static const QColor colorPalettePlumForeground2[ThemeCount] = {
    _sc("#ff43002b"), _sc("#ffd696c0"), _sc("#ff43002b"), _sc("#ffd696c0")
};
static const QColor colorPalettePlumBorderActive[ThemeCount] = {
    _sc("#ff77004d"), _sc("#ffad4589"), _sc("#ff77004d"), _sc("#ffad4589")
};
static const QColor colorPaletteBeigeBackground2[ThemeCount] = {
    _sc("#ffd7d4d4"), _sc("#ff444241"), _sc("#ffd7d4d4"), _sc("#ff444241")
};
static const QColor colorPaletteBeigeForeground2[ThemeCount] = {
    _sc("#ff444241"), _sc("#ffd7d4d4"), _sc("#ff444241"), _sc("#ffd7d4d4")
};
static const QColor colorPaletteBeigeBorderActive[ThemeCount] = {
    _sc("#ff7a7574"), _sc("#ffafabaa"), _sc("#ff7a7574"), _sc("#ffafabaa")
};
static const QColor colorPaletteMinkBackground2[ThemeCount] = {
    _sc("#ffcecccb"), _sc("#ff343231"), _sc("#ffcecccb"), _sc("#ff343231")
};
static const QColor colorPaletteMinkForeground2[ThemeCount] = {
    _sc("#ff343231"), _sc("#ffcecccb"), _sc("#ff343231"), _sc("#ffcecccb")
};
static const QColor colorPaletteMinkBorderActive[ThemeCount] = {
    _sc("#ff5d5a58"), _sc("#ff9e9b99"), _sc("#ff5d5a58"), _sc("#ff9e9b99")
};
static const QColor colorPalettePlatinumBackground2[ThemeCount] = {
    _sc("#ffcdd6d8"), _sc("#ff3b4447"), _sc("#ffcdd6d8"), _sc("#ff3b4447")
};
static const QColor colorPalettePlatinumForeground2[ThemeCount] = {
    _sc("#ff3b4447"), _sc("#ffcdd6d8"), _sc("#ff3b4447"), _sc("#ffcdd6d8")
};
static const QColor colorPalettePlatinumBorderActive[ThemeCount] = {
    _sc("#ff69797e"), _sc("#ffa0adb2"), _sc("#ff69797e"), _sc("#ffa0adb2")
};
static const QColor colorPaletteAnchorBackground2[ThemeCount] = {
    _sc("#ffbcc3c7"), _sc("#ff202427"), _sc("#ffbcc3c7"), _sc("#ff202427")
};
static const QColor colorPaletteAnchorForeground2[ThemeCount] = {
    _sc("#ff202427"), _sc("#ffbcc3c7"), _sc("#ff202427"), _sc("#ffbcc3c7")
};
static const QColor colorPaletteAnchorBorderActive[ThemeCount] = {
    _sc("#ff394146"), _sc("#ff808a90"), _sc("#ff394146"), _sc("#ff808a90")
};
static const QColor colorStatusSuccessBackground1[ThemeCount] = {
    _sc("#fff1faf1"), _sc("#ff052505"), _sc("#fff1faf1"), _sc("#ff052505")
};
static const QColor colorStatusSuccessBackground2[ThemeCount] = {
    _sc("#ff9fd89f"), _sc("#ff094509"), _sc("#ff9fd89f"), _sc("#ff094509")
};
static const QColor colorStatusSuccessBackground3[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff107c10"), _sc("#ff107c10"), _sc("#ff107c10")
};
static const QColor colorStatusSuccessForeground1[ThemeCount] = {
    _sc("#ff0e700e"), _sc("#ff54b054"), _sc("#ff0e700e"), _sc("#ff54b054")
};
static const QColor colorStatusSuccessForeground2[ThemeCount] = {
    _sc("#ff094509"), _sc("#ff9fd89f"), _sc("#ff094509"), _sc("#ff9fd89f")
};
static const QColor colorStatusSuccessForeground3[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff9fd89f"), _sc("#ff107c10"), _sc("#ff9fd89f")
};
static const QColor colorStatusSuccessForegroundInverted[ThemeCount] = {
    _sc("#ff54b054"), _sc("#ff54b054"), _sc("#ff54b054"), _sc("#ff54b054")
};
static const QColor colorStatusSuccessBorderActive[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff0e700e"), _sc("#ff107c10"), _sc("#ff0e700e")
};
static const QColor colorStatusSuccessBorder1[ThemeCount] = {
    _sc("#ff9fd89f"), _sc("#ff107c10"), _sc("#ff9fd89f"), _sc("#ff107c10")
};
static const QColor colorStatusSuccessBorder2[ThemeCount] = {
    _sc("#ff107c10"), _sc("#ff9fd89f"), _sc("#ff107c10"), _sc("#ff9fd89f")
};
static const QColor colorStatusWarningBackground1[ThemeCount] = {
    _sc("#fffff9f5"), _sc("#ff4a1e04"), _sc("#fffff9f5"), _sc("#ff4a1e04")
};
static const QColor colorStatusWarningBackground2[ThemeCount] = {
    _sc("#fffdcfb4"), _sc("#ff8a3707"), _sc("#fffdcfb4"), _sc("#ff8a3707")
};
static const QColor colorStatusWarningBackground3[ThemeCount] = {
    _sc("#fff7630c"), _sc("#fff7630c"), _sc("#fff7630c"), _sc("#fff7630c")
};
static const QColor colorStatusWarningForeground1[ThemeCount] = {
    _sc("#ffbc4b09"), _sc("#fffaa06b"), _sc("#ffbc4b09"), _sc("#fffaa06b")
};
static const QColor colorStatusWarningForeground2[ThemeCount] = {
    _sc("#ff8a3707"), _sc("#fffdcfb4"), _sc("#ff8a3707"), _sc("#fffdcfb4")
};
static const QColor colorStatusWarningForeground3[ThemeCount] = {
    _sc("#ffbc4b09"), _sc("#fff98845"), _sc("#ffbc4b09"), _sc("#fff98845")
};
static const QColor colorStatusWarningForegroundInverted[ThemeCount] = {
    _sc("#fffaa06b"), _sc("#fffaa06b"), _sc("#fffaa06b"), _sc("#fffaa06b")
};
static const QColor colorStatusWarningBorderActive[ThemeCount] = {
    _sc("#fff7630c"), _sc("#ffbc4b09"), _sc("#fff7630c"), _sc("#ffbc4b09")
};
static const QColor colorStatusWarningBorder1[ThemeCount] = {
    _sc("#fffdcfb4"), _sc("#fff7630c"), _sc("#fffdcfb4"), _sc("#fff7630c")
};
static const QColor colorStatusWarningBorder2[ThemeCount] = {
    _sc("#ffbc4b09"), _sc("#fff98845"), _sc("#ffbc4b09"), _sc("#fff98845")
};
static const QColor colorStatusDangerBackground1[ThemeCount] = {
    _sc("#fffdf3f4"), _sc("#ff3b0509"), _sc("#fffdf3f4"), _sc("#ff3b0509")
};
static const QColor colorStatusDangerBackground2[ThemeCount] = {
    _sc("#ffeeacb2"), _sc("#ff6e0811"), _sc("#ffeeacb2"), _sc("#ff6e0811")
};
static const QColor colorStatusDangerBackground3[ThemeCount] = {
    _sc("#ffc50f1f"), _sc("#ffc50f1f"), _sc("#ffc50f1f"), _sc("#ffc50f1f")
};
static const QColor colorStatusDangerForeground1[ThemeCount] = {
    _sc("#ffb10e1c"), _sc("#ffdc626d"), _sc("#ffb10e1c"), _sc("#ffdc626d")
};
static const QColor colorStatusDangerForeground2[ThemeCount] = {
    _sc("#ff6e0811"), _sc("#ffeeacb2"), _sc("#ff6e0811"), _sc("#ffeeacb2")
};
static const QColor colorStatusDangerForeground3[ThemeCount] = {
    _sc("#ffc50f1f"), _sc("#ffeeacb2"), _sc("#ffc50f1f"), _sc("#ffeeacb2")
};
static const QColor colorStatusDangerForegroundInverted[ThemeCount] = {
    _sc("#ffdc626d"), _sc("#ffdc626d"), _sc("#ffdc626d"), _sc("#ffdc626d")
};
static const QColor colorStatusDangerBorderActive[ThemeCount] = {
    _sc("#ffc50f1f"), _sc("#ffb10e1c"), _sc("#ffc50f1f"), _sc("#ffb10e1c")
};
static const QColor colorStatusDangerBorder1[ThemeCount] = {
    _sc("#ffeeacb2"), _sc("#ffc50f1f"), _sc("#ffeeacb2"), _sc("#ffc50f1f")
};
static const QColor colorStatusDangerBorder2[ThemeCount] = {
    _sc("#ffc50f1f"), _sc("#ffdc626d"), _sc("#ffc50f1f"), _sc("#ffdc626d")
};
static const QColor colorStatusDangerBackground3Hover[ThemeCount] = {
    _sc("#ffb10e1c"), _sc("#ffb10e1c"), _sc("#ffb10e1c"), _sc("#ffb10e1c")
};
static const QColor colorStatusDangerBackground3Pressed[ThemeCount] = {
    _sc("#ff960b18"), _sc("#ff960b18"), _sc("#ff960b18"), _sc("#ff960b18")
};

static const QStringList fontFamilyBase {
    "Segoe UI", "Arial", "Helvetica", "Sans Serif"
};
static const QStringList fontFamilyMonospace {
    "Consolas", "Courier New", "Courier", "monospace"
};
static const QStringList fontFamilyNumeric {
    "Segoe UI",
    "Bahnschrift",
    "Segoe UI Web (West European)",
    "-apple-system",
    "BlinkMacSystemFont",
    "Roboto",
    "Helvetica Neue",
    "sans-serif"
};

constexpr inline int fontSizeBase100 = 10;
constexpr inline int fontSizeBase200 = 12;
constexpr inline int fontSizeBase300 = 14;
constexpr inline int fontSizeBase400 = 16;
constexpr inline int fontSizeBase500 = 20;
constexpr inline int fontSizeBase600 = 24;
constexpr inline int fontSizeHero700 = 28;
constexpr inline int fontSizeHero800 = 32;
constexpr inline int fontSizeHero900 = 40;
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

constexpr inline int strokeWidthThin = 1;
constexpr inline int strokeWidthThick = 2;
constexpr inline int strokeWidthThicker = 3;
constexpr inline int strokeWidthThickest = 4;
} // namespace Tokens

#endif // TOKENS_H