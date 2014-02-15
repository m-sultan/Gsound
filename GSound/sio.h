#ifndef SIO_H
#define SIO_H
#include<SFML/Audio.hpp>

class sio
{
    public:
        sio(char*);
        void openFile(char*);
        void writeFile(char*);
        int getSize();
        void play(short int*,int);
        short int* GetSamples();
    protected:
    private:
        short int* data;
        sf::SoundBuffer buffer;
};

#endif // SIO_H
