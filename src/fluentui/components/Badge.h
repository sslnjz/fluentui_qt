#ifndef BADGE_H
#define BADGE_H

#include <QIcon>
#include <QWidget>

#include <fluentui/FluentuiDefs.h>

namespace fluent
{
    class FLUENTUI_EXPORT Badge : public QWidget
    {
        Q_OBJECT
    public:
        Q_PROPERTY(QIcon icon READ icon WRITE setIcon)
        Q_PROPERTY(Appearances appearance READ appearance WRITE setAppearance)

        enum class Appearance {
            filled,
            ghost,
            outline,
            tint
        };
        Q_DECLARE_FLAGS(Appearances, Appearance)

        explicit Badge(QWidget* parent = nullptr);
        ~Badge() override;

        QIcon icon() const;
        void setIcon(const QIcon& icon);

        Appearances appearance() const;
        void setAppearance(Appearances appearance);

    protected:
        void paintEvent(QPaintEvent *event) override;

    public:
        QSize sizeHint() const override;

    private:
        QIcon m_icon;
        Appearances m_appearance;
    };
}

#endif //BADGE_H
