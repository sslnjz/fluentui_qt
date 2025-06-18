#ifndef BADGESTYLE_H
#define BADGESTYLE_H

#include <QFont>

#include <fluentui/components/BadgeProps.h>
#include <fluentui/styles/Style.h>

class BadgeStyle : public Style
{
public:
    BadgeStyle(BadgeProps& p);

    QFont font() const override;
    void setFont(QStringList families, int pointSize, int weight);

    void updateStyle() override;

private:
    BadgeProps& m_props;
};

#endif