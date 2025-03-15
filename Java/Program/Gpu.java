public class Gpu extends Komponen {
    private int vramGB;
    private String chipset;

    public Gpu(String merk, String nama, int vramGB, String chipset) {
        super(merk, nama);
        this.vramGB = vramGB;
        this.chipset = chipset;
    }

    public void setVramGB(int vramGB) {
        this.vramGB = vramGB;
    }

    public int getVramGB() {
        return vramGB;
    }

    public void setChipset(String chipset) {
        this.chipset = chipset;
    }

    public String getChipset() {
        return chipset;
    }
}