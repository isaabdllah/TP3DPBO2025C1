from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, merk, nama, jumlahCore, kecepatanGHz):
        super().__init__(merk, nama)
        self.jumlahCore = jumlahCore
        self.kecepatanGHz = kecepatanGHz
        
    def setJumlahCore(self, jumlahCore):
        self.jumlahCore = jumlahCore
        
    def getJumlahCore(self):
        return self.jumlahCore
    
    def setKecepatanGHz(self, kecepatanGHz):
        self.kecepatanGHz = kecepatanGHz
        
    def getKecepatanGHz(self):
        return self.kecepatanGHz
