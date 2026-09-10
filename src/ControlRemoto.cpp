#include <ControlRemoto.hpp>

ControlRemoto::ControlRemoto()
{
    // _isOn = false;
    _isOn = false;
    // _volume = 10;
    setVolume(10);
    // _channel = 1;
    setChannel(1);
}

ControlRemoto::~ControlRemoto()
{

}

void ControlRemoto::turnOn()
{
    _isOn = true;
}

void ControlRemoto::turnOff()
{
    _isOn = false;
}

bool ControlRemoto::getIsOn()
{
    return _isOn;
}

void ControlRemoto::setVolume(int volume)
{
    _volume = volume;
}

int ControlRemoto::getVolume()
{
    return _volume;
}

void ControlRemoto::setChannel(int channel)
{
    _channel = channel;
}

int ControlRemoto::getChannel()
{
    return _channel;
}

void ControlRemoto::volumeUp()
{
    _volume = _volume + 1;
}

void ControlRemoto::volumeDown()
{
    // El volumen nunca baja de 0
    if (_volume > 0)
    {
        _volume = _volume - 1;
    }
}

void ControlRemoto::nextChannel()
{
    _channel = _channel + 1;
}

void ControlRemoto::previousChannel()
{
    // El canal nunca baja de 1
    if (_channel > 1)
    {
        _channel = _channel - 1;
    }
}
