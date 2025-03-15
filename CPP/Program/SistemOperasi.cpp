#pragma once
#include <iostream>
#include <string>

using namespace std;

class SistemOperasi
{
private:
    string nama;
    string versi;
    string berlisensi;

public:
    SistemOperasi()
    {
    }

    SistemOperasi(string nama, string versi, string berlisensi)
    {
        this->nama = nama;
        this->versi = versi;
        this->berlisensi = berlisensi;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setVersi(string versi)
    {
        this->versi = versi;
    }

    void setBerlisensi(bool berlisensi)
    {
        this->berlisensi = berlisensi;
    }

    string getNama()
    {
        return this->nama;
    }

    string getVersi()
    {
        return this->versi;
    }

    string getBerlisensi()
    {
        return this->berlisensi;
    }

    ~SistemOperasi()
    {
    }
};
