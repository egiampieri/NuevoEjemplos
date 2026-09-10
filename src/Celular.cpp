#include <Celular.hpp>

Celular::Celular()
{
    // _isOn = false;
    _isOn = false;
    // _battery = 100;
    setBattery(100);
    // _phoneNumber = "";
    setPhoneNumber("");
}

Celular::~Celular()
{

}

void Celular::turnOn()
{
    _isOn = true;
}

void Celular::turnOff()
{
    _isOn = false;
}

bool Celular::getIsOn()
{
    return _isOn;
}

void Celular::setBattery(int battery)
{
    _battery = battery;
}

int Celular::getBattery()
{
    return _battery;
}

void Celular::setPhoneNumber(string phoneNumber)
{
    _phoneNumber = phoneNumber;
}

string Celular::getPhoneNumber()
{
    return _phoneNumber;
}

void Celular::makeCall()
{
    // Solo se puede llamar si está encendido y tiene batería
    if (_isOn && _battery > 0)
    {
        _battery = _battery - 5;
    }
}

void Celular::chargeBattery()
{
    _battery = 100;
}
