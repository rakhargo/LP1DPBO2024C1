/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 1 dalam mata
 kuliah Struktur data
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
class DPR
{ 
    private int id; // untuk id anggota dpr
    private String nama; // untuk nama anggota dpr
    private String bidang; // untuk bidang anggota dpr
    private String partai; // untuk partai anggota dpr
    
    DPR() // konstruktor kosong
    {

    }
    
    DPR(int id, String nama, String bidang, String partai) // konstruktor parameter
    {
        this.id = id;
        this.nama = nama;
        this.bidang = bidang;
        this.partai = partai;
    }

    void setId(int id) // mengset id anggota dpr 
    {
        this.id = id;
    }
    
    void setNama(String nama) // mengset nama anggota dpr
    {
        this.nama = nama;
    }
    
    void setBidang(String bidang) // mengset bidang anggota dpr
    {
        this.bidang = bidang;
    }
    
    void setPartai(String partai) // mengset partai anggota dpr
    {
        this.partai = partai;
    }

    int getId() // mendapatkan id anggota dpr
    {
        return this.id; 
    }

    String getNama() // mendapatkan nama anggota dpr
    {
        return this.nama; 
    }

    String getBidang() // mendapatkan bidang anggota dpr
    {
        return this.bidang; 
    }

    String getPartai() // mendapatkan partai anggota dpr
    {
        return this.partai; 
    }

}