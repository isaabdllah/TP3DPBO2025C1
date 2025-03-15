#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>

using namespace std;

class Periferal : public Komponen
{
private:
    string koneksi;

public:
    Periferal()
    {
    }

    Periferal(string merk, string nama, string koneksi) : Komponen(merk, nama)
    {
        this->koneksi = koneksi;
    }

    void setKoneksi(string koneksi)
    {
        this->koneksi = koneksi;
    }

    string getKoneksi()
    {
        return this->koneksi;
    }

    ~Periferal()
    {
    }
};
