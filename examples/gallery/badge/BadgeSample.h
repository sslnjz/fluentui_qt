#pragma once

#include <QFrame>
#include <QScrollArea>
#include <QWidget>

#include "BadgeDefault.h"
#include "gallery/badge/BadgeAppearance.h"
#include "gallery/badge/BadgeColor.h"
#include "gallery/badge/BadgeColorAppearance.h"
#include "gallery/badge/BadgeIcon.h"
#include "gallery/badge/BadgeShapes.h"
#include "gallery/badge/BadgeSizes.h"

class BadgeSample : public QScrollArea
{
    Q_OBJECT
public:
    BadgeSample(QWidget* parent = Q_NULLPTR);

private:
    BadgeDefault* m_default;
    BadgeAppearance* m_appearance;
    BadgeSizes* m_sizes;
    BadgeShapes* m_shapes;
    BadgeColor* m_color;
    BadgeIcon* m_icon;
    BadgeColorAppearance* m_colorAppearance;
};