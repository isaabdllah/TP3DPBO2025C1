from Komponen import Komponen
from Cpu import Cpu
from Gpu import Gpu
from Ram import Ram
from PSU import Psu
from Motherboard import Motherboard
from Penyimpanan import Penyimpanan
from SistemOperasi import SistemOperasi

class Komputer:
    def __init__(self, namaKomputer, cpu=None, gpu=None, ram=None, psu=None, motherboard=None, 
                 penyimpanan=None, sistemOperasi=None, pendingin=None, periferalList=None):
        self._namaKomputer = namaKomputer
        self._cpu = cpu if cpu else Cpu()
        self._gpu = gpu if gpu else Gpu()
        self._ram = ram if ram else Ram()
        self._psu = psu if psu else Psu()
        self._motherboard = motherboard if motherboard else Motherboard()
        self._penyimpanan = penyimpanan if penyimpanan else Penyimpanan()
        self._sistemOperasi = sistemOperasi if sistemOperasi else SistemOperasi()
        self._pendingin = pendingin if pendingin else Komponen()
        self._periferal = periferalList if periferalList else []
        
    def set_namaKomputer(self, namaKomputer):
        self._namaKomputer = namaKomputer
        
    def get_namaKomputer(self):
        return self._namaKomputer
    
    def set_periferal(self, periferal):
        self._periferal.append(periferal)
        
    def get_cpu(self):
        return self._cpu
    
    def get_gpu(self):
        return self._gpu
    
    def get_psu(self):
        return self._psu
    
    def get_ram(self):
        return self._ram
    
    def get_motherboard(self):
        return self._motherboard
    
    def get_penyimpanan(self):
        return self._penyimpanan
    
    def get_sistemOperasi(self):
        return self._sistemOperasi
    
    def get_pendingin(self):
        return self._pendingin
    
    def get_periferal(self):
        return self._periferal
    
    def tampilkanSpesifikasi(self):
        print(f"Nama Komputer: {self._namaKomputer}")
        print("Spesifikasi Komputer:")
        print(f"CPU: {self._cpu.nama} ({self._cpu.jumlahCore} Core, {self._cpu.kecepatanGHz} GHz)")
        print(f"GPU: {self._gpu.nama} ({self._gpu.vramGB} GB VRAM)")
        print(f"PSU: {self._psu.nama} ({self._psu.dayaWatt} Watt, {self._psu.sertifikasi})")
        print(f"RAM: {self._ram.nama} ({self._ram.kapasitasGB} GB, {self._ram.ddr})")
        print(f"Motherboard: {self._motherboard.nama} ({self._motherboard.socket}, {self._motherboard.chipset}, {self._motherboard.jumlahSlotRam} Slot RAM)")
        print(f"Penyimpanan: {self._penyimpanan.nama} ({self._penyimpanan.kapasitasGB} GB, {self._penyimpanan.tipe})")
        print(f"Sistem Operasi: {self._sistemOperasi.nama} ({self._sistemOperasi.versi}, {'Licensed' if self._sistemOperasi.berlisensi else 'Unlicensed'})")
        print(f"Pendingin: {self._pendingin.nama} ({self._pendingin.merk}, {self._pendingin.tipe})")
        
        print("Periferal:")
        for periferal in self._periferal:
            print(f" - {periferal.nama} ({periferal.merk}, {periferal.koneksi})")

            
            