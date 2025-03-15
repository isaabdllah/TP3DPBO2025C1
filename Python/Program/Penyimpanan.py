from Komponen import Komponen

class Penyimpanan(Komponen):
    def __init__(self, merk, nama, kapasitasGB, tipe):
        super().__init__(merk, nama)
        self.kapasitasGB = kapasitasGB
        self.tipe = tipe
        
    def set_kapasitasGB(self, kapasitasGB):
        self._kapasitasGB = kapasitasGB
        
    def get_kapasitasGB(self):
        return self._kapasitasGB
    
    def set_tipe(self, tipe):
        self._tipe = tipe
        
    def get_tipe(self):
        return self._tipe