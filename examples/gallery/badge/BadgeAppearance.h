#pragma once

#include <QHBoxLayout>

#include "gallery/ui/GalleryFrame.h"
#include <fluentui/components/Badge.h>

class BadgeAppearance : public GalleryFrame
{
public:
    BadgeAppearance(QWidget* parent)
        : GalleryFrame(parent)
    {
        setTitle("Appearance");
        setDescription(
            "A badge can have a `filled`, `ghost`, `outline`, "
            "or `tint` appearance. The default is `filled`.");

        auto badge1 = new Badge(this);
        badge1->setText("999+");
        auto badge2 = new Badge(this, BadgeProps::Appearance::ghost);
        badge2->setText("999+");
        auto badge3 = new Badge(this, BadgeProps::Appearance::outline);
        badge3->setText("999+");
        auto badge4 = new Badge(this, BadgeProps::Appearance::tint);
        badge4->setText("999+");

        QWidget* widget = new QFrame(this);
        QHBoxLayout* widgetLayout = new QHBoxLayout(widget);
        widgetLayout->setSpacing(3);
        widgetLayout->addWidget(badge1);
        widgetLayout->addWidget(badge2);
        widgetLayout->addWidget(badge3);
        widgetLayout->addWidget(badge4);
        widgetLayout->addStretch();

        setFrame(widget);
    }
};