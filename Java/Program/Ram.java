public class Ram extends Komponen {
    private int kapasitasGB;
    private String ddr;

    public Ram(String merk, String nama, int kapasitasGB, String ddr) {
        super(merk, nama);
        this.kapasitasGB = kapasitasGB;
        this.ddr = ddr;
    }

    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }

    public int getKapasitasGB() {
        return kapasitasGB;
    }

    public void setDdr(String ddr) {
        this.ddr = ddr;
    }

    public String getDdr() {
        return ddr;
    }
}