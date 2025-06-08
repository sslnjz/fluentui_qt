#ifndef STYLE_H
#define STYLE_H

#include <QColor>
#include <fluentui/styles/Tokens.h>

class StyleBase {
public:
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
};

#endif