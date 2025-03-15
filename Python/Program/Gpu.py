from Komponen import Komponen

class Gpu(Komponen):
    def __init__(self, merk, nama, vramGB, chipset):
        super().__init__(merk, nama)
        self.vramGB = vramGB
        self.chipset = chipset
        
    def setVramGB(self, vramGB):
        self.vramGB = vramGB
        
    def getVramGB(self):
        return self.vramGB
    
    def setChipset(self, chipset):
        self.chipset = chipset
        
    def getChipset(self):
        return self.chipset
    
