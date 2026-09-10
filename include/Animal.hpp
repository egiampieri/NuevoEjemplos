#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

using namespace std;

class Animal
{
    private:
        string _name;
        int _hunger;
        bool _isSleeping;

    public:
        Animal();
        ~Animal();

        void setName(string name);
        string getName();

        void setHunger(int hunger);
        int getHunger();

        bool getIsSleeping();

        void eat();
        void sleep();
        void wakeUp();
        void makeSound();
};

#endif
