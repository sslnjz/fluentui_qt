#include "BadgeStyle.h"
#include "fluentui/components/BadgeProps.h"
#include "fluentui/styles/Style.h"
#include "fluentui/styles/Tokens.h"

BadgeStyle::BadgeStyle(BadgeProps& p)
    : Style()
    , m_props(p)
{
    m_props.font = QFont(_fontFamily, _fontSize, _fontWeight);
    _spacingHorizontal = Tokens::spacingHorizontalXS + Tokens::spacingHorizontalXXS;
    _spacingVertical = Tokens::spacingVerticalNone;
    _borderRadius = Tokens::borderRadiusMedium;
    _borderColor = Tokens::colorTransparentStroke[_theme];
    _backgroundColor = Tokens::colorTransparentBackground[_theme];
}

QFont BadgeStyle::font() const
{
    return m_props.font;
}

void BadgeStyle::setFont(QStringList families, int pointSize, int weight)
{
    m_props.font = QFont(families, pointSize, weight);
}

void BadgeStyle::updateStyle()
{
    switch (m_props.shape)
    {
    case BadgeProps::Shape::circular:
        _borderRadius = Tokens::borderRadiusCircular;
        break;
    case BadgeProps::Shape::rounded:
        _borderRadius = Tokens::borderRadiusMedium;
        break;
    case BadgeProps::Shape::square:
        _borderRadius = Tokens::borderRadiusNone;
        break;
    }

    static std::tuple<QColor, QColor, QColor> styleMatrix[8][4]
        = {
              // brand
              {
                  { Tokens::colorNeutralForegroundOnBrand[_theme],
                      Tokens::colorBrandBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] }, // filled
                  { Tokens::colorBrandForeground1[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] }, // ghost
                  { Tokens::colorBrandForeground1[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorBrandForeground1[_theme] }, // outline
                  { Tokens::colorBrandForeground1[_theme],
                      Tokens::colorBrandBackground2[_theme],
                      Tokens::colorBrandStroke2[_theme] }, // tint
              },
              // danger
              {
                  { Tokens::colorNeutralForegroundOnBrand[_theme],
                      Tokens::colorPaletteRedBackground3[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorPaletteRedForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorPaletteRedForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorPaletteRedBorder2[_theme] },
                  { Tokens::colorPaletteRedForeground1[_theme],
                      Tokens::colorPaletteRedBackground1[_theme],
                      Tokens::colorPaletteRedBorder1[_theme] },
              },
              // important
              {
                  { Tokens::colorNeutralBackground1[_theme],
                      Tokens::colorNeutralForeground1[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorNeutralForeground1[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorNeutralForeground1[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorNeutralStrokeAccessible[_theme] },
                  { Tokens::colorNeutralBackground1[_theme],
                      Tokens::colorNeutralForeground3[_theme],
                      Tokens::colorTransparentStroke[_theme] } },
              // informative
              {
                  { Tokens::colorNeutralForeground3[_theme],
                      Tokens::colorNeutralBackground5[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorNeutralForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorNeutralForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorNeutralStroke2[_theme] },
                  { Tokens::colorNeutralForeground3[_theme],
                      Tokens::colorNeutralBackground4[_theme],
                      Tokens::colorNeutralStroke2[_theme] } },
              // severe
              {
                  { Tokens::colorNeutralForegroundOnBrand[_theme],
                      Tokens::colorPaletteDarkOrangeBackground3[_theme],
                      Tokens::colorTransparentBackground[_theme] },
                  { Tokens::colorPaletteDarkOrangeForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorPaletteDarkOrangeForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorPaletteDarkOrangeForeground3[_theme] },
                  { Tokens::colorPaletteDarkOrangeForeground1[_theme],
                      Tokens::colorPaletteDarkOrangeBackground1[_theme],
                      Tokens::colorPaletteDarkOrangeBorder1[_theme] } },
              // subtle
              {
                  { Tokens::colorNeutralForeground1[_theme],
                      Tokens::colorNeutralBackground1[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorNeutralForegroundStaticInverted[_theme],
                      Tokens::colorBrandBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorNeutralForegroundStaticInverted[_theme],
                      Tokens::colorBrandBackground[_theme],
                      Tokens::colorNeutralForegroundStaticInverted[_theme] },
                  { Tokens::colorNeutralForeground3[_theme],
                      Tokens::colorNeutralBackground1[_theme],
                      Tokens::colorNeutralStroke2[_theme] } },
              // success
              { { Tokens::colorNeutralForegroundOnBrand[_theme],
                    Tokens::colorPaletteGreenBackground3[_theme],
                    Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorPaletteGreenForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorPaletteGreenForeground3[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorPaletteGreenBorder2[_theme] },
                  { Tokens::colorPaletteGreenForeground1[_theme],
                      Tokens::colorPaletteGreenBackground1[_theme],
                      Tokens::colorPaletteGreenBorder1[_theme] } },
              // warning
              {
                  { Tokens::colorNeutralForeground1Static[_theme],
                      Tokens::colorPaletteYellowBackground3[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorPaletteYellowForeground2[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorTransparentStroke[_theme] },
                  { Tokens::colorPaletteYellowForeground2[_theme],
                      Tokens::colorTransparentBackground[_theme],
                      Tokens::colorPaletteYellowForeground2[_theme] },
                  { Tokens::colorPaletteYellowForeground1[_theme],
                      Tokens::colorPaletteYellowBackground1[_theme],
                      Tokens::colorPaletteYellowBorder1[_theme] } }
          };

    auto [fg, bg, bd]
        = styleMatrix[static_cast<int>(m_props.status)][static_cast<int>(m_props.appear)];
    _foregroundColor = fg;
    _backgroundColor = bg;
    _borderColor = bd;
}
