#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class Style;

class SKETCHLIB_EXPORT SharedStyle : public BaseContainer
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name CONSTANT)
    Q_PROPERTY(Style* value READ value CONSTANT)

public:
    Q_INVOKABLE explicit SharedStyle(QObject *parent = Q_NULLPTR);

    const QString &name() const;
    Style *value() const;

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    QString m_name;
    Style *m_value;
};
