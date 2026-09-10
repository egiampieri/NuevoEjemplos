#include <iostream>
#include <string>
#include <memory>
#include <Celular.hpp>
#include <TestEvaluator.hpp>

using namespace std;

auto te = make_unique<TestEvaluator>();

void testCelularTurnsOn()//Test para evaluar el encendido del celular.
{
    //Arrange
    auto celular = make_unique<Celular>();

    //Act
    celular->turnOn();

    //Assert
    te->evaluate("Celular Turns On", celular->getIsOn());
}

void testCelularMakeCallReducesBattery()
{
    //Arrange
    auto celular = make_unique<Celular>();
    celular->turnOn();
    celular->setBattery(50);

    //Act
    celular->makeCall();
    int battery = celular->getBattery();

    //Assert
    te->evaluate("Celular Make Call Reduces Battery", battery < 50);
}

void testCelularCannotCallWhenOff()
{
    //Arrange
    auto celular = make_unique<Celular>();
    celular->turnOff();
    celular->setBattery(50);

    //Act
    celular->makeCall();
    int battery = celular->getBattery();

    //Assert
    te->evaluate("Celular Cannot Call When Off", battery == 50);
}

void testCelularChargeBattery()
{
    //Arrange
    auto celular = make_unique<Celular>();
    celular->setBattery(20);

    //Act
    celular->chargeBattery();
    int battery = celular->getBattery();

    //Assert
    te->evaluate("Celular Charge Battery", battery == 100);
}

int main(int argc, char const *argv[])
{
    //Imprimir el título del Caso de Pruebas
    te->title("Celular tests:");

    testCelularTurnsOn();

    testCelularMakeCallReducesBattery();

    testCelularCannotCallWhenOff();

    testCelularChargeBattery();

    te->summary();

    return 0;
}
