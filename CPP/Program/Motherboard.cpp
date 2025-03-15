#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Motherboard : public Komponen
{
private:
    string socket;
    string chipset;
    int jumlahSlotRam;

public:
    Motherboard()
    {
    }

    Motherboard(string socket, string chipset, int jumlahSlotRam, string merk, string nama) : Komponen(merk, nama)
    {
        this->socket = socket;
        this->chipset = chipset;
        this->jumlahSlotRam = jumlahSlotRam;
    }

    void setSocket(string socket)
    {
        this->socket = socket;
    }

    void setChipset(string chipset)
    {
        this->chipset = chipset;
    }

    void setJumlahSlotRam(int jumlahSlotRam)
    {
        this->jumlahSlotRam = jumlahSlotRam;
    }

    string getSocket()
    {
        return this->socket;
    }

    string getChipset()
    {
        return this->chipset;
    }

    int getJumlahSlotRam()
    {
        return this->jumlahSlotRam;
    }

    ~Motherboard()
    {
    }
};
