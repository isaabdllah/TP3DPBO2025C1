#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Psu : public Komponen
{
private:
    int dayaWatt;
    string sertifikasi;

public:
    Psu()
    {
    }

    Psu(int dayaWatt, string sertifikasi, string merk, string nama) : Komponen(merk, nama)
    {
        this->dayaWatt = dayaWatt;
        this->sertifikasi = sertifikasi;
    }

    void setDayaWatt(int dayaWatt)
    {
        this->dayaWatt = dayaWatt;
    }

    void setSertifikasi(string sertifikasi)
    {
        this->sertifikasi = sertifikasi;
    }

    int getDayaWatt()
    {
        return this->dayaWatt;
    }

    string getSertifikasi()
    {
        return this->sertifikasi;
    }

    ~Psu()
    {
    }
};
