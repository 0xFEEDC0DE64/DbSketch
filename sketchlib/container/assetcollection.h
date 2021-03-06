#pragma once

#include "basecontainer.h"
#include "sketchlib_global.h"

class QJsonObject;

class Color;
class ImageCollection;

class SKETCHLIB_EXPORT AssetCollection : public BaseContainer
{
    Q_OBJECT
    Q_PROPERTY(QList<Color*> colors READ colors CONSTANT)
    Q_PROPERTY(ImageCollection* imageCollection READ imageCollection CONSTANT)

public:
    Q_INVOKABLE explicit AssetCollection(QObject *parent = Q_NULLPTR);

    const QList<Color*> &colors() const;
    ImageCollection *imageCollection() const;

protected:
    // BaseContainer interface
    virtual bool parseProperty(const QString &key, const QJsonValue &value) Q_DECL_OVERRIDE;

private:
    QList<Color*> m_colors;
    //TODO gradients
    ImageCollection *m_imageCollection;
    //TODO images
};
