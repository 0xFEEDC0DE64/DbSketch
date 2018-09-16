#pragma once

#include "group.h"
#include "sketchlib_global.h"

class QJsonObject;

class SKETCHLIB_EXPORT ShapeGroup : public Group
{
    Q_OBJECT

public:
    Q_INVOKABLE explicit ShapeGroup(QObject *parent = Q_NULLPTR);

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
};
