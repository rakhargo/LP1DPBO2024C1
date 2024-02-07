#include <iostream>
#include <string>

using namespace std;

class DPR
{
    private:
        int id;
        string nama;
        string namaBidang;
        string namaPartai;
    
    public:
        // konstruktor
        DPR()
        {
            this->id = 0;
            this->nama = "";
            this->namaBidang = "";
            this->namaPartai = "";
        }
        
        // konstruktor parameter
        DPR(int id, string nama, string namaBidang, string namaPartai)
        {
            this->id = id;
            this->nama = nama;
            this->namaBidang = namaBidang;
            this->namaPartai = namaPartai;
        }

        int getId()
        {
            return this->id; 
        }

        string getNama()
        {
            return this->nama; 
        }

        string getBidang()
        {
            return this->namaBidang; 
        }

        string getPartai()
        {
            return this->namaPartai; 
        }
        
        void setId(int id)
        {
            this->id = id;
        }
        
        void setNama(string nama)
        {
            this->nama = nama;
        }
        
        void setBidang(string bidang)
        {
            this->namaBidang = bidang;
        }
        
        void setPartai(string partai)
        {
            this->namaPartai = partai;
        }

        ~DPR()
        {

        }
    
};
