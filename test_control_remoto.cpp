#include <iostream>
#include <string>
#include <memory>
#include <ControlRemoto.hpp>
#include <TestEvaluator.hpp>

using namespace std;

auto te = make_unique<TestEvaluator>();

void testControlRemotoTurnsOn()//Test para evaluar el encendido del control.
{
    //Arrange
    auto control = make_unique<ControlRemoto>();

    //Act
    control->turnOn();

    //Assert
    te->evaluate("Control Remoto Turns On", control->getIsOn());
}

void testControlRemotoTurnsOff()
{
    //Arrange
    auto control = make_unique<ControlRemoto>();
    control->turnOn();

    //Act
    control->turnOff();
    bool isOff = !control->getIsOn();

    //Assert
    te->evaluate("Control Remoto Turns Off", isOff);
}

void testControlRemotoVolumeUp()
{
    //Arrange
    auto control = make_unique<ControlRemoto>();
    control->setVolume(5);

    //Act
    control->volumeUp();
    int volume = control->getVolume();

    //Assert
    te->evaluate("Control Remoto Volume Up", volume == 6);
}

void testControlRemotoVolumeDoesNotGoBelowZero()
{
    //Arrange
    auto control = make_unique<ControlRemoto>();
    control->setVolume(0);

    //Act
    control->volumeDown();
    int volume = control->getVolume();

    //Assert
    te->evaluate("Control Remoto Volume Does Not Go Below Zero", volume == 0);
}

int main(int argc, char const *argv[])
{
    //Imprimir el título del Caso de Pruebas
    te->title("ControlRemoto tests:");

    testControlRemotoTurnsOn();

    testControlRemotoTurnsOff();

    testControlRemotoVolumeUp();

    testControlRemotoVolumeDoesNotGoBelowZero();

    te->summary();

    return 0;
}
