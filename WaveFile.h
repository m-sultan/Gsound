#ifndef WAVEFILE_H
#define WAVEFILE_H

struct FileDescription {
        char riff[4];
        unsigned int size;
        char wave[4];
};

struct WaveMetaData{
        char id[4];
        unsigned int size;
        short format;
        short channels;
        unsigned int sampleRate;
        unsigned int byteRate;
        short blockAlign;
        short bitsPerSample;
};

struct WaveRawData {
    char id[4];
    unsigned int size;
};

class WaveFile
{
    public:
        WaveFile(char* fileName);

        void setData(float data[], unsigned int nSize);
        float* getData();

        void read(char* fileName);
        void write(char* fileName);


    private:
        FileDescription* fileDesc;
        WaveMetaData*    waveMeta;
        WaveRawData*     waveRaw;
        float*          data;

};

#endif // WAVEFILE_H
