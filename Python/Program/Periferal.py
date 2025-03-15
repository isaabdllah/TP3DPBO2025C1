from Komponen import Komponen

class Periferal(Komponen):
    def __init__(self, merk, nama, koneksi):
        super().__init__(merk, nama)
        self.koneksi = koneksi
        
    def set_koneksi(self, koneksi):
        self._koneksi = koneksi
        
    def get_koneksi(self):
        return self._koneksi