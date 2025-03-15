from Komputer import Komputer
from Cpu import Cpu
from Gpu import Gpu
from Ram import Ram
from PSU import Psu
from Motherboard import Motherboard
from Penyimpanan import Penyimpanan
from SistemOperasi import SistemOperasi
from Keyboard import Keyboard
from Mouse import Mouse
from Monitor import Monitor
from Speaker import Speaker
from Pendingin import Pendingin

# Membuat objek komponen komputer
cpu = Cpu("Intel", "Core i7-12700K", 12, 3.6)
gpu = Gpu("NVIDIA", "RTX 3070", "8GB", "GDDR6")
ram = Ram("Corsair", "Vengeance", 16, "DDR4")
psu = Psu("Corsair", "RM750x", 750, "80+ Gold")
motherboard = Motherboard("ASUS", "ROG Strix Z690-E", "LGA 1700", "Z690", 4)
penyimpanan = Penyimpanan("Samsung", "970 EVO Plus", 1000, "SSD")
sistemOperasi = SistemOperasi("Windows", "10 Pro", "Original")
pendingin = Pendingin("Cooler Master", "Hyper 212", "Air Cooler", 2000)

# Membuat objek periferal
keyboard = Keyboard("Logitech", "G Pro", "Wired")
mouse = Mouse("Razer", "DeathAdder", "Wired", "Optical", 16000, "USB")
monitor = Monitor("LG", "UltraGear", "HDMI", 27, 144)
speaker = Speaker("Edifier", "R1280 DB", "Bluetooth", 42)

# Membuat objek komputer dengan periferal
komputer = Komputer("Isa's Gaming PC", cpu, gpu, ram, psu, motherboard, penyimpanan, sistemOperasi, pendingin, [keyboard, mouse, monitor, speaker])

# Menampilkan spesifikasi komputer
komputer.tampilkanSpesifikasi()
