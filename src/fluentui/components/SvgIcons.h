#ifndef SVGICONS_H
#define SVGICONS_H

#include <QColor>
#include <QHash>
#include <QIcon>
#include <QString>
#include <functional>

#include <fluentui/FluentuiDefs.h>

class FLUENTUI_EXPORT SvgIcons
{
public:
    static QIcon createByPath(const QString& path, const QColor& fill = Qt::black);
    static QIcon createByPath(const QStringList& paths, const QColor& fill = Qt::black);
    static QIcon createByFile(const QString& filename, const QColor& fill = Qt::black);
};

#endif
