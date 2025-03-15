class SistemOperasi:
    def __init__(self, nama, versi, berlisensi):
        self.nama = nama
        self.versi = versi
        self.berlisensi = berlisensi  
        
    def set_nama(self, nama):
        self._nama = nama
        
    def get_nama(self):
        return self._nama
    
    def set_versi(self, versi):
        self._versi = versi
        
    def get_versi(self):
        return self._versi
    
    def set_berlisensi(self, berlisensi):
        self._berlisensi = berlisensi
        
    def get_berlisensi(self):
        return self._berlisensi
        