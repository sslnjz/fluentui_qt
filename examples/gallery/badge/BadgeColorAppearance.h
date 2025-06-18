#pragma once

#include "gallery/ui/GalleryFrame.h"
#include <QHBoxLayout>
#include <QLabel>

#include <fluentui/components/Badge.h>

class BadgeColorAppearance : public GalleryFrame
{
public:
    BadgeColorAppearance(QWidget* parent)
        : GalleryFrame(parent)
    {
        setTitle("Color And Appearance");
        setDescription("Note: `ghost-subtle` and `outline-subtle` are intended only for use on brand background.");

        QLabel* filledLabel = new QLabel("Filled", this);
        filledLabel->setFont(QFont("Segoe UI", 16, 700));
        auto badge22 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::brand);
        badge22->setText("999+");
        badge22->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge23 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::danger);
        badge23->setText("999+");
        badge23->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge24 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::important);
        badge24->setText("999+");
        badge24->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge25 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::informative);
        badge25->setText("999+");
        badge25->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge26 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::severe);
        badge26->setText("999+");
        badge26->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge27 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::subtle);
        badge27->setText("999+");
        badge27->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge28 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::success);
        badge28->setText("999+");
        badge28->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge29 = new Badge(this, BadgeProps::Appearance::filled, BadgeProps::Status::warning);
        badge29->setText("999+");
        badge29->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");

        QHBoxLayout* subTitleFillLayout = new QHBoxLayout;
        subTitleFillLayout->addWidget(filledLabel);

        QHBoxLayout* filledLayout = new QHBoxLayout;
        filledLayout->setSpacing(3);
        filledLayout->addWidget(badge22);
        filledLayout->addWidget(badge23);
        filledLayout->addWidget(badge24);
        filledLayout->addWidget(badge25);
        filledLayout->addWidget(badge26);
        filledLayout->addWidget(badge27);
        filledLayout->addWidget(badge28);
        filledLayout->addWidget(badge29);
        filledLayout->addStretch();

        QLabel* ghostLabel = new QLabel("Ghost", this);
        ghostLabel->setFont(QFont("Segoe UI", 16, 700));
        auto badge32 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::brand);
        badge32->setText("999+");
        badge32->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge33 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::danger);
        badge33->setText("999+");
        badge33->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge34 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::important);
        badge34->setText("999+");
        badge34->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge35 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::informative);
        badge35->setText("999+");
        badge35->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge36 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::severe);
        badge36->setText("999+");
        badge36->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge37 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::subtle);
        badge37->setText("999+");
        badge37->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge38 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::success);
        badge38->setText("999+");
        badge38->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge39 = new Badge(this, BadgeProps::Appearance::ghost, BadgeProps::Status::warning);
        badge39->setText("999+");
        badge39->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");

        QHBoxLayout* subTitleghostLayout = new QHBoxLayout;
        subTitleghostLayout->addWidget(ghostLabel);

        QHBoxLayout* ghostLayout = new QHBoxLayout();
        ghostLayout->setSpacing(3);
        ghostLayout->addWidget(badge32);
        ghostLayout->addWidget(badge33);
        ghostLayout->addWidget(badge34);
        ghostLayout->addWidget(badge35);
        ghostLayout->addWidget(badge36);
        ghostLayout->addWidget(badge37);
        ghostLayout->addWidget(badge38);
        ghostLayout->addWidget(badge39);
        ghostLayout->addStretch();

        QLabel* outlineLabel = new QLabel("Outline", this);
        outlineLabel->setFont(QFont("Segoe UI", 16, 700));
        auto badge42 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::brand);
        badge42->setText("999+");
        badge42->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge43 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::danger);
        badge43->setText("999+");
        badge43->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge44 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::important);
        badge44->setText("999+");
        badge44->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge45 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::informative);
        badge45->setText("999+");
        badge45->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge46 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::severe);
        badge46->setText("999+");
        badge46->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge47 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::subtle);
        badge47->setText("999+");
        badge47->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge48 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::success);
        badge48->setText("999+");
        badge48->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge49 = new Badge(this, BadgeProps::Appearance::outline, BadgeProps::Status::warning);
        badge49->setText("999+");
        badge49->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");

        QHBoxLayout* subTitleoutlineLayout = new QHBoxLayout;
        subTitleoutlineLayout->addWidget(outlineLabel);

        QHBoxLayout* outlineLayout = new QHBoxLayout();
        outlineLayout->setSpacing(3);
        outlineLayout->addWidget(badge42);
        outlineLayout->addWidget(badge43);
        outlineLayout->addWidget(badge44);
        outlineLayout->addWidget(badge45);
        outlineLayout->addWidget(badge46);
        outlineLayout->addWidget(badge47);
        outlineLayout->addWidget(badge48);
        outlineLayout->addWidget(badge49);
        outlineLayout->addStretch();

        QLabel* tintLabel = new QLabel("Tint", this);
        tintLabel->setFont(QFont("Segoe UI", 16, 700));
        auto badge52 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::brand);
        badge52->setText("999+");
        badge52->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge53 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::danger);
        badge53->setText("999+");
        badge53->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge54 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::important);
        badge54->setText("999+");
        badge54->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge55 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::informative);
        badge55->setText("999+");
        badge55->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge56 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::severe);
        badge56->setText("999+");
        badge56->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge57 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::subtle);
        badge57->setText("999+");
        badge57->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge58 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::success);
        badge58->setText("999+");
        badge58->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");
        auto badge59 = new Badge(this, BadgeProps::Appearance::tint, BadgeProps::Status::warning);
        badge59->setText("999+");
        badge59->setSvgIcon(":/assets/assets/ic_fluent_clipboard_paste_32_regular.svg");

        QHBoxLayout* subTitletintLayout = new QHBoxLayout;
        subTitletintLayout->addWidget(tintLabel);

        QHBoxLayout* tintLayout = new QHBoxLayout();
        tintLayout->setSpacing(3);
        tintLayout->addWidget(badge52);
        tintLayout->addWidget(badge53);
        tintLayout->addWidget(badge54);
        tintLayout->addWidget(badge55);
        tintLayout->addWidget(badge56);
        tintLayout->addWidget(badge57);
        tintLayout->addWidget(badge58);
        tintLayout->addWidget(badge59);
        tintLayout->addStretch();

        QFrame* frame6 = new QFrame(this);
        QVBoxLayout* frame6Layout = new QVBoxLayout(frame6);
        frame6Layout->setSpacing(4);
        frame6Layout->addLayout(subTitleFillLayout);
        frame6Layout->addLayout(filledLayout);
        frame6Layout->addLayout(subTitleghostLayout);
        frame6Layout->addLayout(ghostLayout);
        frame6Layout->addLayout(subTitleoutlineLayout);
        frame6Layout->addLayout(outlineLayout);
        frame6Layout->addLayout(subTitletintLayout);
        frame6Layout->addLayout(tintLayout);

        setFrame(frame6);
    }
};