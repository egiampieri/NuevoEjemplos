#include <Animal.hpp>
#include <iostream>

Animal::Animal()
{
    // _hunger = 10;
    setHunger(10);
    // _isSleeping = false;
    _isSleeping = false;
}

Animal::~Animal()
{

}

void Animal::setName(string name)
{
    _name = name;
}

string Animal::getName()
{
    return _name;
}

void Animal::setHunger(int hunger)
{
    _hunger = hunger;
}

int Animal::getHunger()
{
    return _hunger;
}

bool Animal::getIsSleeping()
{
    return _isSleeping;
}

void Animal::eat()
{
    // Al comer, baja el hambre, pero nunca por debajo de 0
    _hunger = _hunger - 5;
    if (_hunger < 0)
    {
        _hunger = 0;
    }
}

void Animal::sleep()
{
    _isSleeping = true;
}

void Animal::wakeUp()
{
    _isSleeping = false;
}

void Animal::makeSound()
{
    cout << _name << " hace un sonido." << endl;
}
