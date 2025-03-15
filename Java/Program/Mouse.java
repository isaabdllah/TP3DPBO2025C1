public class Mouse extends Periferal {
    private String tipe;
    private int dpi;
    private String tipeKoneksi;

    public Mouse(String merk, String nama, String koneksi, String tipe, int dpi, String tipeKoneksi) {
        super(merk, nama, koneksi);
        this.tipe = tipe;
        this.dpi = dpi;
        this.tipeKoneksi = tipeKoneksi;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public String getTipe() {
        return this.tipe;
    }

    public void setDpi(int dpi) {
        this.dpi = dpi;
    }

    public int getDpi() {
        return this.dpi;
    }

    public void setTipeKoneksi(String tipeKoneksi) {
        this.tipeKoneksi = tipeKoneksi;
    }

    public String getTipeKoneksi() {
        return this.tipeKoneksi;
    }
}