class Komponen:
    def __init__(self, merk="", nama=""):
        self.merk = merk
        self.nama = nama

    def set_merk(self, merk):
        self._merk = merk

    def set_nama(self, nama):
        self._nama = nama

    def get_merk(self):
        return self._merk

    def get_nama(self):
        return self._nama