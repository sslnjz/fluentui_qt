#include "GalleryFrame.h"
#include "ui_GalleryFrame.h"
#include <QtCore/qnamespace.h>
#include <QtWidgets/qboxlayout.h>

#include <QPushButton>

GalleryFrame::GalleryFrame(QWidget* parent)
    : QFrame(parent)
    , ui(new Ui::GalleryFrame)
{
    ui->setupUi(this);
    ui->label_Title->setScaledContents(true);
    ui->label_Description->setTextFormat(Qt::MarkdownText);
    ui->label_Description->setContentsMargins(0, 0, 0, 0);
}

GalleryFrame::~GalleryFrame()
{
    delete ui;
}

void GalleryFrame::setTitle(const QString& title)
{
    ui->label_Title->setText(title);
}
void GalleryFrame::setDescription(const QString& desc)
{
    ui->label_Description->setText(desc);
}

void GalleryFrame::setFrame(QWidget* widget)
{
    QHBoxLayout* layout = new QHBoxLayout(ui->frame_Content);
    layout->setContentsMargins(12, 12, 12, 12);
    layout->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    layout->addWidget(widget);
    ui->frame_Content->setLayout(layout);
}