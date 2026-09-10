#ifndef CONTROLREMOTO_HPP
#define CONTROLREMOTO_HPP

class ControlRemoto
{
    private:
        bool _isOn;
        int _volume;
        int _channel;

    public:
        ControlRemoto();
        ~ControlRemoto();

        void turnOn();
        void turnOff();
        bool getIsOn();

        void setVolume(int volume);
        int getVolume();

        void setChannel(int channel);
        int getChannel();

        void volumeUp();
        void volumeDown();
        void nextChannel();
        void previousChannel();
};

#endif
