public class SistemOperasi {
    private String nama;
    private String versi;
    private String berlisensi;

    public SistemOperasi(String nama, String versi, String berlisensi) {
        this.nama = nama;
        this.versi = versi;
        this.berlisensi = berlisensi;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return nama;
    }

    public void setVersi(String versi) {
        this.versi = versi;
    }

    public String getVersi() {
        return versi;
    }

    public void setBerlisensi(String berlisensi) {
        this.berlisensi = berlisensi;
    }
    
    public String getBerlisensi() {
        return berlisensi;
    }
}