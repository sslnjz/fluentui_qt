//
// Created by jbzs_ on 2025/5/28.
//

#ifndef GALLERY_H
#define GALLERY_H

#include <QWidget>

class Gallery : public QWidget
{
    Q_OBJECT
public:
    explicit Gallery(QWidget *parent = nullptr);
    ~Gallery() override;

    QSize sizeHint() const override {
        return QSize(800, 600); // Default size for the gallery
    }

};



#endif //GALLERY_H
