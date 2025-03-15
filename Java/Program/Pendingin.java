public class Pendingin extends Komponen {
    private String tipe;
    private int kecepatanRPM;

    public Pendingin(String merk, String nama, String tipe, int kecepatanRPM) {
        super(merk, nama);
        this.tipe = tipe;
        this.kecepatanRPM = kecepatanRPM;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }

    public String getTipe() {
        return tipe;
    }

    public void setKecepatanRPM(int kecepatanRPM) {
        this.kecepatanRPM = kecepatanRPM;
    }

    public int getKecepatanRPM() {
        return kecepatanRPM;
    }
}