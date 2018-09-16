#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class SharedStyle;

class SKETCHLIB_EXPORT SharedTextStyleContainer : public BaseContainer
{
    Q_OBJECT
    Q_PROPERTY(QList<SharedStyle*> objects READ objects CONSTANT)

public:
    Q_INVOKABLE explicit SharedTextStyleContainer(QObject *parent = Q_NULLPTR);

    const QList<SharedStyle*> &objects() const;

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    QList<SharedStyle*> m_objects;
};
