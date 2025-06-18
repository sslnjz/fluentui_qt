#pragma once

#include "gallery/ui/GalleryFrame.h"
#include <fluentui/components/Badge.h>

class BadgeDefault : public GalleryFrame
{
    Q_OBJECT
public:
    BadgeDefault(QWidget* parent)
        : GalleryFrame(parent)
    {
        setTitle("Default");
        setDescription("");

        Badge* badge = new Badge(this);
        setFrame(badge);
    }
};