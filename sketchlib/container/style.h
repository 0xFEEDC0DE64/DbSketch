#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class Blur;
class BorderOptions;
class Border;
class Fill;
class GraphicsContextSettings;
class TextStyle;

class SKETCHLIB_EXPORT Style : public BaseContainer
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name CONSTANT)
    Q_PROPERTY(Blur* blur READ blur CONSTANT)
    Q_PROPERTY(BorderOptions* borderOptions READ borderOptions CONSTANT)
    Q_PROPERTY(QList<Border*> borders READ borders CONSTANT)
    Q_PROPERTY(QList<Fill*> fills READ fills CONSTANT)
    Q_PROPERTY(GraphicsContextSettings* contextSettings READ contextSettings CONSTANT)
    Q_PROPERTY(double endDecorationType READ endDecorationType CONSTANT)
    Q_PROPERTY(double miterLimit READ miterLimit CONSTANT)
    Q_PROPERTY(QString sharedObjectID READ sharedObjectID CONSTANT)
    Q_PROPERTY(double startDecorationType READ startDecorationType CONSTANT)
    Q_PROPERTY(TextStyle* textStyle READ textStyle CONSTANT)

public:
    Q_INVOKABLE explicit Style(QObject *parent = Q_NULLPTR);

    const QString &name() const;
    Blur *blur() const;
    BorderOptions *borderOptions() const;
    const QList<Border*> &borders() const;
    const QList<Fill*> &fills() const;
    GraphicsContextSettings *contextSettings() const;
    double endDecorationType() const;
    double miterLimit() const;
    const QString &sharedObjectID() const;
    double startDecorationType() const;
    TextStyle *textStyle() const;

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    QString m_name;
    Blur *m_blur;
    BorderOptions *m_borderOptions;
    QList<Border*> m_borders;
    QList<Fill*> m_fills;
    GraphicsContextSettings *m_contextSettings;
    double m_endDecorationType;
    double m_miterLimit;
    QString m_sharedObjectID;
    double m_startDecorationType;
    TextStyle *m_textStyle;
};
