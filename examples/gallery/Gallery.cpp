#include "Gallery.h"
#include "fluentui/components/Badge.h"

#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QPalette>
#include <QVBoxLayout>
#include <QtCore/qbytearray.h>
#include <QtCore/qnamespace.h>
#include <QtGui/qfont.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qsizepolicy.h>
#include <qnamespace.h>

Gallery::Gallery(QWidget *parent) {
  QVBoxLayout *mainLayout = new QVBoxLayout(this);
  mainLayout->setContentsMargins(8, 8, 8, 8);

  QLabel *defaultLabel = new QLabel("Default", this);
  defaultLabel->setFont(QFont("Segoe UI", 14, QFont::Bold));
  defaultLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  // Default Badge
  auto badge = new Badge(this);

  QFrame *frame = new QFrame(this);
  frame->setStyleSheet("QFrame{background: #fafafa;}");
  QHBoxLayout *frameLayout = new QHBoxLayout(frame);
  frameLayout->addWidget(badge, Qt::AlignLeft | Qt::AlignVCenter);
  frameLayout->addStretch();

  mainLayout->addWidget(defaultLabel);
  mainLayout->addWidget(frame);

  QLabel *appearanceLabel = new QLabel("Appearance", this);
  appearanceLabel->setFont(QFont("Segoe UI", 14, QFont::Bold));
  appearanceLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  QLabel *appearanceDescLabel =
      new QLabel("A badge can have a filled, ghost, outline, "
                 "or tint appearance. The default is filled.",
                 this);
  appearanceDescLabel->setFont(QFont("Segoe UI", 14));
  appearanceDescLabel->setSizePolicy(QSizePolicy::Preferred,
                                     QSizePolicy::Fixed);

  auto badge1 = new Badge(this);
  badge1->setText("999+");
  auto badge2 = new Badge(this, Badge::Appearance::ghost);
  badge2->setText("999+");
  auto badge3 = new Badge(this, Badge::Appearance::outline);
  badge3->setText("999+");
  auto badge4 = new Badge(this, Badge::Appearance::tint);
  badge4->setText("999+");

  QFrame *frame2 = new QFrame(this);
  frame2->setStyleSheet("QFrame{background: #fafafa;}");
  QHBoxLayout *frame2Layout = new QHBoxLayout(frame2);
  frame2Layout->setSpacing(3);
  frame2Layout->addWidget(badge1);
  frame2Layout->addWidget(badge2);
  frame2Layout->addWidget(badge3);
  frame2Layout->addWidget(badge4);
  frame2Layout->addStretch();

  mainLayout->addWidget(appearanceLabel);
  mainLayout->addWidget(appearanceDescLabel);
  mainLayout->addWidget(frame2);

  QLabel *sizeLabel = new QLabel("Sizes", this);
  sizeLabel->setFont(QFont("Segoe UI", 14, QFont::Bold));
  sizeLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  QLabel *sizesDescLabel =
      new QLabel("A badge supports tiny, extra-small, small, medium, large, "
                 "and extra-large sizes. The default is medium.",
                 this);
  sizesDescLabel->setFont(QFont("Segoe UI", 14));
  sizesDescLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  auto badge5 = new Badge(this);
  badge5->setPresetSize(Badge::PresetSize::tiny);
  auto badge6 = new Badge(this);
  badge6->setPresetSize(Badge::PresetSize::extrasmall);
  auto badge7 = new Badge(this);
  badge7->setPresetSize(Badge::PresetSize::small);
  auto badge8 = new Badge(this);
  badge8->setPresetSize(Badge::PresetSize::medium);
  auto badge9 = new Badge(this);
  badge9->setPresetSize(Badge::PresetSize::large);
  auto badge10 = new Badge(this);
  badge10->setPresetSize(Badge::PresetSize::extralarge);

  QFrame *frame3 = new QFrame(this);
  frame3->setStyleSheet("QFrame{background: #fafafa;}");
  QHBoxLayout *frame3Layout = new QHBoxLayout(frame3);
  frame3Layout->setSpacing(3);
  frame3Layout->addWidget(badge5);
  frame3Layout->addWidget(badge6);
  frame3Layout->addWidget(badge7);
  frame3Layout->addWidget(badge8);
  frame3Layout->addWidget(badge9);
  frame3Layout->addWidget(badge10);
  frame3Layout->addStretch();

  mainLayout->addWidget(sizeLabel);
  mainLayout->addWidget(sizesDescLabel);
  mainLayout->addWidget(frame3);

  QLabel *shapeLabel = new QLabel("Shapes", this);
  shapeLabel->setFont(QFont("Segoe UI", 14, QFont::Bold));
  shapeLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  QLabel *shapeDescLabel =
      new QLabel("A badge can have square, rounded or circular shape. The "
                 "default is circular.",
                 this);
  shapeDescLabel->setFont(QFont("Segoe UI", 14));
  shapeDescLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  auto badge19 = new Badge(this, Badge::Appearance::filled, Badge::Color::brand,
                           Badge::Shape::square);
  auto badge20 = new Badge(this, Badge::Appearance::filled, Badge::Color::brand,
                           Badge::Shape::rounded);
  auto badge21 = new Badge(this, Badge::Appearance::filled, Badge::Color::brand,
                           Badge::Shape::circular);

  QFrame *frame5 = new QFrame(this);
  frame5->setStyleSheet("QFrame{background: #fafafa;}");
  QHBoxLayout *frame5Layout = new QHBoxLayout(frame5);
  frame5Layout->setSpacing(3);
  frame5Layout->addWidget(badge19);
  frame5Layout->addWidget(badge20);
  frame5Layout->addWidget(badge21);
  frame5Layout->addStretch();

  mainLayout->addWidget(shapeLabel);
  mainLayout->addWidget(shapeDescLabel);
  mainLayout->addWidget(frame5);

  // Color

  QLabel *colorLabel = new QLabel("Sizes", this);
  colorLabel->setFont(QFont("Segoe UI", 14, QFont::Bold));
  colorLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  QLabel *colorDescLabel =
      new QLabel("A badge can have different colors. The available colors are "
                 "brand, danger, "
                 "important, informative, severe, subtle, success or warning. "
                 "The default is brand. ",
                 this);
  colorDescLabel->setFont(QFont("Segoe UI", 14));
  colorDescLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  auto badge11 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::brand);
  badge11->setText("999+");
  auto badge12 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::danger);
  badge12->setText("999+");
  auto badge13 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::important);
  badge13->setText("999+");
  auto badge14 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::informative);
  badge14->setText("999+");
  auto badge15 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::severe);
  badge15->setText("999+");
  auto badge16 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::subtle);
  badge16->setText("999+");
  auto badge17 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::success);
  badge17->setText("999+");
  auto badge18 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::warning);
  badge18->setText("999+");

  QFrame *frame4 = new QFrame(this);
  frame4->setStyleSheet("QFrame{background: #fafafa;}");
  QHBoxLayout *frame4Layout = new QHBoxLayout(frame4);
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

  mainLayout->addWidget(colorLabel);
  mainLayout->addWidget(colorDescLabel);
  mainLayout->addWidget(frame4);

  QLabel *colorAppearLabel = new QLabel("Color And Appearance", this);
  colorAppearLabel->setFont(QFont("Segoe UI", 14, QFont::Bold));
  colorAppearLabel->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

  QLabel *colorAppearDescLabel =
      new QLabel("Note: ghost-subtle and outline-subtle are intended only for "
                 "use on brand background.",
                 this);
  colorAppearDescLabel->setFont(QFont("Segoe UI", 14));
  colorAppearDescLabel->setSizePolicy(QSizePolicy::Preferred,
                                      QSizePolicy::Fixed);

  QLabel *filledLabel = new QLabel("Filled", this);
  auto badge22 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::brand);
  badge22->setText("999+");
  auto badge23 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::danger);
  badge23->setText("999+");
  auto badge24 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::important);
  badge24->setText("999+");
  auto badge25 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::informative);
  badge25->setText("999+");
  auto badge26 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::severe);
  badge26->setText("999+");
  auto badge27 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::subtle);
  badge27->setText("999+");
  auto badge28 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::success);
  badge28->setText("999+");
  auto badge29 =
      new Badge(this, Badge::Appearance::filled, Badge::Color::warning);
  badge29->setText("999+");

  QHBoxLayout *subTitleFillLayout = new QHBoxLayout;
  subTitleFillLayout->addWidget(filledLabel);

  QHBoxLayout *filledLayout = new QHBoxLayout;
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

  QLabel *ghostLabel = new QLabel("Ghost", this);
  auto badge32 = new Badge(this, Badge::Appearance::ghost, Badge::Color::brand);
  badge32->setText("999+");
  auto badge33 =
      new Badge(this, Badge::Appearance::ghost, Badge::Color::danger);
  badge33->setText("999+");
  auto badge34 =
      new Badge(this, Badge::Appearance::ghost, Badge::Color::important);
  badge34->setText("999+");
  auto badge35 =
      new Badge(this, Badge::Appearance::ghost, Badge::Color::informative);
  badge35->setText("999+");
  auto badge36 =
      new Badge(this, Badge::Appearance::ghost, Badge::Color::severe);
  badge36->setText("999+");
  auto badge37 =
      new Badge(this, Badge::Appearance::ghost, Badge::Color::subtle);
  badge37->setText("999+");
  auto badge38 =
      new Badge(this, Badge::Appearance::ghost, Badge::Color::success);
  badge38->setText("999+");
  auto badge39 =
      new Badge(this, Badge::Appearance::ghost, Badge::Color::warning);
  badge39->setText("999+");

  QHBoxLayout *subTitleghostLayout = new QHBoxLayout;
  subTitleghostLayout->addWidget(ghostLabel);

  QHBoxLayout *ghostLayout = new QHBoxLayout();
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

  QLabel *outlineLabel = new QLabel("Outline", this);
  auto badge42 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::brand);
  badge42->setText("999+");
  auto badge43 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::danger);
  badge43->setText("999+");
  auto badge44 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::important);
  badge44->setText("999+");
  auto badge45 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::informative);
  badge45->setText("999+");
  auto badge46 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::severe);
  badge46->setText("999+");
  auto badge47 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::subtle);
  badge47->setText("999+");
  auto badge48 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::success);
  badge48->setText("999+");
  auto badge49 =
      new Badge(this, Badge::Appearance::outline, Badge::Color::warning);
  badge49->setText("999+");

  QHBoxLayout *subTitleoutlineLayout = new QHBoxLayout;
  subTitleoutlineLayout->addWidget(outlineLabel);

  QHBoxLayout *outlineLayout = new QHBoxLayout();
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

  QLabel *tintLabel = new QLabel("Tint", this);
  auto badge52 = new Badge(this, Badge::Appearance::tint, Badge::Color::brand);
  badge52->setText("999+");
  auto badge53 = new Badge(this, Badge::Appearance::tint, Badge::Color::danger);
  badge53->setText("999+");
  auto badge54 =
      new Badge(this, Badge::Appearance::tint, Badge::Color::important);
  badge54->setText("999+");
  auto badge55 =
      new Badge(this, Badge::Appearance::tint, Badge::Color::informative);
  badge55->setText("999+");
  auto badge56 = new Badge(this, Badge::Appearance::tint, Badge::Color::severe);
  badge56->setText("999+");
  auto badge57 = new Badge(this, Badge::Appearance::tint, Badge::Color::subtle);
  badge57->setText("999+");
  auto badge58 =
      new Badge(this, Badge::Appearance::tint, Badge::Color::success);
  badge58->setText("999+");
  auto badge59 =
      new Badge(this, Badge::Appearance::tint, Badge::Color::warning);
  badge59->setText("999+");

  QHBoxLayout *subTitletintLayout = new QHBoxLayout;
  subTitletintLayout->addWidget(tintLabel);

  QHBoxLayout *tintLayout = new QHBoxLayout();
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

  QFrame *frame6 = new QFrame(this);
  frame6->setStyleSheet("QFrame{background: #fafafa;}");
  QVBoxLayout *frame6Layout = new QVBoxLayout(frame6);
  frame6Layout->addLayout(subTitleFillLayout);
  frame6Layout->addLayout(filledLayout);
  frame6Layout->addLayout(subTitleghostLayout);
  frame6Layout->addLayout(ghostLayout);
  frame6Layout->addLayout(subTitleoutlineLayout);
  frame6Layout->addLayout(outlineLayout);
  frame6Layout->addLayout(subTitletintLayout);
  frame6Layout->addLayout(tintLayout);

  mainLayout->addWidget(colorAppearLabel);
  mainLayout->addWidget(colorAppearDescLabel);
  mainLayout->addWidget(frame6);
}

Gallery::~Gallery() = default;
