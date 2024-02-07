#include <iostream>
#include <string>

using namespace std;

class DPR // membuat class
{
    private: // atribut private
        int id; // untuk id anggota dpr
        string nama; // untuk nama anggota dpr
        string namaBidang; // untuk bidang anggota dpr
        string namaPartai; // untuk partai anggota dpr
    
    public:
        // konstruktor
        DPR()
        {
            // inisialisasi untuk atribut dpr
            this->id = 0;  
            this->nama = "";
            this->namaBidang = "";
            this->namaPartai = "";
        }
        
        // konstruktor parameter
        DPR(int id, string nama, string namaBidang, string namaPartai)
        {
            // mengisi nilai dari atribut menggunakan parameter yang ada
            this->id = id;
            this->nama = nama;
            this->namaBidang = namaBidang;
            this->namaPartai = namaPartai;
        }

        int getId() // mendapatkan id anggota dpr
        {
            return this->id; 
        }

        string getNama() // mendapatkan nama anggota dpr
        {
            return this->nama; 
        }

        string getBidang() // mendapatkan bidang anggota dpr
        {
            return this->namaBidang; 
        }

        string getPartai() // mendapatkan partai anggota dpr
        {
            return this->namaPartai; 
        }
        
        void setId(int id) // mengset id anggota dpr 
        {
            this->id = id;
        }
        
        void setNama(string nama) // mengset nama anggota dpr
        {
            this->nama = nama;
        }
        
        void setBidang(string bidang) // mengset bidang anggota dpr
        {
            this->namaBidang = bidang;
        }
        
        void setPartai(string partai) // mengset partai anggota dpr
        {
            this->namaPartai = partai;
        }

        ~DPR() // destruktor
        {

        }
    
};
