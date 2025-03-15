#pragma once
#include "Periferal.cpp"

class Monitor : public Periferal
{
private:
    int ukuranInci;
    int refreshRate;

public:
    Monitor()
    {
    }

    Monitor(string merk, string nama, string koneksi, int ukuranInci, int refreshRate)
        : Periferal(merk, nama, koneksi)
    {
        this->ukuranInci = ukuranInci;
        this->refreshRate = refreshRate;
    }

    void setUkuranInci(int ukuranInci)
    {
        this->ukuranInci = ukuranInci;
    }

    void setRefreshRate(int refreshRate)
    {
        this->refreshRate = refreshRate;
    }

    int getUkuranInci()
    {
        return this->ukuranInci;
    }

    int getRefreshRate()
    {
        return this->refreshRate;
    }

    ~Monitor()
    {
    }
};
