public class Cpu extends Komponen 
{
    private int jumlahCore;
    private double kecepatanGHz;

    public Cpu(String merk, String nama, int jumlahCore, double kecepatanGHz) 
    {
        super(merk, nama);
        this.jumlahCore = jumlahCore;
        this.kecepatanGHz = kecepatanGHz;
    }

    public void setJumlahCore(int jumlahCore) 
    {
        this.jumlahCore = jumlahCore;
    }

    public int getJumlahCore() 
    {
        return jumlahCore;
    }

    public void setKecepatanGHz(double kecepatanGHz) 
    {
        this.kecepatanGHz = kecepatanGHz;
    }

    public double getKecepatanGHz() 
    {
        return kecepatanGHz;
    }
}