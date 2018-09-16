#pragma once

#include "layer.h"
#include "sketchlib_global.h"

class QJsonObject;

class SKETCHLIB_EXPORT Text : public Layer
{
    Q_OBJECT

public:
    Q_INVOKABLE explicit Text(QObject *parent = Q_NULLPTR);

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
};
