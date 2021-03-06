#include "innershadow.h"

#include <QJsonValue>
#include <QJsonObject>

#include "containerfactory.h"

#include "color.h"
#include "graphicscontextsettings.h"

InnerShadow::InnerShadow(QObject *parent) :
    BaseContainer(parent),
    m_isEnabled(false),
    m_blurRadius(0.),
    m_color(Q_NULLPTR),
    m_contextSettings(Q_NULLPTR),
    m_offsetX(0.),
    m_offsetY(0.),
    m_spread(0.)
{
}

bool InnerShadow::isEnabled() const
{
    return m_isEnabled;
}

double InnerShadow::blurRadius() const
{
    return m_blurRadius;
}

Color *InnerShadow::color() const
{
    return m_color;
}

GraphicsContextSettings *InnerShadow::contextSettings() const
{
    return m_contextSettings;
}

double InnerShadow::offsetX() const
{
    return m_offsetX;
}

double InnerShadow::offsetY() const
{
    return m_offsetY;
}

double InnerShadow::spread() const
{
    return m_spread;
}

bool InnerShadow::parseProperty(const QString &key, const QJsonValue &value)
{
    if(key == QStringLiteral("isEnabled"))
    {
        Q_ASSERT(value.isBool());
        m_isEnabled = value.toBool();
        return true;
    }

    if(key == QStringLiteral("blurRadius"))
    {
        Q_ASSERT(value.isDouble());
        m_blurRadius = value.toDouble();
        return true;
    }

    if(key == QStringLiteral("color"))
    {
        Q_ASSERT(value.isObject());
        m_color = ContainerFactory::createContainer<Color>(value.toObject());
        return true;
    }

    if(key == QStringLiteral("contextSettings"))
    {
        Q_ASSERT(value.isObject());
        m_contextSettings = ContainerFactory::createContainer<GraphicsContextSettings>(value.toObject());
        return true;
    }

    if(key == QStringLiteral("offsetX"))
    {
        Q_ASSERT(value.isDouble());
        m_offsetX = value.toDouble();
        return true;
    }

    if(key == QStringLiteral("offsetY"))
    {
        Q_ASSERT(value.isDouble());
        m_offsetY = value.toDouble();
        return true;
    }

    if(key == QStringLiteral("spread"))
    {
        Q_ASSERT(value.isDouble());
        m_spread = value.toDouble();
        return true;
    }

    return BaseContainer::parseProperty(key, value);
}
