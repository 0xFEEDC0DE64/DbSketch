#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class SKETCHLIB_EXPORT ImageCollection : public BaseContainer
{
    Q_OBJECT
    //TODO images

public:
    Q_INVOKABLE explicit ImageCollection(QObject *parent = Q_NULLPTR);

    //TODO images

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    //TODO images
};
