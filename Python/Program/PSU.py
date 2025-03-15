from Komponen import Komponen

class Psu(Komponen):
    def __init__(self, merk, nama, dayaWatt, sertifikasi):
        super().__init__(merk, nama)
        self.dayaWatt = dayaWatt
        self.sertifikasi = sertifikasi
        
    def set_dayaWatt(self, dayaWatt):
        self._dayaWatt = dayaWatt
        
    def get_dayaWatt(self):
        return self._dayaWatt
    
    def set_sertifikasi(self, sertifikasi):
        self._sertifikasi = sertifikasi
        
    def get_sertifikasi(self):
        return self._sertifikasi
