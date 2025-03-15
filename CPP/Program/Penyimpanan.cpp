#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Penyimpanan : public Komponen
{
protected:
    int kapasitasGB;
    string tipe; // HDD atau SSD

public:
    Penyimpanan()
    {
    }

    Penyimpanan(int kapasitasGB, string tipe, string merk, string nama) : Komponen(merk, nama)
    {
        this->kapasitasGB = kapasitasGB;
        this->tipe = tipe;
    }

    void setKapasitasGB(int kapasitasGB)
    {
        this->kapasitasGB = kapasitasGB;
    }

    void setTipe(string tipe)
    {
        this->tipe = tipe;
    }

    int getKapasitasGB()
    {
        return this->kapasitasGB;
    }

    string getTipe()
    {
        return this->tipe;
    }

    ~Penyimpanan()
    {
    }
};
