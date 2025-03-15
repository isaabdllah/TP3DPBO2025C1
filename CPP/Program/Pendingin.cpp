#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Pendingin : public Komponen
{
private:
    string tipe;
    int kecepatanRPM;

public:
    Pendingin()
    {
    }

    Pendingin(string tipe, int kecepatanRPM, string merk, string nama) : Komponen(merk, nama)
    {
        this->tipe = tipe;
        this->kecepatanRPM = kecepatanRPM;
    }

    void setTipe(string tipe)
    {
        this->tipe = tipe;
    }

    void setKecepatanRPM(int kecepatanRPM)
    {
        this->kecepatanRPM = kecepatanRPM;
    }

    string getTipe()
    {
        return this->tipe;
    }

    int getKecepatanRPM()
    {
        return this->kecepatanRPM;
    }

    ~Pendingin()
    {
    }
};
