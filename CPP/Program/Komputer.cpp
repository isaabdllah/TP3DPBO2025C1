#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Cpu.cpp"
#include "Gpu.cpp"
#include "PSU.cpp"
#include "Ram.cpp"
#include "Motherboard.cpp"
#include "Penyimpanan.cpp"
#include "SistemOperasi.cpp"
#include "Pendingin.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
#include "Monitor.cpp"
#include "Speaker.cpp"

using namespace std;

class Komputer
{
private:
    string nama;
    Cpu cpu;
    Gpu gpu;
    Psu psu;
    Ram ram;
    Motherboard motherboard;
    Penyimpanan penyimpanan;
    SistemOperasi os;
    Pendingin pendingin;
    vector<Periferal *> periferal;

public:
    Komputer()
    {
    }

    Komputer(Cpu cpu, Gpu gpu, Psu psu, Ram ram, Motherboard motherboard, Penyimpanan penyimpanan, SistemOperasi os, Pendingin pendingin, vector<Periferal *> periferalList)
    {
        this->cpu = cpu;
        this->gpu = gpu;
        this->psu = psu;
        this->ram = ram;
        this->motherboard = motherboard;
        this->penyimpanan = penyimpanan;
        this->os = os;
        this->pendingin = pendingin;
        this->periferal = periferalList;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setPeriferal(Periferal *periferal)
    {
        this->periferal.push_back(periferal);
    }

    string getNama()
    {
        return this->nama;
    }

    Cpu getCpu()
    {
        return this->cpu;
    }

    Gpu getGpu()
    {
        return this->gpu;
    }

    Psu getPsu()
    {
        return this->psu;
    }

    Ram getRam()
    {
        return this->ram;
    }

    Motherboard getMotherboard()
    {
        return this->motherboard;
    }

    Penyimpanan getPenyimpanan()
    {
        return this->penyimpanan;
    }

    SistemOperasi getOs()
    {
        return this->os;
    }

    Pendingin getPendingin()
    {
        return this->pendingin;
    }

    vector<Periferal *> getPeriferal()
    {
        return this->periferal;
    }

    void tambahPeriferal(Periferal *periferal)
    {
        this->periferal.push_back(periferal);
    }

    void tampilkanSpesifikasi()
    {
        cout << "Nama Komputer: " << this->nama << endl;
        cout << "Spesifikasi Komputer: " << endl;
        cout << "CPU: " << this->cpu.getNama() << " (" << this->cpu.getJumlahCore() << " Core, " << this->cpu.getKecepatanGHz() << " GHz)" << endl;
        cout << "GPU: " << this->gpu.getNama() << " (" << this->gpu.getVramGB() << " GB VRAM)" << endl;
        cout << "PSU: " << this->psu.getNama() << " (" << this->psu.getDayaWatt() << " Watt, " << this->psu.getSertifikasi() << ")" << endl;
        cout << "RAM: " << this->ram.getNama() << " (" << this->ram.getKapasitasGB() << " GB, " << this->ram.getDdr() << ")" << endl;
        cout << "Motherboard: " << this->motherboard.getNama() << " (" << this->motherboard.getSocket() << ", " << this->motherboard.getChipset() << ", " << this->motherboard.getJumlahSlotRam() << " Slot RAM)" << endl;
        cout << "Penyimpanan: " << this->penyimpanan.getNama() << " (" << this->penyimpanan.getKapasitasGB() << " GB, " << this->penyimpanan.getTipe() << ")" << endl;
        cout << "Sistem Operasi: " << this->os.getNama() << " (" << this->os.getVersi() << ", " << this->os.getBerlisensi() << ")" << endl;
        cout << "Pendingin: " << this->pendingin.getNama() << " (" << this->pendingin.getTipe() << ", " << this->pendingin.getKecepatanRPM() << " RPM)" << endl;
        cout << "Periferal: " << endl;
        for (int i = 0; i < this->periferal.size(); i++)
        {
            cout << " - " << this->periferal[i]->getNama() << " (" << this->periferal[i]->getMerk() << ", " << this->periferal[i]->getKoneksi() << ")" << endl;
        }
    }

    ~Komputer()
    {
    }
};