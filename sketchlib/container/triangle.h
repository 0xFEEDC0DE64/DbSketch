#pragma once

#include "layer.h"
#include "sketchlib_global.h"

class SKETCHLIB_EXPORT Triangle : public Layer
{
    Q_OBJECT

public:
    Q_INVOKABLE explicit Triangle(QObject *parent = Q_NULLPTR);

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;
};
