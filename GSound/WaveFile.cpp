#include "WaveFile.h"
#include<fstream>
#include <iostream>
using namespace std;

WaveFile::WaveFile(char* fileName)
{
    read(fileName);
}
float * WaveFile::getData(){
    if(waveRaw->size != 0){
        float* t = new float[waveRaw->size];
        for(unsigned int i=0;i<waveRaw->size;i++){
            t[i] = data[i];
        }
        return t;
    }
    else
        return 0;
}

void WaveFile::setData(float data[], unsigned int nSize){
    waveRaw->size = nSize;
    this->data = data;
}

void WaveFile::read(char* fileName){
    ifstream File(fileName,ios::in|ios::binary);

    if(File.is_open()){
        fileDesc = new FileDescription;
        waveMeta = new WaveMetaData;
        waveRaw  = new WaveRawData;

        File.read((char *)fileDesc,sizeof (FileDescription));
        File.read((char *)waveMeta,sizeof (WaveMetaData));
        File.read((char *)waveRaw, sizeof (WaveRawData));

        char* cdata = new char[waveRaw->size];
        data = new float[waveRaw->size];

        File.read(cdata,waveRaw->size);
        for(unsigned int i=0; i< waveRaw->size;i++){
            data[i] = (float)cdata[i];
        }

        File.close();
    }
}

void WaveFile::write(char* fileName){
        ofstream File;
        File.open(fileName,ios::out|ios::binary);
            if(File.is_open()){
                File.write((char *)fileDesc,sizeof (FileDescription));
                File.write((char *)waveMeta,sizeof (WaveMetaData));
                File.write((char *)waveRaw,sizeof (WaveRawData));
                char* cdata = new char[waveRaw->size];
                for(unsigned int i=0; i< waveRaw->size;i++){
                    cdata[i] = (char)data[i];
                }
                File.write(cdata,waveRaw->size);
                File.close();
            }
}
