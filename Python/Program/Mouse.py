from Periferal import Periferal

class Mouse(Periferal):
    def __init__(self, merk, nama, koneksi, tipe, dpi, tipe_koneksi):
        super().__init__(merk, nama, koneksi)
        self.tipe = tipe
        self.dpi = dpi
        self.tipe_koneksi = tipe_koneksi
        
    def setTipe(self, tipe):
        self.tipe = tipe
        
    def getTipe(self):
        return self.tipe

    def setDpi(self, dpi):
        self.dpi = dpi

    def getDpi(self):
        return self.dpi

    def setTipeKoneksi(self, tipe_koneksi):
        self.tipe_koneksi = tipe_koneksi

    def getTipeKoneksi(self):
        return self.tipe_koneksi