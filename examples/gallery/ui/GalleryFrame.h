#ifndef DETAILFRAME_H
#define DETAILFRAME_H

#include <QFrame>

namespace Ui
{
class GalleryFrame;
}

class GalleryFrame : public QFrame
{
    Q_OBJECT

public:
    explicit GalleryFrame(QWidget* parent = nullptr);
    ~GalleryFrame();

    void setTitle(const QString& title);
    void setDescription(const QString& desc);

    void setFrame(QWidget* widget);

private:
    Ui::GalleryFrame* ui;
};

#endif // DETAILFRAME_H
