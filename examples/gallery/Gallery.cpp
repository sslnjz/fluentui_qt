//
// Created by jbzs_ on 2025/5/28.
//

#include "Gallery.h"

#include "fluentui/components/Badge.h"

#include <QHBoxLayout>
#include <qboxlayout.h>
#include <QFrame>

Gallery::Gallery(QWidget *parent) {


    auto* badge = new Badge(this);
    badge->setPresetSize(Badge::PresetSize::tiny);

    auto* badge2 = new Badge(this);
    badge2->setPresetSize(Badge::PresetSize::extrasmall);

    auto* badge3 = new Badge(this);
    badge3->setPresetSize(Badge::PresetSize::small);

    auto* badge4 = new Badge(this);
    badge4->setPresetSize(Badge::PresetSize::medium);

    auto* badge5 = new Badge(this);
    badge5->setPresetSize(Badge::PresetSize::large);

    auto* badge6 = new Badge(this);
    badge6->setPresetSize(Badge::PresetSize::extralarge);

    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->setContentsMargins(0, 0, 0, 0);
    layout2->addWidget(badge);
    layout2->addWidget(badge2);
    layout2->addWidget(badge3);
    layout2->addWidget(badge4);
    layout2->addWidget(badge5);
    layout2->addWidget(badge6);
    layout2->setSpacing(0);



    QFrame *frame = new QFrame(this);
    frame->setLayout(layout2);


    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(frame);
    layout->setAlignment(frame, Qt::AlignCenter);
}

Gallery::~Gallery() = default;
