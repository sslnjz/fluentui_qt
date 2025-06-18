#ifndef IPROPERTIES_H
#define IPROPERTIES_H

#include <fluentui/FluentuiDefs.h>

template <class T>
class FLUENTUI_EXPORT IProperties
{
public:
    virtual ~IProperties() = default;

    virtual void setProps(const T& props) = 0;
    virtual const T props() const = 0;

protected:
    virtual void propsChanged() = 0;
};

#endif