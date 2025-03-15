import java.util.List;


public class Komputer 
{
    private String nama;
    private Cpu cpu;
    private Gpu gpu;
    private Ram ram;
    private PSU psu;
    private Motherboard motherboard;
    private Penyimpanan penyimpanan;
    private SistemOperasi sistemOperasi;
    private Pendingin pendingin;
    private List<Periferal> periferalList;

    public Komputer(String nama, Cpu cpu, Gpu gpu, Ram ram, PSU psu, Motherboard motherboard, Penyimpanan penyimpanan, SistemOperasi sistemOperasi, Pendingin pendingin, List<Periferal> periferalList) {
        this.nama = nama;
        this.cpu = cpu;
        this.gpu = gpu;
        this.ram = ram;
        this.psu = psu;
        this.motherboard = motherboard;
        this.penyimpanan = penyimpanan;
        this.sistemOperasi = sistemOperasi;
        this.pendingin = pendingin;
        this.periferalList = periferalList;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return nama;
    }

    public void setCpu(Cpu cpu) {
        this.cpu = cpu;
    }

    public Cpu getCpu() {
        return cpu;
    }

    public void setGpu(Gpu gpu) {
        this.gpu = gpu;
    }

    public Gpu getGpu() {
        return gpu;
    }

    public void setRam(Ram ram) {
        this.ram = ram;
    }

    public Ram getRam() {
        return ram;
    }

    public void setPsu(PSU psu) {
        this.psu = psu;
    }

    public PSU getPsu() {
        return psu;
    }

    public void setMotherboard(Motherboard motherboard) {
        this.motherboard = motherboard;
    }

    public Motherboard getMotherboard() {
        return motherboard;
    }

    public void setPenyimpanan(Penyimpanan penyimpanan) {
        this.penyimpanan = penyimpanan;
    }

    public Penyimpanan getPenyimpanan() {
        return penyimpanan;
    }

    public void setSistemOperasi(SistemOperasi sistemOperasi) {
        this.sistemOperasi = sistemOperasi;
    }

    public SistemOperasi getSistemOperasi() {
        return sistemOperasi;
    }

    public void setPendingin(Pendingin pendingin) {
        this.pendingin = pendingin;
    }

    public Pendingin getPendingin() {
        return pendingin;
    }

    public void setPeriferalList(List<Periferal> periferalList) {
        this.periferalList = periferalList;
    }

    public List<Periferal> getPeriferalList() {
        return periferalList;
    }

    public void tambahPeriferal(Periferal periferal) {
        periferalList.add(periferal);
    }

    public void hapusPeriferal(Periferal periferal) {
        periferalList.remove(periferal);
    }

    public void tampilkanSpesifikasi() {
        System.out.println("Nama Komputer: " + nama);
        System.out.println("Spesifikasi Komputer:");
        System.out.println("CPU: " + cpu.getNama() + " (" + cpu.getJumlahCore() + " Core, " + cpu.getKecepatanGHz() + " GHz)");
        System.out.println("GPU: " + gpu.getNama() + " (" + gpu.getVramGB() + " GB VRAM)");
        System.out.println("PSU: " + psu.getNama() + " (" + psu.getDayaWatt() + " Watt, " + psu.getSertifikasi() + ")");
        System.out.println("RAM: " + ram.getNama() + " (" + ram.getKapasitasGB() + " GB, " + ram.getDdr() + ")");
        System.out.println("Motherboard: " + motherboard.getNama() + " (" + motherboard.getSocket() + ", " + motherboard.getChipset() + ", " + motherboard.getJumlahSlotRam() + " Slot RAM)");
        System.out.println("Penyimpanan: " + penyimpanan.getNama() + " (" + penyimpanan.getKapasitasGB() + " GB, " + penyimpanan.getTipe() + ")");
        System.out.println("Sistem Operasi: " + sistemOperasi.getNama() + " (" + sistemOperasi.getVersi() + ", " + sistemOperasi.getBerlisensi() + ")");
        System.out.println("Pendingin: " + pendingin.getNama() + " (" + pendingin.getMerk() + ", " + pendingin.getTipe() + ")");
        
        System.out.println("Periferal:");
        for (Periferal periferal : periferalList) {
            System.out.println(" - " + periferal.getNama() + " (" + periferal.getMerk() + ", " + periferal.getKoneksi() + ")");
        }
    }

}