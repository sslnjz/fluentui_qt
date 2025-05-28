//
// Created by jbzs_ on 2025/5/28.
//

#include "Gallery.h"

#include "fluentui/components/Badge.h"

#include <QHBoxLayout>

Gallery::Gallery(QWidget *parent) {
    auto* badge = new fluent::Badge;
    auto *layout = new QHBoxLayout(this);
    layout->addWidget(badge, Qt::AlignHCenter);
    setLayout(layout);
}

Gallery::~Gallery() = default;
