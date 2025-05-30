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
    Q_PROPERTY(QString text READ text WRITE setText)
    Q_PROPERTY(Color color READ color WRITE setColor)
    Q_PROPERTY(PresetSize presetSize READ presetSize WRITE setPresetSize)
    Q_PROPERTY(Appearance appearance READ appearance WRITE setAppearance)

    enum class Color{
        brand,
        danger,
        important,
        informative,
        severe,
        subtle,
        success,
        warning
    };

    enum class Appearance {
        filled,
        ghost,
        outline,
        tint
    };

    enum class PresetSize {
        tiny,
        extrasmall,
        small,
        medium,
        large,
        extralarge
    };

    explicit Badge(QWidget* parent = nullptr);
    ~Badge() override;

    QIcon icon() const;
    void setIcon(const QIcon& icon);

    QString text() const;
    void setText(const QString& text);

    Color color() const;
    void setColor(Color color);

    PresetSize presetSize() const;
    void setPresetSize(PresetSize size);

    Appearance appearance() const;
    void setAppearance(Appearance appearance);

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

public:
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;


private:
    QScopedPointer<BadgePrivate> d_ptr;
};

#endif //BADGE_H
