#ifndef BADGE_H
#define BADGE_H

#include <QIcon>
#include <QWidget>

#include <fluentui/FluentuiDefs.h>
#include <qflags.h>
#include <qsize.h>

class BadgePrivate;
class FLUENTUI_EXPORT Badge : public QWidget
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(Badge)

public:
    Q_PROPERTY(QIcon icon READ icon WRITE setIcon)
    Q_PROPERTY(Colors color READ color WRITE setColor)
    Q_PROPERTY(PresetSizes presetSize READ presetSize WRITE setPresetSize)
    Q_PROPERTY(Appearances appearance READ appearance WRITE setAppearance)

    enum Color{
        brand,
        danger,
        important,
        informative,
        severe,
        subtle,
        success,
        warning
    };
    Q_DECLARE_FLAGS(Colors, Color)

    enum Appearance {
        filled,
        ghost,
        outline,
        tint
    };
    Q_DECLARE_FLAGS(Appearances, Appearance)

    enum PresetSize {
        tiny,
        extrasmall,
        small,
        medium,
        large,
        extralarge
    };
    Q_DECLARE_FLAGS(PresetSizes, PresetSize)


    explicit Badge(QWidget* parent = nullptr);
    ~Badge() override;

    QIcon icon() const;
    void setIcon(const QIcon& icon);

    Colors color() const;
    void setColor(Colors color);

    PresetSizes presetSize() const;
    void setPresetSize(PresetSizes size);

    Appearances appearance() const;
    void setAppearance(Appearances appearance);

protected:
    void paintEvent(QPaintEvent *event) override;

public:
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;


private:
    QScopedPointer<BadgePrivate> d_ptr;
};

#endif //BADGE_H
