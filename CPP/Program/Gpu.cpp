#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Gpu : public Komponen
{
private:
    int vramGB;
    string chipset;

public:
    Gpu()
    {
    }

    Gpu(int vramGB, string chipset, string merk, string nama) : Komponen(merk, nama)
    {
        this->vramGB = vramGB;
        this->chipset = chipset;
    }

    void setVramGB(int vramGB)
    {
        this->vramGB = vramGB;
    }

    void setChipset(string chipset)
    {
        this->chipset = chipset;
    }

    int getVramGB()
    {
        return this->vramGB;
    }

    string getChipset()
    {
        return this->chipset;
    }

    ~Gpu()
    {
    }
};
