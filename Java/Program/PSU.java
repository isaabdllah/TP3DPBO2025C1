public class PSU extends Komponen {
    private int dayaWatt;
    private String sertifikasi;

    public PSU(String merk, String nama, int dayaWatt, String sertifikasi) {
        super(merk, nama);
        this.dayaWatt = dayaWatt;
        this.sertifikasi = sertifikasi;
    }

    public void setDayaWatt(int dayaWatt) {
        this.dayaWatt = dayaWatt;
    }

    public int getDayaWatt() {
        return dayaWatt;
    }

    public void setSertifikasi(String sertifikasi) {
        this.sertifikasi = sertifikasi;
    }

    public String getSertifikasi() {
        return sertifikasi;
    }
}