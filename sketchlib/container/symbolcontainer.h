#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class SKETCHLIB_EXPORT SymbolContainer : public BaseContainer
{
    Q_OBJECT
    //TODO objects

public:
    Q_INVOKABLE explicit SymbolContainer(QObject *parent = Q_NULLPTR);

    //TODO objects

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    //TODO objects
};
