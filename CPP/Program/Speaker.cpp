#pragma once
#include "Periferal.cpp"

class Speaker : public Periferal
{
private:
    int dayaWatt;

public:
    Speaker()
    {
    }

    Speaker(string merk, string nama, string koneksi, int dayaWatt)
        : Periferal(merk, nama, koneksi)
    {
        this->dayaWatt = dayaWatt;
    }

    void setDayaWatt(int dayaWatt)
    {
        this->dayaWatt = dayaWatt;
    }

    int getDayaWatt()
    {
        return this->dayaWatt;
    }

    ~Speaker()
    {
    }
};
