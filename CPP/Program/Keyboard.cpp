#pragma once
#include "Periferal.cpp"

class Keyboard : public Periferal
{
private:
    string tipeMekanikal; // Mechanical, Membrane
    string layout; // QWERTY, AZERTY, dll.

public:
    Keyboard()
    {
    }

    Keyboard(string merk, string nama, string koneksi, string tipeMekanikal, string layout)
        : Periferal(merk, nama, koneksi)
    {
        this->tipeMekanikal = tipeMekanikal;
        this->layout = layout;
    }

    void setTipeMekanikal(string tipeMekanikal)
    {
        this->tipeMekanikal = tipeMekanikal;
    }

    void setLayout(string layout)
    {
        this->layout = layout;
    }

    string getTipeMekanikal()
    {
        return this->tipeMekanikal;
    }

    string getLayout()
    {
        return this->layout;
    }

    ~Keyboard()
    {
    }
};
