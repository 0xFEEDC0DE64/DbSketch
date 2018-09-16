#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class SKETCHLIB_EXPORT RulerData : public BaseContainer
{
    Q_OBJECT
    Q_PROPERTY(double base READ base CONSTANT)

public:
    Q_INVOKABLE explicit RulerData(QObject *parent = Q_NULLPTR);

    double base() const;

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    double m_base;
};
