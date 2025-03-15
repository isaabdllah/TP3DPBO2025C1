from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, merk, nama, kapasitasGB, ddr):
        super().__init__(merk, nama)
        self.kapasitasGB = kapasitasGB
        self.ddr = ddr
        
    def set_kapasitasGB(self, kapasitasGB):
        self._kapasitasGB = kapasitasGB
        
    def get_kapasitasGB(self):
        return self._kapasitasGB
    
    def set_ddr(self, ddr):
        self._ddr = ddr
        
    def get_ddr(self):
        return self._ddr