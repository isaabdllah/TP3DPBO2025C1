from Komponen import Komponen

class Motherboard(Komponen):
    def __init__(self, merk, nama, socket, chipset, jumlahSlotRam):
        super().__init__(merk, nama)
        self.socket = socket
        self.chipset = chipset
        self.jumlahSlotRam = jumlahSlotRam
        
    def set_socket(self, socket):
        self._socket = socket
        
    def get_socket(self):
        return self._socket
    
    def set_chipset(self, chipset):
        self._chipset = chipset
        
    def get_chipset(self):
        return self._chipset
    
    def set_jumlahSlotRam(self, jumlahSlotRam):
        self._jumlahSlotRam = jumlahSlotRam
        
    def get_jumlahSlotRam(self):
        return self._jumlahSlotRam
