from Periferal import Periferal

class Speaker(Periferal):
    def __init__(self, merk, nama, koneksi, dayaWatt):
        super().__init__(merk, nama, koneksi)
        self.dayaWatt = dayaWatt
        
    def setDayaWatt(self, dayaWatt):
        self.dayaWatt = dayaWatt
        
    def getDayaWatt(self):
        return self.dayaWatt
    
    