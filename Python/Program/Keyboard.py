from Periferal import Periferal

class Keyboard(Periferal):
    def __init__(self, merk="", nama="", koneksi="", tipeMekanikal="", layout=""):
        super().__init__(merk, nama, koneksi)
        self.tipeMekanikal = tipeMekanikal
        self.layout = layout
        
    def setTipeMekanikal(self, tipeMekanikal):
        self.tipeMekanikal = tipeMekanikal
        
    def getTipeMekanikal(self):
        return self.tipeMekanikal
    
    def setLayout(self, layout):
        self.layout = layout
        
    def getLayout(self):
        return self.layout
    
    
        