#pragma once

#include <QHBoxLayout>

#include "gallery/ui/GalleryFrame.h"
#include <QtWidgets/qlayoutitem.h>
#include <fluentui/components/Badge.h>

class BadgeSizes : public GalleryFrame
{
public:
    BadgeSizes(QWidget* parent)
        : GalleryFrame(parent)
    {
        setTitle("Sizes");
        setDescription("A badge supports `tiny`, `extra-small`, `small`, "
                       "`medium`, `large`, and `extra-large` sizes. The default is `medium`.");

        auto badge5 = new Badge(this);
        badge5->setScale(BadgeProps::Scale::tiny);
        auto badge6 = new Badge(this);
        badge6->setScale(BadgeProps::Scale::extrasmall);
        auto badge7 = new Badge(this);
        badge7->setScale(BadgeProps::Scale::small);
        auto badge8 = new Badge(this);
        badge8->setScale(BadgeProps::Scale::medium);
        auto badge9 = new Badge(this);
        badge9->setScale(BadgeProps::Scale::large);
        auto badge10 = new Badge(this);
        badge10->setScale(BadgeProps::Scale::extralarge);

        QWidget* widget = new QWidget(this);
        QHBoxLayout* widgetLayout = new QHBoxLayout(widget);
        widgetLayout->setSpacing(3);
        widgetLayout->addWidget(badge5);
        widgetLayout->addWidget(badge6);
        widgetLayout->addWidget(badge7);
        widgetLayout->addWidget(badge8);
        widgetLayout->addWidget(badge9);
        widgetLayout->addWidget(badge10);
        widgetLayout->addStretch();

        setFrame(widget);
    }
};