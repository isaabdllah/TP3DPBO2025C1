from Periferal import Periferal

class Monitor(Periferal):
    def __init__(self, merk, nama, koneksi, ukuranInci, refreshRate):
        super().__init__(merk, nama, koneksi)
        self.ukuranInci = ukuranInci
        self.refreshRate = refreshRate
        
    def setUkuranInci(self, ukuranInci):
        self.ukuranInci = ukuranInci
        
    def getUkuranInci(self):
        return self.ukuranInci
    
    def setRefreshRate(self, refreshRate):
        self.refreshRate = refreshRate
        
    def getRefreshRate(self):
        return self.refreshRate
    