public class Monitor extends Periferal 
{
    private int ukuranInci;
    private int refreshRate;

    public Monitor(String merk, String nama, String koneksi, int ukuranInci, int refreshRate) 
    {
        super(merk, nama, koneksi);
        this.ukuranInci = ukuranInci;
        this.refreshRate = refreshRate;
    }

    public void setUkuranInci(int ukuranInci) 
    {
        this.ukuranInci = ukuranInci;
    }

    public int getUkuranInci() 
    {
        return ukuranInci;
    }

    public void setRefreshRate(int refreshRate) 
    {
        this.refreshRate = refreshRate;
    }

    public int getRefreshRate() 
    {
        return refreshRate;
    }
}