#include "Gallery.h"
#include "fluentui/components/Badge.h"
#include "fluentui/components/BadgeProps.h"
#include "fluentui/components/SvgIcons.h"

#include "badge/BadgeSample.h"

#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QPalette>
#include <QVBoxLayout>
#include <QtCore/qbytearray.h>
#include <QtCore/qnamespace.h>
#include <QtCore/qstring.h>
#include <QtGui/qfont.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qsizepolicy.h>
#include <qnamespace.h>

Gallery::Gallery(QWidget* parent)
{
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 0, 0, 0);

    BadgeSample* sample = new BadgeSample(this);
    mainLayout->addWidget(sample);
}

Gallery::~Gallery() = default;
