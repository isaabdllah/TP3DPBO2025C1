public class Motherboard extends Komponen 
{

    private String socket;
    private String chipset;
    private int jumlahSlotRam;

    public Motherboard(String merk, String nama, String socket, String chipset, int jumlahSlotRam) 
    {
        super(merk, nama);
        this.socket = socket;
        this.chipset = chipset;
        this.jumlahSlotRam = jumlahSlotRam;
    }

    public void setSocket(String socket) 
    {
        this.socket = socket;
    }

    public String getSocket() 
    {
        return socket;
    }

    public void setChipset(String chipset) 
    {
        this.chipset = chipset;
    }

    public String getChipset() 
    {
        return chipset;
    }

    public void setJumlahSlotRam(int jumlahSlotRam) 
    {
        this.jumlahSlotRam = jumlahSlotRam;
    }

    public int getJumlahSlotRam() 
    {
        return jumlahSlotRam;
    }
}
