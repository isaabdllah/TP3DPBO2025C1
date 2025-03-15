public class Keyboard extends Periferal {
    private String tipeMekanikal;
    private String layout;

    public Keyboard(String merk, String nama, String koneksi)
    {
        super(merk, nama, koneksi);
        this.tipeMekanikal = "";
        this.layout = "";
    }

    public Keyboard(String merk, String nama, String koneksi, String tipeMekanikal, String layout) {
        super(merk, nama, koneksi);
        this.tipeMekanikal = tipeMekanikal;
        this.layout = layout;
    }

    public void setTipeMekanikal(String tipeMekanikal) {
        this.tipeMekanikal = tipeMekanikal;
    }

    public String getTipeMekanikal() {
        return this.tipeMekanikal;
    }

    public void setLayout(String layout) {
        this.layout = layout;
    }

    public String getLayout() {
        return this.layout;
    }
}