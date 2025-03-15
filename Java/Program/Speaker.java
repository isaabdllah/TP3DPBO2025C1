public class Speaker extends Periferal {
    private int dayaWatt;

    public Speaker(String merk, String nama, String koneksi, int dayaWatt) {
        super(merk, nama, koneksi);
        this.dayaWatt = dayaWatt;
    }

    public void setDayaWatt(int dayaWatt) {
        this.dayaWatt = dayaWatt;
    }

    public int getDayaWatt() {
        return dayaWatt;
    }
}