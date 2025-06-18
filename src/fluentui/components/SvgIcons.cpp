#include "SvgIcons.h"

#include <QEvent>
#include <QFile>
#include <QPainter>
#include <QPixmap>
#include <QRegularExpression>
#include <QSize>
#include <QString>
#include <QStringView>
#include <QSvgRenderer>

static QString __svg = R"(<svg viewBox="2 2 16 16"><g fill="%2">%1</g></svg>)";

QIcon SvgIcons::createByPath(const QString& path, const QColor& fill)
{
    QString content = __svg.arg(path).arg(fill.name());
    QSvgRenderer renderer(content.toUtf8());
    QPixmap pixmap(32, 32);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    renderer.render(&painter);
    return QIcon(pixmap);
}

QIcon SvgIcons::createByPath(const QStringList& paths, const QColor& fill)
{
    return createByPath(paths.join(""), fill);
}

QIcon SvgIcons::createByFile(const QString& filename, const QColor& fill)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly))
        return QIcon();

    QString content = QString(file.readAll());
    file.close();

    content.replace(QRegularExpression(R"(fill\s*=\s*["'].*?["'])"),
        QString("fill=\"%1\"").arg(fill.name()));

    QSvgRenderer renderer(content.toUtf8());
    QSize size = (renderer.viewBoxF().size() * 2).toSize();
    QImage image(size, QImage::Format_ARGB32);
    image.fill(Qt::transparent);

    QPainter painter(&image);
    painter.setRenderHint(QPainter::Antialiasing);
    renderer.render(&painter);

    return QIcon(QPixmap::fromImage(image));
}