public class Periferal extends Komponen {
    private String koneksi;

    public Periferal(String merk, String nama, String koneksi) {
        super(merk, nama);
        this.koneksi = koneksi;
    }

    public void setKoneksi(String koneksi) {
        this.koneksi = koneksi;
    }

    public String getKoneksi() {
        return koneksi;
    }
}