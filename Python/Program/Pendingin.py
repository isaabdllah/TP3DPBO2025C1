from Komponen import Komponen

class Pendingin(Komponen):
    def __init__(self, merk, nama, tipe, kecepatanRPM):
        super().__init__(merk, nama)
        self.tipe = tipe
        self.kecepatanRPM = kecepatanRPM
        
    def set_tipe(self, tipe):
        self._tipe = tipe
        
    def get_tipe(self):
        return self._tipe
    
    def set_kecepatanRPM(self, kecepatanRPM):
        self._kecepatanRPM = kecepatanRPM
        
    def get_kecepatanRPM(self):
        return self._kecepatanRPM
