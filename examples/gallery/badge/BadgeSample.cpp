#include "BadgeSample.h"
#include "gallery/badge/BadgeAppearance.h"
#include "gallery/badge/BadgeColor.h"
#include "gallery/badge/BadgeColorAppearance.h"
#include "gallery/badge/BadgeIcon.h"
#include "gallery/badge/BadgeShapes.h"
#include "gallery/badge/BadgeSizes.h"
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qscrollarea.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qwidget.h>

BadgeSample::BadgeSample(QWidget* parent)
    : QScrollArea(parent)
{
    setFrameShape(QFrame::NoFrame);

    QWidget* centralWidget = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout(centralWidget);
    layout->setSpacing(6);
    centralWidget->setLayout(layout);

    setWidget(centralWidget);
    setWidgetResizable(true);

    QLabel* stories = new QLabel("Stories", centralWidget);
    stories->setFont(QFont("Segoe UI", 24, 700));
    stories->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

    m_default = new BadgeDefault(this);
    m_appearance = new BadgeAppearance(this);
    m_sizes = new BadgeSizes(this);
    m_shapes = new BadgeShapes(this);
    m_color = new BadgeColor(this);
    m_icon = new BadgeIcon(this);
    m_colorAppearance = new BadgeColorAppearance(this);

    layout->addWidget(stories);
    layout->addWidget(m_default);
    layout->addWidget(m_appearance);
    layout->addWidget(m_sizes);
    layout->addWidget(m_shapes);
    layout->addWidget(m_color);
    layout->addWidget(m_icon);
    layout->addWidget(m_colorAppearance);
}