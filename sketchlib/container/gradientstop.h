#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class Color;

class SKETCHLIB_EXPORT GradientStop : public BaseContainer
{
    Q_OBJECT
    Q_PROPERTY(Color* color READ color CONSTANT)
    Q_PROPERTY(double position READ position CONSTANT)

public:
    Q_INVOKABLE explicit GradientStop(QObject *parent = Q_NULLPTR);

    Color *color() const;
    double position() const;

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    Color *m_color;
    double m_position;
};
