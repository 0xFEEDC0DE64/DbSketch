#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class SKETCHLIB_EXPORT Polygon : public BaseContainer
{
    Q_OBJECT

public:
    Q_INVOKABLE explicit Polygon(QObject *parent = Q_NULLPTR);

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
};
