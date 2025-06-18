#pragma once

#include <QHBoxLayout>

#include "gallery/ui/GalleryFrame.h"
#include <QtWidgets/qlayoutitem.h>
#include <fluentui/components/Badge.h>

class BadgeColor : public GalleryFrame
{
public:
    BadgeColor(QWidget* parent)
        : GalleryFrame(parent)
    {
        setTitle("Sizes");
        setDescription("A badge can have different colors. The available "
                       "colors are `brand`, `danger`, `important`, `informative`, `severe`,"
                       " `subtle`, `success` or `warning`. The default is `brand`. "
                       "Information conveyed by color should also be communicated in "
                       "another way to meet accessibility requirements.");

        auto badge11 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::brand);
        badge11->setText("999+");
        auto badge12 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::danger);
        badge12->setText("999+");
        auto badge13 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::important);
        badge13->setText("999+");
        auto badge14 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::informative);
        badge14->setText("999+");
        auto badge15 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::severe);
        badge15->setText("999+");
        auto badge16 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::subtle);
        badge16->setText("999+");
        auto badge17 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::success);
        badge17->setText("999+");
        auto badge18 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::warning);
        badge18->setText("999+");

        QFrame* frame4 = new QFrame(this);
        QHBoxLayout* frame4Layout = new QHBoxLayout(frame4);
        frame4Layout->setSpacing(3);
        frame4Layout->addWidget(badge11);
        frame4Layout->addWidget(badge12);
        frame4Layout->addWidget(badge13);
        frame4Layout->addWidget(badge14);
        frame4Layout->addWidget(badge15);
        frame4Layout->addWidget(badge16);
        frame4Layout->addWidget(badge17);
        frame4Layout->addWidget(badge18);
        frame4Layout->addStretch();

        setFrame(frame4);
    }
};