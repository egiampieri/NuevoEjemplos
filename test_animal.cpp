#include <iostream>
#include <string>
#include <memory>
#include <Animal.hpp>
#include <TestEvaluator.hpp>

using namespace std;

auto te = make_unique<TestEvaluator>();

void testAnimalCanEat()//Test para evaluar que el animal reduce su hambre al comer.
{
    //Arrange
    auto animal = make_unique<Animal>();
    animal->setHunger(10);

    //Act
    animal->eat();
    int hunger = animal->getHunger();

    //Assert
    te->evaluate("Animal Can Eat", hunger < 10);
}

void testAnimalCanSleep()
{
    //Arrange
    auto animal = make_unique<Animal>();

    //Act
    animal->sleep();

    //Assert
    te->evaluate("Animal Can Sleep", animal->getIsSleeping());
}

void testAnimalCanWakeUp()
{
    //Arrange
    auto animal = make_unique<Animal>();
    animal->sleep();

    //Act
    animal->wakeUp();
    bool isAwake = !animal->getIsSleeping();

    //Assert
    te->evaluate("Animal Can Wake Up", isAwake);
}

int main(int argc, char const *argv[])
{
    //Imprimir el título del Caso de Pruebas
    te->title("Animal tests:");

    testAnimalCanEat();

    testAnimalCanSleep();

    testAnimalCanWakeUp();

    te->summary();

    return 0;
}
