#ifndef LIGHT_H
#define LIGHT_H

#include <QColor>
#include <qnamespace.h>

namespace fluentui::Light {
    // foreground color
    constexpr QColor colorNeutralForeground1Hover                       {0x24, 0x24, 0x24}; // 0x242424
    constexpr inline QColor colorNeutralForeground1Pressed             { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForeground1Selected            { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForeground2                    { 0x42, 0x42, 0x42 }; // 0x424242
    constexpr inline QColor colorNeutralForeground2Hover               { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForeground2Pressed             { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForeground2Selected            { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForeground2BrandHover          { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorNeutralForeground2BrandPressed        { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorNeutralForeground2BrandSelected       { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorNeutralForeground3                    { 0x61, 0x61, 0x61 }; // 0x616161
    constexpr inline QColor colorNeutralForeground3Hover               { 0x42, 0x42, 0x42 }; // 0x424242
    constexpr inline QColor colorNeutralForeground3Pressed             { 0x42, 0x42, 0x42 }; // 0x424242
    constexpr inline QColor colorNeutralForeground3Selected            { 0x42, 0x42, 0x42 }; // 0x424242
    constexpr inline QColor colorNeutralForeground3BrandHover          { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorNeutralForeground3BrandPressed        { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorNeutralForeground3BrandSelected       { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorNeutralForeground4                    { 0x70, 0x70, 0x70 }; // 0x707070
    constexpr inline QColor colorNeutralForegroundDisabled             { 0xbd, 0xbd, 0xbd }; // 0xbdbdbd
    constexpr inline QColor colorNeutralForegroundInvertedDisabled     { 0xff, 0xff, 0xff, 0x66 }; // 0xffffff66（Alpha=0.4 对应 0x66）
    constexpr inline QColor colorBrandForegroundLink                   { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorBrandForegroundLinkHover              { 0x0f, 0x54, 0x8c }; // 0x0f548c
    constexpr inline QColor colorBrandForegroundLinkPressed            { 0x0c, 0x3b, 0x5e }; // 0x0c3b5e
    constexpr inline QColor colorBrandForegroundLinkSelected           { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorNeutralForeground2Link                { 0x42, 0x42, 0x42 }; // 0x424242
    constexpr inline QColor colorNeutralForeground2LinkHover           { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForeground2LinkPressed         { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForeground2LinkSelected        { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorCompoundBrandForeground1              { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorCompoundBrandForeground1Hover         { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorCompoundBrandForeground1Pressed       { 0x0f, 0x54, 0x8c }; // 0x0f548c
    constexpr inline QColor colorBrandForeground1                      { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorBrandForeground2                      { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorBrandForeground2Hover                 { 0x0f, 0x54, 0x8c }; // 0x0f548c
    constexpr inline QColor colorBrandForeground2Pressed               { 0x0a, 0x2e, 0x4a }; // 0x0a2e4a
    constexpr inline QColor colorNeutralForeground1Static              { 0x24, 0x24, 0x24 }; // 0x242424
    constexpr inline QColor colorNeutralForegroundStaticInverted       { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInverted             { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInvertedHover        { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInvertedPressed      { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInvertedSelected     { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInverted2            { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundOnBrand              { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInvertedLink         { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInvertedLinkHover    { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInvertedLinkPressed  { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralForegroundInvertedLinkSelected { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorBrandForegroundInverted               { 0x47, 0x9e, 0xf5 }; // 0x479ef5
    constexpr inline QColor colorBrandForegroundInvertedHover          { 0x62, 0xab, 0xf5 }; // 0x62abf5
    constexpr inline QColor colorBrandForegroundInvertedPressed        { 0x47, 0x9e, 0xf5 }; // 0x479ef5
    constexpr inline QColor colorBrandForegroundOnLight                { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorBrandForegroundOnLightHover           { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorBrandForegroundOnLightPressed         { 0x0e, 0x47, 0x75 }; // 0x0e4775
    constexpr inline QColor colorBrandForegroundOnLightSelected        { 0x0f, 0x54, 0x8c }; //

    // backgroound
    constexpr inline QColor colorNeutralBackground1                    { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralBackground1Hover               { 0xf5, 0xf5, 0xf5 }; // 0xf5f5f5
    constexpr inline QColor colorNeutralBackground1Pressed             { 0xe0, 0xe0, 0xe0 }; // 0xe0e0e0
    constexpr inline QColor colorNeutralBackground1Selected            { 0xeb, 0xeb, 0xeb }; // 0xebebeb
    constexpr inline QColor colorNeutralBackground2                    { 0xfa, 0xfa, 0xfa }; // 0xfafafa
    constexpr inline QColor colorNeutralBackground2Hover               { 0xf0, 0xf0, 0xf0 }; // 0xf0f0f0
    constexpr inline QColor colorNeutralBackground2Pressed             { 0xdb, 0xdb, 0xdb }; // 0xdbdbdb
    constexpr inline QColor colorNeutralBackground2Selected            { 0xe6, 0xe6, 0xe6 }; // 0xe6e6e6
    constexpr inline QColor colorNeutralBackground3                    { 0xf5, 0xf5, 0xf5 }; // 0xf5f5f5
    constexpr inline QColor colorNeutralBackground3Hover               { 0xeb, 0xeb, 0xeb }; // 0xebebeb
    constexpr inline QColor colorNeutralBackground3Pressed             { 0xd6, 0xd6, 0xd6 }; // 0xd6d6d6
    constexpr inline QColor colorNeutralBackground3Selected            { 0xe0, 0xe0, 0xe0 }; // 0xe0e0e0
    constexpr inline QColor colorNeutralBackground4                    { 0xf0, 0xf0, 0xf0 }; // 0xf0f0f0
    constexpr inline QColor colorNeutralBackground4Hover               { 0xfa, 0xfa, 0xfa }; // 0xfafafa
    constexpr inline QColor colorNeutralBackground4Pressed             { 0xf5, 0xf5, 0xf5 }; // 0xf5f5f5
    constexpr inline QColor colorNeutralBackground4Selected            { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralBackground5                    { 0xeb, 0xeb, 0xeb }; // 0xebebeb
    constexpr inline QColor colorNeutralBackground5Hover               { 0xf5, 0xf5, 0xf5 }; // 0xf5f5f5
    constexpr inline QColor colorNeutralBackground5Pressed             { 0xf0, 0xf0, 0xf0 }; // 0xf0f0f0
    constexpr inline QColor colorNeutralBackground5Selected            { 0xfa, 0xfa, 0xfa }; // 0xfafafa
    constexpr inline QColor colorNeutralBackground6                    { 0xe6, 0xe6, 0xe6 }; // 0xe6e6e6
    constexpr inline QColor colorNeutralBackgroundInverted             { 0x29, 0x29, 0x29 }; // 0x292929
    constexpr inline QColor colorNeutralBackgroundStatic               { 0x33, 0x33, 0x33 }; // 0x333333
    constexpr inline QColor colorNeutralBackgroundAlpha                { 0xff, 0xff, 0xff, 0x80 }; // 0xffffff (Alpha=0.5)
    constexpr inline QColor colorNeutralBackgroundAlpha2               { 0xff, 0xff, 0xff, 0xcc }; // 0xffffff (Alpha=0.8)
    constexpr inline QColor colorSubtleBackground                      { 0x00, 0x00, 0x00, 0x00 }; // 0x000000 (Alpha=0)
    constexpr inline QColor colorSubtleBackgroundHover                 { 0xf5, 0xf5, 0xf5 }; // 0xf5f5f5
    constexpr inline QColor colorSubtleBackgroundPressed               { 0xe0, 0xe0, 0xe0 }; // 0xe0e0e0
    constexpr inline QColor colorSubtleBackgroundSelected              { 0xeb, 0xeb, 0xeb }; // 0xebebeb
    constexpr inline QColor colorSubtleBackgroundLightAlphaHover       { 0xff, 0xff, 0xff, 0xb6 }; // Alpha=0.7
    constexpr inline QColor colorSubtleBackgroundLightAlphaPressed     { 0xff, 0xff, 0xff, 0x80 }; // Alpha=0.5
    constexpr inline QColor colorSubtleBackgroundLightAlphaSelected    { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorSubtleBackgroundInverted              { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorSubtleBackgroundInvertedHover         { 0x00, 0x00, 0x00, 0x19 }; // Alpha=0.1
    constexpr inline QColor colorSubtleBackgroundInvertedPressed       { 0x00, 0x00, 0x00, 0x4d }; // Alpha=0.3
    constexpr inline QColor colorSubtleBackgroundInvertedSelected      { 0x00, 0x00, 0x00, 0x33 }; // Alpha=0.2
    constexpr inline QColor colorTransparentBackground                 { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorTransparentBackgroundHover            { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorTransparentBackgroundPressed          { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorTransparentBackgroundSelected         { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorNeutralBackgroundDisabled             { 0xf0, 0xf0, 0xf0 }; // 0xf0f0f0
    constexpr inline QColor colorNeutralBackgroundInvertedDisabled     { 0xff, 0xff, 0xff, 0x19 }; // Alpha=0.1
    constexpr inline QColor colorNeutralStencil1                       { 0xe6, 0xe6, 0xe6 }; // 0xe6e6e6
    constexpr inline QColor colorNeutralStencil2                       { 0xfa, 0xfa, 0xfa }; // 0xfafafa
    constexpr inline QColor colorNeutralStencil1Alpha                  { 0x00, 0x00, 0x00, 0x19 }; // Alpha=0.1
    constexpr inline QColor colorNeutralStencil2Alpha                  { 0x00, 0x00, 0x00, 0x0d }; // Alpha=0.05
    constexpr inline QColor colorBackgroundOverlay                     { 0x00, 0x00, 0x00, 0x66 }; // Alpha=0.4
    constexpr inline QColor colorScrollbarOverlay                      { 0x00, 0x00, 0x00, 0x80 }; // Alpha=0.5
    constexpr inline QColor colorBrandBackground                       { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorBrandBackgroundHover                  { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorBrandBackgroundPressed                { 0x0c, 0x3b, 0x5e }; // 0x0c3b5e
    constexpr inline QColor colorBrandBackgroundSelected               { 0x0f, 0x54, 0x8c }; // 0x0f548c
    constexpr inline QColor colorCompoundBrandBackground               { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorCompoundBrandBackgroundHover          { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorCompoundBrandBackgroundPressed        { 0x0f, 0x54, 0x8c }; // 0x0f548c
    constexpr inline QColor colorBrandBackgroundStatic                 { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorBrandBackground2                      { 0xeb, 0xf3, 0xfc }; // 0xebf3fc
    constexpr inline QColor colorBrandBackground2Hover                 { 0xcf, 0xe4, 0xfa }; // 0xcfe4fa
    constexpr inline QColor colorBrandBackground2Pressed               { 0x96, 0xc6, 0xfa }; // 0x96c6fa
    constexpr inline QColor colorBrandBackground3Static                { 0x0f, 0x54, 0x8c }; // 0x0f548c
    constexpr inline QColor colorBrandBackground4Static                { 0x0c, 0x3b, 0x5e }; // 0x0c3b5e
    constexpr inline QColor colorBrandBackgroundInverted               { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorBrandBackgroundInvertedHover          { 0xeb, 0xf3, 0xfc }; // 0xebf3fc
    constexpr inline QColor colorBrandBackgroundInvertedPressed        { 0xb4, 0xd6, 0xfa }; // 0xb4d6fa
    constexpr inline QColor colorBrandBackgroundInvertedSelected       { 0xcf, 0xe4, 0xfa }; // 0xcfe4fa
    constexpr inline QColor colorNeutralCardBackground                 { 0xfa, 0xfa, 0xfa }; // 0xfafafa
    constexpr inline QColor colorNeutralCardBackgroundHover            { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralCardBackgroundPressed          { 0xf5, 0xf5, 0xf5 }; // 0xf5f5f5
    constexpr inline QColor colorNeutralCardBackgroundSelected         { 0xeb, 0xeb, 0xeb }; // 0xebebeb
    constexpr inline QColor colorNeutralCardBackgroundDisabled         { 0xf0, 0xf0, 0xf0 }; // 0xf0f0f0

    //stroke colors
    constexpr inline QColor colorNeutralStrokeAccessible               { 0x61, 0x61, 0x61 }; // 0x616161
    constexpr inline QColor colorNeutralStrokeAccessibleHover          { 0x57, 0x57, 0x57 }; // 0x575757
    constexpr inline QColor colorNeutralStrokeAccessiblePressed        { 0x4d, 0x4d, 0x4d }; // 0x4d4d4d
    constexpr inline QColor colorNeutralStrokeAccessibleSelected       { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorNeutralStroke1                        { 0xd1, 0xd1, 0xd1 }; // 0xd1d1d1
    constexpr inline QColor colorNeutralStroke1Hover                   { 0xc7, 0xc7, 0xc7 }; // 0xc7c7c7
    constexpr inline QColor colorNeutralStroke1Pressed                 { 0xb3, 0xb3, 0xb3 }; // 0xb3b3b3
    constexpr inline QColor colorNeutralStroke1Selected                { 0xbd, 0xbd, 0xbd }; // 0xbdbdbd
    constexpr inline QColor colorNeutralStroke2                        { 0xe0, 0xe0, 0xe0 }; // 0xe0e0e0
    constexpr inline QColor colorNeutralStroke3                        { 0xf0, 0xf0, 0xf0 }; // 0xf0f0f0
    constexpr inline QColor colorNeutralStrokeSubtle                   { 0xe0, 0xe0, 0xe0 }; // 0xe0e0e0
    constexpr inline QColor colorNeutralStrokeOnBrand                  { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralStrokeOnBrand2                 { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralStrokeOnBrand2Hover            { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralStrokeOnBrand2Pressed          { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorNeutralStrokeOnBrand2Selected         { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorBrandStroke1                          { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorBrandStroke2                          { 0xb4, 0xd6, 0xfa }; // 0xb4d6fa
    constexpr inline QColor colorBrandStroke2Hover                     { 0x77, 0xb7, 0xf7 }; // 0x77b7f7
    constexpr inline QColor colorBrandStroke2Pressed                   { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorBrandStroke2Contrast                  { 0xb4, 0xd6, 0xfa }; // 0xb4d6fa
    constexpr inline QColor colorCompoundBrandStroke                   { 0x0f, 0x6c, 0xbd }; // 0x0f6cbd
    constexpr inline QColor colorCompoundBrandStrokeHover              { 0x11, 0x5e, 0xa3 }; // 0x115ea3
    constexpr inline QColor colorCompoundBrandStrokePressed            { 0x0f, 0x54, 0x8c }; // 0x0f548c
    constexpr inline QColor colorNeutralStrokeDisabled                 { 0xe0, 0xe0, 0xe0 }; // 0xe0e0e0
    constexpr inline QColor colorNeutralStrokeInvertedDisabled         { 0xff, 0xff, 0xff, 0x66 }; // Alpha=0.4
    constexpr inline QColor colorTransparentStroke                     { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorTransparentStrokeInteractive          { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorTransparentStrokeDisabled             { 0x00, 0x00, 0x00, 0x00 }; // Alpha=0
    constexpr inline QColor colorNeutralStrokeAlpha                    { 0x00, 0x00, 0x00, 0x0d }; // Alpha=0.05
    constexpr inline QColor colorNeutralStrokeAlpha2                   { 0xff, 0xff, 0xff, 0x33 }; // Alpha=0.2
    constexpr inline QColor colorStrokeFocus1                          { 0xff, 0xff, 0xff }; // 0xffffff
    constexpr inline QColor colorStrokeFocus2                          { 0x00,  0x00, 0x00}; // 0x000000
    constexpr inline QColor colorNeutralShadowAmbient                  { 0x00, 0x00, 0x00, 0x1e }; // Alpha=0.12
    constexpr inline QColor colorNeutralShadowKey                      { 0x00, 0x00, 0x00, 0x24 }; // Alpha=0.14
    constexpr inline QColor colorNeutralShadowAmbientLighter           { 0x00, 0x00, 0x00, 0x0f }; // Alpha=0.06
    constexpr inline QColor colorNeutralShadowKeyLighter               { 0x00, 0x00, 0x00, 0x12 }; // Alpha=0.07
    constexpr inline QColor colorNeutralShadowAmbientDarker            { 0x00, 0x00, 0x00, 0x33 }; // Alpha=0.20
    constexpr inline QColor colorNeutralShadowKeyDarker                { 0x00, 0x00, 0x00, 0x3d }; // Alpha=0.24
    constexpr inline QColor colorBrandShadowAmbient                    { 0x00, 0x00, 0x00, 0x4d }; // Alpha=0.30
    constexpr inline QColor colorBrandShadowKey                        { 0x00, 0x00, 0x00, 0x40 }; // Al

    // Palette Colors
    constexpr inline QColor colorPaletteRedBackground1                 { 0xfd, 0xf6, 0xf6 }; // 0xfdf6f6
    constexpr inline QColor colorPaletteRedBackground2                 { 0xf1, 0xbb, 0xbc }; // 0xf1bbbc
    constexpr inline QColor colorPaletteRedBackground3                 { 0xd1, 0x34, 0x38 }; // 0xd13438
    constexpr inline QColor colorPaletteRedForeground1                 { 0xbc, 0x2f, 0x32 }; // 0xbc2f32
    constexpr inline QColor colorPaletteRedForeground2                 { 0x75, 0x1d, 0x1f }; // 0x751d1f
    constexpr inline QColor colorPaletteRedForeground3                 { 0xd1, 0x34, 0x38 }; // 0xd13438
    constexpr inline QColor colorPaletteRedBorderActive                { 0xd1, 0x34, 0x38 }; // 0xd13438
    constexpr inline QColor colorPaletteRedBorder1                     { 0xf1, 0xbb, 0xbc }; // 0xf1bbbc
    constexpr inline QColor colorPaletteRedBorder2                     { 0xd1, 0x34, 0x38 }; // 0xd13438
    constexpr inline QColor colorPaletteGreenBackground1               { 0xf1, 0xfa, 0xf1 }; // 0xf1faf1
    constexpr inline QColor colorPaletteGreenBackground2               { 0x9f, 0xd8, 0x9f }; // 0x9fd89f
    constexpr inline QColor colorPaletteGreenBackground3               { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorPaletteGreenForeground1               { 0x0e, 0x70, 0x0e }; // 0x0e700e
    constexpr inline QColor colorPaletteGreenForeground2               { 0x09, 0x45, 0x09 }; // 0x094509
    constexpr inline QColor colorPaletteGreenForeground3               { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorPaletteGreenBorderActive              { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorPaletteGreenBorder1                   { 0x9f, 0xd8, 0x9f }; // 0x9fd89f
    constexpr inline QColor colorPaletteGreenBorder2                   { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorPaletteDarkOrangeBackground1          { 0xfd, 0xf6, 0xf3 }; // 0xfdf6f3
    constexpr inline QColor colorPaletteDarkOrangeBackground2          { 0xf4, 0xbf, 0xab }; // 0xf4bfab
    constexpr inline QColor colorPaletteDarkOrangeBackground3          { 0xda, 0x3b, 0x01 }; // 0xda3b01
    constexpr inline QColor colorPaletteDarkOrangeForeground1          { 0xc4, 0x35, 0x01 }; // 0xc43501
    constexpr inline QColor colorPaletteDarkOrangeForeground2          { 0x7a, 0x21, 0x01 }; // 0x7a2101
    constexpr inline QColor colorPaletteDarkOrangeForeground3          { 0xda, 0x3b, 0x01 }; // 0xda3b01
    constexpr inline QColor colorPaletteDarkOrangeBorderActive         { 0xda, 0x3b, 0x01 }; // 0xda3b01
    constexpr inline QColor colorPaletteDarkOrangeBorder1              { 0xf4, 0xbf, 0xab }; // 0xf4bfab
    constexpr inline QColor colorPaletteDarkOrangeBorder2              { 0xda, 0x3b, 0x01 }; // 0xda3b01
    constexpr inline QColor colorPaletteYellowBackground1              { 0xff, 0xfe, 0xf5 }; // 0xfffef5
    constexpr inline QColor colorPaletteYellowBackground2              { 0xfe, 0xf7, 0xb2 }; // 0xfef7b2
    constexpr inline QColor colorPaletteYellowBackground3              { 0xfd, 0xe3, 0x00 }; // 0xfde300
    constexpr inline QColor colorPaletteYellowForeground1              { 0x81, 0x74, 0x00 }; // 0x817400
    constexpr inline QColor colorPaletteYellowForeground2              { 0x81, 0x74, 0x00 }; // 0x817400
    constexpr inline QColor colorPaletteYellowForeground3              { 0xfd, 0xe3, 0x00 }; // 0xfde300
    constexpr inline QColor colorPaletteYellowBorderActive             { 0xfd, 0xe3, 0x00 }; // 0xfde300
    constexpr inline QColor colorPaletteYellowBorder1                  { 0xfe, 0xf7, 0xb2 }; // 0xfef7b2
    constexpr inline QColor colorPaletteYellowBorder2                  { 0xfd, 0xe3, 0x00 }; // 0xfde300
    constexpr inline QColor colorPaletteBerryBackground1               { 0xfd, 0xf5, 0xfc }; // 0xfdf5fc
    constexpr inline QColor colorPaletteBerryBackground2               { 0xed, 0xbd, 0xe7 }; // 0xedbbe7
    constexpr inline QColor colorPaletteBerryBackground3               { 0xc2, 0x39, 0xb3 }; // 0xc239b3
    constexpr inline QColor colorPaletteBerryForeground1               { 0xaf, 0x33, 0xa1 }; // 0xaf33a1
    constexpr inline QColor colorPaletteBerryForeground2               { 0x6d, 0x20, 0x64 }; // 0x6d2064
    constexpr inline QColor colorPaletteBerryForeground3               { 0xc2, 0x39, 0xb3 }; // 0xc239b3
    constexpr inline QColor colorPaletteBerryBorderActive              { 0xc2, 0x39, 0xb3 }; // 0xc239b3
    constexpr inline QColor colorPaletteBerryBorder1                   { 0xed, 0xbd, 0xe7 }; // 0xedbbe7
    constexpr inline QColor colorPaletteBerryBorder2                   { 0xc2, 0x39, 0xb3 }; // 0xc239b3
    constexpr inline QColor colorPaletteLightGreenBackground1          { 0xf2, 0xfb, 0xf2 }; // 0xf2fbf2
    constexpr inline QColor colorPaletteLightGreenBackground2          { 0xa7, 0xe3, 0xa5 }; // 0xa7e3a5
    constexpr inline QColor colorPaletteLightGreenBackground3          { 0x13, 0xa1, 0x0e }; // 0x13a10e
    constexpr inline QColor colorPaletteLightGreenForeground1          { 0x11, 0x91, 0x0d }; // 0x11910d
    constexpr inline QColor colorPaletteLightGreenForeground2          { 0x0b, 0x5a, 0x08 }; // 0x0b5a08
    constexpr inline QColor colorPaletteLightGreenForeground3          { 0x13, 0xa1, 0x0e }; // 0x13a10e
    constexpr inline QColor colorPaletteLightGreenBorderActive         { 0x13, 0xa1, 0x0e }; // 0x13a10e
    constexpr inline QColor colorPaletteLightGreenBorder1              { 0xa7, 0xe3, 0xa5 }; // 0xa7e3a5
    constexpr inline QColor colorPaletteLightGreenBorder2              { 0x13, 0xa1, 0x0e }; // 0x13a10e
    constexpr inline QColor colorPaletteMarigoldBackground1            { 0xfe, 0xfb, 0xf4 }; // 0xfefbf4
    constexpr inline QColor colorPaletteMarigoldBackground2            { 0xf9, 0xe2, 0xae }; // 0xf9e2ae
    constexpr inline QColor colorPaletteMarigoldBackground3            { 0xea, 0xa3, 0x00 }; // 0xeaa300
    constexpr inline QColor colorPaletteMarigoldForeground1            { 0xd3, 0x93, 0x00 }; // 0xd39300
    constexpr inline QColor colorPaletteMarigoldForeground2            { 0x83, 0x5b, 0x00 }; // 0x835b00
    constexpr inline QColor colorPaletteMarigoldForeground3            { 0xea, 0xa3, 0x00 }; // 0xeaa300
    constexpr inline QColor colorPaletteMarigoldBorderActive           { 0xea, 0xa3, 0x00 }; // 0xeaa300
    constexpr inline QColor colorPaletteMarigoldBorder1                { 0xf9, 0xe2, 0xae }; // 0xf9e2ae
    constexpr inline QColor colorPaletteMarigoldBorder2                { 0xea, 0xa3, 0x00 }; // 0xeaa300
    constexpr inline QColor colorPaletteRedForegroundInverted          { 0xdc, 0x5e, 0x62 }; // 0xdc5e62
    constexpr inline QColor colorPaletteGreenForegroundInverted        { 0x35, 0x9b, 0x35 }; // 0x359b35
    constexpr inline QColor colorPaletteYellowForegroundInverted       { 0xfe, 0xf7, 0xb2 }; // 0xfef7b2
    constexpr inline QColor colorPaletteDarkRedBackground2             { 0xd6, 0x9c, 0xa5 }; // 0xd69ca5
    constexpr inline QColor colorPaletteDarkRedForeground2             { 0x42, 0x06, 0x10 }; // 0x420610
    constexpr inline QColor colorPaletteDarkRedBorderActive            { 0x75, 0x0b, 0x1c }; // 0x750b1c
    constexpr inline QColor colorPaletteCranberryBackground2           { 0xee, 0xac, 0xb2 }; // 0xeeacb2
    constexpr inline QColor colorPaletteCranberryForeground2           { 0x6e, 0x08, 0x11 }; // 0x6e0811
    constexpr inline QColor colorPaletteCranberryBorderActive          { 0xc5, 0x0f, 0x1f }; // 0xc50f1f
    constexpr inline QColor colorPalettePumpkinBackground2             { 0xef, 0xc4, 0xad }; // 0xefc4ad
    constexpr inline QColor colorPalettePumpkinForeground2             { 0x71, 0x2d, 0x09 }; // 0x712d09
    constexpr inline QColor colorPalettePumpkinBorderActive            { 0xca, 0x50, 0x10 }; // 0xca5010
    constexpr inline QColor colorPalettePeachBackground2               { 0xff, 0xdd, 0xb3 }; // 0xffddb3
    constexpr inline QColor colorPalettePeachForeground2               { 0x8f, 0x4e, 0x00 }; // 0x8f4e00
    constexpr inline QColor colorPalettePeachBorderActive              { 0xff, 0x8c, 0x00 }; // 0xff8c00
    constexpr inline QColor colorPaletteGoldBackground2                { 0xec, 0xdf, 0xa5 }; // 0xecdfa5
    constexpr inline QColor colorPaletteGoldForeground2                { 0x6c, 0x57, 0x00 }; // 0x6c5700
    constexpr inline QColor colorPaletteGoldBorderActive               { 0xc1, 0x9c, 0x00 }; // 0xc19c00
    constexpr inline QColor colorPaletteBrassBackground2               { 0xe0, 0xce, 0xa2 }; // 0xe0cea2
    constexpr inline QColor colorPaletteBrassForeground2               { 0x55, 0x3e, 0x06 }; // 0x553e06
    constexpr inline QColor colorPaletteBrassBorderActive              { 0x98, 0x6f, 0x0b }; // 0x986f0b
    constexpr inline QColor colorPaletteBrownBackground2               { 0xdd, 0xc3, 0xb0 }; // 0xddc3b0
    constexpr inline QColor colorPaletteBrownForeground2               { 0x50, 0x30, 0x1a }; // 0x50301a
    constexpr inline QColor colorPaletteBrownBorderActive              { 0x8e, 0x56, 0x2e }; // 0x8e562e
    constexpr inline QColor colorPaletteForestBackground2              { 0xbd, 0xd9, 0x9b }; // 0xbdd99b
    constexpr inline QColor colorPaletteForestForeground2              { 0x29, 0x49, 0x03 }; // 0x294903
    constexpr inline QColor colorPaletteForestBorderActive             { 0x49, 0x82, 0x05 }; // 0x498205
    constexpr inline QColor colorPaletteSeafoamBackground2             { 0xa8, 0xf0, 0xcd }; // 0xa8f0cd
    constexpr inline QColor colorPaletteSeafoamForeground2             { 0x00, 0x72, 0x3b }; // 0x00723b
    constexpr inline QColor colorPaletteSeafoamBorderActive            { 0x00, 0xcc, 0x6a }; // 0x00cc6a
    constexpr inline QColor colorPaletteDarkGreenBackground2           { 0x9a, 0xd2, 0x9a }; // 0x9ad29a
    constexpr inline QColor colorPaletteDarkGreenForeground2           { 0x06, 0x3b, 0x06 }; // 0x063b06
    constexpr inline QColor colorPaletteDarkGreenBorderActive          { 0x0b, 0x6a, 0x0b }; // 0x0b6a0b
    constexpr inline QColor colorPaletteLightTealBackground2           { 0xa6, 0xe9, 0xed }; // 0xa6e9ed
    constexpr inline QColor colorPaletteLightTealForeground2           { 0x00, 0x66, 0x6d }; // 0x00666d
    constexpr inline QColor colorPaletteLightTealBorderActive          { 0x00, 0xb7, 0xc3 }; // 0x00b7c3
    constexpr inline QColor colorPaletteTealBackground2                { 0x9b, 0xd9, 0xdb }; // 0x9bd9db
    constexpr inline QColor colorPaletteTealForeground2                { 0x02, 0x49, 0x4c }; // 0x02494c
    constexpr inline QColor colorPaletteTealBorderActive               { 0x03, 0x83, 0x87 }; // 0x038387
    constexpr inline QColor colorPaletteSteelBackground2               { 0x94, 0xc8, 0xd4 }; // 0x94c8d4
    constexpr inline QColor colorPaletteSteelForeground2               { 0x00, 0x33, 0x3f }; // 0x00333f
    constexpr inline QColor colorPaletteSteelBorderActive              { 0x00, 0x5b, 0x70 }; // 0x005b70
    constexpr inline QColor colorPaletteBlueBackground2                { 0xa9, 0xd3, 0xf2 }; // 0xa9d3f2
    constexpr inline QColor colorPaletteBlueForeground2                { 0x00, 0x43, 0x77 }; // 0x004377
    constexpr inline QColor colorPaletteBlueBorderActive               { 0x00, 0x78, 0xd4 }; // 0x0078d4
    constexpr inline QColor colorPaletteRoyalBlueBackground2           { 0x9a, 0xbf, 0xdc }; // 0x9abfdc
    constexpr inline QColor colorPaletteRoyalBlueForeground2           { 0x00, 0x2c, 0x4e }; // 0x002c4e
    constexpr inline QColor colorPaletteRoyalBlueBorderActive          { 0x00, 0x4e, 0x8c }; // 0x004e8c
    constexpr inline QColor colorPaletteCornflowerBackground2          { 0xc8, 0xd1, 0xfa }; // 0xc8d1fa
    constexpr inline QColor colorPaletteCornflowerForeground2          { 0x2c, 0x3c, 0x85 }; // 0x2c3c85
    constexpr inline QColor colorPaletteCornflowerBorderActive         { 0x4f, 0x6b, 0xed }; // 0x4f6bed
    constexpr inline QColor colorPaletteNavyBackground2                { 0xa3, 0xb2, 0xe8 }; // 0xa3b2e8
    constexpr inline QColor colorPaletteNavyForeground2                { 0x00, 0x16, 0x65 }; // 0x001665
    constexpr inline QColor colorPaletteNavyBorderActive               { 0x00, 0x27, 0xb4 }; // 0x0027b4
    constexpr inline QColor colorPaletteLavenderBackground2            { 0xd2, 0xcc, 0xf8 }; // 0xd2ccf8
    constexpr inline QColor colorPaletteLavenderForeground2            { 0x3f, 0x36, 0x82 }; // 0x3f3682
    constexpr inline QColor colorPaletteLavenderBorderActive           { 0x71, 0x60, 0xe8 }; // 0x7160e8
    constexpr inline QColor colorPalettePurpleBackground2              { 0xc6, 0xb1, 0xde }; // 0xc6b1de
    constexpr inline QColor colorPalettePurpleForeground2              { 0x34, 0x1a, 0x51 }; // 0x341a51
    constexpr inline QColor colorPalettePurpleBorderActive             { 0x5c, 0x2e, 0x91 }; // 0x5c2e91
    constexpr inline QColor colorPaletteGrapeBackground2               { 0xd9, 0xa7, 0xe0 }; // 0xd9a7e0
    constexpr inline QColor colorPaletteGrapeForeground2               { 0x4c, 0x0d, 0x55 }; // 0x4c0d55
    constexpr inline QColor colorPaletteGrapeBorderActive              { 0x88, 0x17, 0x98 }; // 0x881798
    constexpr inline QColor colorPaletteLilacBackground2               { 0xe6, 0xbf, 0xed }; // 0xe6bfed
    constexpr inline QColor colorPaletteLilacForeground2               { 0x63, 0x27, 0x6d }; // 0x63276d
    constexpr inline QColor colorPaletteLilacBorderActive              { 0xb1, 0x46, 0xc2 }; // 0xb146c2
    constexpr inline QColor colorPalettePinkBackground2                { 0xf7, 0xc0, 0xe3 }; // 0xf7c0e3
    constexpr inline QColor colorPalettePinkForeground2                { 0x80, 0x21, 0x5d }; // 0x80215d
    constexpr inline QColor colorPalettePinkBorderActive               { 0xe4, 0x3b, 0xa6 }; // 0xe43ba6
    constexpr inline QColor colorPaletteMagentaBackground2             { 0xec, 0xa5, 0xd1 }; // 0xeca5d1
    constexpr inline QColor colorPaletteMagentaForeground2             { 0x6b, 0x00*0x11, 0x00, 0x43 }; // 0x6b0043
    constexpr inline QColor colorPaletteMagentaBorderActive            { 0xbf, 0x0f, 0x77 }; // 0xbf0f77
    constexpr inline QColor colorPalettePlumBackground2                { 0xd6, 0x96, 0xc0 }; // 0xd696c0
    constexpr inline QColor colorPalettePlumForeground2                { 0x43, 0x00, 0x2b }; // 0x43002b
    constexpr inline QColor colorPalettePlumBorderActive               { 0x77, 0x00, 0x4d }; // 0x77004d
    constexpr inline QColor colorPaletteBeigeBackground2               { 0xd7, 0xd4, 0xd4 }; // 0xd7d4d4
    constexpr inline QColor colorPaletteBeigeForeground2               { 0x44, 0x42, 0x41 }; // 0x444241
    constexpr inline QColor colorPaletteBeigeBorderActive              { 0x7a, 0x75, 0x74 }; // 0x7a7574
    constexpr inline QColor colorPaletteMinkBackground2                { 0xce, 0xcc, 0xcb }; // 0xcecccb
    constexpr inline QColor colorPaletteMinkForeground2                { 0x34, 0x32, 0x31 }; // 0x343231
    constexpr inline QColor colorPaletteMinkBorderActive               { 0x5d, 0x5a, 0x58 }; // 0x5d5a58
    constexpr inline QColor colorPalettePlatinumBackground2            { 0xcd, 0xd6, 0xd8 }; // 0xcdd6d8
    constexpr inline QColor colorPalettePlatinumForeground2            { 0x3b, 0x44, 0x47 }; // 0x3b4447
    constexpr inline QColor colorPalettePlatinumBorderActive           { 0x69, 0x79, 0x7e }; // 0x69797e
    constexpr inline QColor colorPaletteAnchorBackground2              { 0xbc, 0xc3, 0xc7 }; // 0xbcc3c7
    constexpr inline QColor colorPaletteAnchorForeground2              { 0x20, 0x24, 0x27 }; // 0x202427
    constexpr inline QColor colorPaletteAnchorBorderActive             { 0x39, 0x41, 0x46 }; //

    // status colors
    constexpr inline QColor colorStatusSuccessBackground1              { 0xf1, 0xfa, 0xf1 }; // 0xf1faf1
    constexpr inline QColor colorStatusSuccessBackground2              { 0x9f, 0xd8, 0x9f }; // 0x9fd89f
    constexpr inline QColor colorStatusSuccessBackground3              { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorStatusSuccessForeground1              { 0x0e, 0x70, 0x0e }; // 0x0e700e
    constexpr inline QColor colorStatusSuccessForeground2              { 0x09, 0x45, 0x09 }; // 0x094509
    constexpr inline QColor colorStatusSuccessForeground3              { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorStatusSuccessForegroundInverted       { 0x54, 0xb0, 0x54 }; // 0x54b054
    constexpr inline QColor colorStatusSuccessBorderActive             { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorStatusSuccessBorder1                  { 0x9f, 0xd8, 0x9f }; // 0x9fd89f
    constexpr inline QColor colorStatusSuccessBorder2                  { 0x10, 0x7c, 0x10 }; // 0x107c10
    constexpr inline QColor colorStatusWarningBackground1              { 0xff, 0xf9, 0xf5 }; // 0xfff9f5
    constexpr inline QColor colorStatusWarningBackground2              { 0xfd, 0xcf, 0xb4 }; // 0xfdcfb4
    constexpr inline QColor colorStatusWarningBackground3              { 0xf7, 0x63, 0x0c }; // 0xf7630c
    constexpr inline QColor colorStatusWarningForeground1              { 0xbc, 0x4b, 0x09 }; // 0xbc4b09
    constexpr inline QColor colorStatusWarningForeground2              { 0x8a, 0x37, 0x07 }; // 0x8a3707
    constexpr inline QColor colorStatusWarningForeground3              { 0xbc, 0x4b, 0x09 }; // 0xbc4b09
    constexpr inline QColor colorStatusWarningForegroundInverted       { 0xfa, 0xa0, 0x6b }; // 0xfaa06b
    constexpr inline QColor colorStatusWarningBorderActive             { 0xf7, 0x63, 0x0c }; // 0xf7630c
    constexpr inline QColor colorStatusWarningBorder1                  { 0xfd, 0xcf, 0xb4 }; // 0xfdcfb4
    constexpr inline QColor colorStatusWarningBorder2                  { 0xbc, 0x4b, 0x09 }; // 0xbc4b09
    constexpr inline QColor colorStatusDangerBackground1               { 0xfd, 0xf3, 0xf4 }; // 0xfdf3f4
    constexpr inline QColor colorStatusDangerBackground2               { 0xee, 0xac, 0xb2 }; // 0xeeacb2
    constexpr inline QColor colorStatusDangerBackground3               { 0xc5, 0x0f, 0x1f }; // 0xc50f1f
    constexpr inline QColor colorStatusDangerForeground1               { 0xb1, 0x0e, 0x1c }; // 0xb10e1c
    constexpr inline QColor colorStatusDangerForeground2               { 0x6e, 0x08, 0x11 }; // 0x6e0811
    constexpr inline QColor colorStatusDangerForeground3               { 0xc5, 0x0f, 0x1f }; // 0xc50f1f
    constexpr inline QColor colorStatusDangerForegroundInverted        { 0xdc, 0x62, 0x6d }; // 0xdc626d
    constexpr inline QColor colorStatusDangerBorderActive              { 0xc5, 0x0f, 0x1f }; // 0xc50f1f
    constexpr inline QColor colorStatusDangerBorder1                   { 0xee, 0xac, 0xb2 }; // 0xeeacb2
    constexpr inline QColor colorStatusDangerBorder2                   { 0xc5, 0x0f, 0x1f }; // 0xc50f1f
    constexpr inline QColor colorStatusDangerBackground3Hover          { 0xb1, 0x0e, 0x1c }; // 0xb10e1c
    constexpr inline QColor colorStatusDangerBackground3Pressed        { 0x96, 0x0b, 0x18 }; // 0x960b18
}

#endif // LIGHT_H