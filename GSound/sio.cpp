#include "sio.h"
#include<SFML/Audio.hpp>

sio::sio(char* fileName)
{
    sio::openFile(fileName);
}

void sio::openFile(char* fileName)
{
    this->buffer.LoadFromFile(fileName);
}

void sio::writeFile(char* fileName)
{
    this->buffer.SaveToFile(fileName);
}

void sio::play(short int * raw, int RawSize)
{
    sf::SoundBuffer b;
    b.LoadFromSamples(&raw[0],RawSize,this->buffer.GetChannelsCount(),this->buffer.GetSampleRate());
    sf::Sound sound;
    sound.SetBuffer(b);
    sound.Play();
    system("sleep 26");
}

int sio::getSize()
{
    return this->buffer.GetSamplesCount();
}

short int * sio::GetSamples()
{
    const short int* t = this->buffer.GetSamples();
    this->data = new short int[this->buffer.GetSamplesCount()];
    for(int i =0;i< this->buffer.GetSamplesCount();i++)
    {
        this->data[i] = t[i];
    }
    return this->data;
}
