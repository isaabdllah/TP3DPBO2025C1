#pragma once
#include "Periferal.cpp"

class Mouse : public Periferal
{
private:
    int dpi;
    string tipeKoneksi; // USB, Bluetooth, Wireless

public:
    Mouse()
    {
    }

    Mouse(string merk, string nama, string koneksi, int dpi, string tipeKoneksi)
        : Periferal(merk, nama, koneksi)
    {
        this->dpi = dpi;
        this->tipeKoneksi = tipeKoneksi;
    }

    void setDpi(int dpi)
    {
        this->dpi = dpi;
    }

    void setTipeKoneksi(string tipeKoneksi)
    {
        this->tipeKoneksi = tipeKoneksi;
    }

    int getDpi()
    {
        return this->dpi;
    }

    string getTipeKoneksi()
    {
        return this->tipeKoneksi;
    }

    ~Mouse()
    {
    }
};
