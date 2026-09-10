#ifndef CELULAR_HPP
#define CELULAR_HPP

#include <string>

using namespace std;

class Celular
{
    private:
        bool _isOn;
        int _battery;
        string _phoneNumber;

    public:
        Celular();
        ~Celular();

        void turnOn();
        void turnOff();
        bool getIsOn();

        void setBattery(int battery);
        int getBattery();

        void setPhoneNumber(string phoneNumber);
        string getPhoneNumber();

        void makeCall();
        void chargeBattery();
};

#endif
