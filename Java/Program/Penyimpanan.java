public class Penyimpanan extends Komponen {
    private int kapasitasGB;
    private String tipe;

    public Penyimpanan(String merk, String nama, int kapasitasGB, String tipe) {
        super(merk, nama);
        this.kapasitasGB = kapasitasGB;
        this.tipe = tipe;
    }

    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }

    public int getKapasitasGB() {
        return kapasitasGB;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public String getTipe() {
        return tipe;
    }
}