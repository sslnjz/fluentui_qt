#pragma once

#include <QHBoxLayout>

#include "gallery/ui/GalleryFrame.h"
#include <QtWidgets/qlayoutitem.h>
#include <fluentui/components/Badge.h>

class BadgeIcon : public GalleryFrame
{
public:
    BadgeIcon(QWidget* parent)
        : GalleryFrame(parent)
    {
        setTitle("Icon");
        setDescription("A badge can display an svg icon.");

        auto badge5 = new Badge(this);
        badge5->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");

        QFrame* frame4 = new QFrame(this);
        QHBoxLayout* frame4Layout = new QHBoxLayout(frame4);
        frame4Layout->setSpacing(3);
        frame4Layout->addWidget(badge5);

        setFrame(frame4);
    }
};