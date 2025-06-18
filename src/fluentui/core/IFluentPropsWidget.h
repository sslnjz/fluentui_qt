#ifndef IFLUENTPROPSWIDGET_H
#define IFLUENTPROPSWIDGET_H

#include <QWidget>
#include <fluentui/FluentuiDefs.h>
#include <fluentui/core/IProperties.h>
#include <fluentui/styles/Style.h>

template <class T>
class FLUENTUI_EXPORT IFluentPropsWidget : public QWidget, public IProperties<T>
{
public:
    IFluentPropsWidget(QWidget* parent = nullptr)
        : QWidget(parent)
        , m_style(nullptr)
    {
    }

    virtual ~IFluentPropsWidget()
    {
        if (m_style != nullptr)
            delete m_style;
        m_style = nullptr;
    }

    void setProps(const T& props) override
    {
        if (m_props != props)
        {
            m_props = props;
            propsChanged();
            update();
        }
    }

    const T props() const override
    {
        return m_props;
    }

    void propsChanged() override
    {
        m_style->updateStyle();
    }

protected:
    T m_props;
    Style* m_style;
};

#endif