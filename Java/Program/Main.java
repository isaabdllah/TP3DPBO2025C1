import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Membuat objek CPU
        Cpu cpu = new Cpu("AMD", "Ryzen 9 7950X", 16, 5.2);
        
        // Membuat objek GPU
        Gpu gpu = new Gpu("NVIDIA", "RTX 3070", 8, "GDDR6");
        
        // Membuat objek RAM
        Ram ram = new Ram("Corsair", "Vengeance", 64, "DDR5");
        
        // Membuat objek PSU
        PSU psu = new PSU("Corsair", "RM750x", 750, "80+ Gold");
        
        // Membuat objek Motherboard
        Motherboard motherboard = new Motherboard("ASUS", "ROG Strix Z690-E", "LGA 1700", "Z690", 4);
        
        // Membuat objek Penyimpanan
        Penyimpanan penyimpanan = new Penyimpanan("Samsung", "970 EVO Plus", 1000, "SSD");
        
        // Membuat objek Sistem Operasi
        SistemOperasi sistemOperasi = new SistemOperasi("Windows 11", "22H2", "Licensed");
        
        // Membuat objek Pendingin
        Pendingin pendingin = new Pendingin("Cooler Master", "Hyper 212", "Air Cooler", 2000);
        
        // Membuat daftar periferal
        List<Periferal> periferalList = new ArrayList<>();
        periferalList.add(new Periferal("Huntsman V2", "Razer", "USB"));
        periferalList.add(new Periferal("G Pro X Superlight", "Logitech", "USB"));
        periferalList.add(new Periferal("Odyssey G9", "Samsung", "HDMI/DisplayPort"));
        periferalList.add(new Periferal("Companion 50", "Bose", "USB"));
        
        // Membuat objek Komputer
        Komputer komputer = new Komputer("Isa's Gaming PC", cpu, gpu, ram, psu, motherboard, penyimpanan, sistemOperasi, pendingin, periferalList);
        
        // Menampilkan spesifikasi komputer
        komputer.tampilkanSpesifikasi();
    }
}