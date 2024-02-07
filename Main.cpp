#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main()
{
    int pilihMenu; // variabel pemilih menu untuk CRUD
    vector<DPR> listDPR; // membuat struktur data vector untuk list anggota DPR

    do // perulangan utama program untuk menu
    {
        // pemilihan menu
        cout << endl << "Pilih Menu: " << endl;
        cout << "1. Add" << endl;
        cout << "2. Edit" << endl;
        cout << "3. Hapus" << endl;
        cout << "4. View" << endl;
        cout << "Ketik 0 untuk mengakhiri program" << endl;

        cin >> pilihMenu; // meminta masukan nomor menu
        if (pilihMenu == 1) // jika angka 1
        {
            // maka melakukan tambah data anggota
            int id; string nama, bidang, partai; // deklarasi variabel yang digunakan sebagai temp untuk setiap atribut anggota dpr 

            cout << "ID: "; cin >> id; // meminta masukan id
            cout << "Nama: "; cin >> nama; // meminta masukan nama
            cout << "Bidang: "; cin >> bidang; // meminta masukan bidang
            cout << "Partai: "; cin >> partai; // meminta masukan partai

            DPR temp(id, nama, bidang, partai); // instansiasi objek langsung menggunakan konstruktor parameter
            
            listDPR.push_back(temp); // memasukkan ke vector
            cout << "Data berhasil ditambah" << endl;
        }
        else if (pilihMenu == 2) // jika angka 2
        {
            // maka melakukan edit data anggota
            int stop = 0; // variabel untuk stop dalam do while yang dimana digunakan untuk error handling saja
            do // perulangan untuk error handling jika memilih id yang tidak ada di data
            {
                int id; // id yang ingin dicari
                cout << "ID yang ingin diedit: "; cin >> id; // meminta masukan untuk id yang ingin diedit
                int i; // indeks vector untuk mencari yang ketemu
                for (i = 0; i < listDPR.size() && stop == 0; i++) // sequential search
                {
                    if (id == listDPR[i].getId()) // jika ketemu
                    {
                        stop = 1; // maka stop dan keluar perulangan sehingga indeks tersimpan
                    }
                }

                if (stop == 1) // jika id ketemu
                {
                    cout << "Ditemukan ID " << id << endl;

                    cout << "Mengubah data" << endl;

                    int id; string nama, bidang, partai; // deklarasi variabel yang digunakan sebagai temp untuk setiap atribut anggota dpr 
                    cout << "ID: "; cin >> id;          listDPR[i - 1].setId(id); // melakukan edit setiap atribut data
                    cout << "Nama: "; cin >> nama;      listDPR[i - 1].setNama(nama);
                    cout << "Bidang: "; cin >> bidang;  listDPR[i - 1].setBidang(bidang);
                    cout << "Partai: "; cin >> partai;  listDPR[i - 1].setPartai(partai);
                    cout << "Data berhasil diubah" << endl;
                }
                else // error handling
                {
                    cout << "Tidak ada data dengan ID yang dimaksud" << endl;
                }
                
            } while (stop == 0); // selama tidak ketemu
            
        }
        else if (pilihMenu == 3) // jika pilih angka 3
        {
            // maka melakukan penghapusan data anggota
            int stop = 0; // sama seperti edit tadi
            do
            {
                int id;
                cout << "ID yang ingin dihapus: "; cin >> id;
                int i;
                for (i = 0; i < listDPR.size() && stop == 0; i++)
                {
                    if (id == listDPR[i].getId())
                    {
                        stop = 1;
                    }
                }

                if (stop == 1) // hanya beda disini
                {
                    cout << "Ditemukan ID " << id << endl; // menemukan id yang dimaksud
                    listDPR.erase(listDPR.begin() + i); // melakukan penghapusan id di indeks tersebut
                    cout << "Data berhasil dihapus" << endl;
                }
                else // error handling
                {
                    cout << "Tidak ada data dengan ID yang dimaksud" << endl;
                }
                
            } while (stop == 0); // selama belum ketemu
        }
        else if (pilihMenu == 4) // jika pilih angka 4
        {
            // melihat setiap data anggota dpr
            if (listDPR.size() == 0) // jika vector size nya 0
            {
                cout << "Data kosong." << endl;
            }
            
            for (int i = 0; i < listDPR.size(); i++) // melakukan perulangan untuk print all
            {
                cout << i + 1 << ". " << listDPR[i].getId() << ' ' << listDPR[i].getNama() << ' ' << listDPR[i].getBidang() << ' ' << listDPR[i].getPartai() << endl;
            }
        }
        
    } while (pilihMenu != 0); // selama tidak pilih 0
    
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}