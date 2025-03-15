#include <iostream>
#include <string>
#include <vector>
#include "Komputer.cpp"
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

int main()
{
    Cpu cpu(16, 5.2, "AMD", "Ryzen 9 7950X");
    Gpu gpu(24, "Nvidia RTX 4090", "Asus", "ROG Strix");
    Psu psu(1000, "80+ Platinum", "Corsair", "AX1000");
    Ram ram(64, "DDR5", "G.Skill", "Trident Z5 RGB");
    Motherboard motherboard("AM5", "X670E", 4, "Asus", "ROG Crosshair X670E Hero");
    Penyimpanan penyimpanan(2000, "NVMe SSD", "Samsung", "990 PRO");
    SistemOperasi os("Windows 11", "22H2", "Licensed");
    Pendingin pendingin("Liquid Cooler", 3600, "Corsair", "iCUE H150i Elite Capellix");

    // Vector untuk periferal
    vector<Periferal *> periferalList = {
        new Keyboard("Razer", "Huntsman V2", "USB", "Optical Mechanical", "QWERTY"),
        new Mouse("Logitech", "G Pro X Superlight", "USB", 25600, "Wireless"),
        new Monitor("Samsung", "Odyssey G9", "HDMI/DisplayPort", 49, 240),
        new Speaker("Bose", "Companion 50", "USB", 300)};

    // Buat objek komputer dengan seluruh periferal sekaligus
    Komputer komputer(cpu, gpu, psu, ram, motherboard, penyimpanan, os, pendingin, periferalList);

    komputer.setNama("Isa's Gaming PC");
    komputer.tampilkanSpesifikasi();

    // Hapus memori yang dialokasikan secara dinamis
    for (Periferal *p : periferalList)
    {
        delete p;
    }

    return 0;
}
