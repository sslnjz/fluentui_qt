#pragma once

#include <QHBoxLayout>

#include "gallery/ui/GalleryFrame.h"
#include <QtWidgets/qlayoutitem.h>
#include <fluentui/components/Badge.h>

class BadgeShapes : public GalleryFrame
{
public:
    BadgeShapes(QWidget* parent)
        : GalleryFrame(parent)
    {
        setTitle("Shapes");
        setDescription("A badge can have `square`, `rounded` or `circular` shape. The default is `circular`.");

        auto badge19 = new Badge(
            this,
            BadgeProps::Appearance::filled,
            BadgeProps::Status::brand,
            BadgeProps::Shape::square);
        auto badge20 = new Badge(
            this,
            BadgeProps::Appearance::filled,
            BadgeProps::Status::brand,
            BadgeProps::Shape::rounded);
        auto badge21 = new Badge(
            this,
            BadgeProps::Appearance::filled,
            BadgeProps::Status::brand,
            BadgeProps::Shape::circular);

        QFrame* frame5 = new QFrame(this);
        frame5->setStyleSheet("QFrame{background: #fafafa;}");
        QHBoxLayout* frame5Layout = new QHBoxLayout(frame5);
        frame5Layout->setSpacing(3);
        frame5Layout->addWidget(badge19);
        frame5Layout->addWidget(badge20);
        frame5Layout->addWidget(badge21);
        frame5Layout->addStretch();

        setFrame(frame5);
    }
};