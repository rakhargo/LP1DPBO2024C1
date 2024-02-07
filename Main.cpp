#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main()
{
    int pilihMenu;
    vector<DPR> listDPR;

    do
    {
        cout << endl << "Pilih Menu: " << endl;
        cout << "1. Add" << endl;
        cout << "2. Edit" << endl;
        cout << "3. Hapus" << endl;
        cout << "4. View" << endl;
        cout << "Ketik 0 untuk mengakhiri program" << endl;

        cin >> pilihMenu;
        if (pilihMenu == 1)
        {
            // add
            int id; string nama, bidang, partai;

            cout << "ID: "; cin >> id;
            cout << "Nama: "; cin >> nama;
            cout << "Bidang: "; cin >> bidang;
            cout << "Partai: "; cin >> partai;

            DPR temp(id, nama, bidang, partai);
            
            listDPR.push_back(temp);
            cout << "Data berhasil ditambah" << endl;
        }
        else if (pilihMenu == 2)
        {
            // edit
            int stop = 0;
            do
            {
                int id;
                cout << "ID yang ingin diedit: "; cin >> id;
                int i;
                for (i = 0; i < listDPR.size() && stop == 0; i++)
                {
                    if (id == listDPR[i].getId())
                    {
                        stop = 1;
                    }
                }

                if (stop == 1)
                {
                    cout << "Ditemukan ID " << id << endl;

                    cout << "Mengubah data" << endl;

                    int id; string nama, bidang, partai;
                    cout << "ID: "; cin >> id;          listDPR[i - 1].setId(id);
                    cout << "Nama: "; cin >> nama;      listDPR[i - 1].setNama(nama);
                    cout << "Bidang: "; cin >> bidang;  listDPR[i - 1].setBidang(bidang);
                    cout << "Partai: "; cin >> partai;  listDPR[i - 1].setPartai(partai);
                    cout << "Data berhasil diubah" << endl;
                }
                else
                {
                    cout << "Tidak ada data dengan ID yang dimaksud" << endl;
                }
                
            } while (stop == 0);
            
        }
        else if (pilihMenu == 3)
        {
            // del
            int stop = 0;
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

                if (stop == 1)
                {
                    cout << "Ditemukan ID " << id << endl;
                    listDPR.erase(listDPR.begin() + i);
                    cout << "Data berhasil dihapus" << endl;
                }
                else
                {
                    cout << "Tidak ada data dengan ID yang dimaksud" << endl;
                }
                
            } while (stop == 0);
        }
        else if (pilihMenu == 4)
        {
            // view
            if (listDPR.size() == 0)
            {
                cout << "Data kosong." << endl;
            }
            
            for (int i = 0; i < listDPR.size(); i++)
            {
                cout << i + 1 << ". " << listDPR[i].getId() << ' ' << listDPR[i].getNama() << ' ' << listDPR[i].getBidang() << ' ' << listDPR[i].getPartai() << endl;
            }
        }
        
    } while (pilihMenu != 0);
    
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}