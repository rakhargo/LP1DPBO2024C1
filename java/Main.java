/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 1 dalam mata
 kuliah Struktur data
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
import java.util.ArrayList;
import java.util.Scanner;

class Main
{
    public static void main(String[] args) 
    {
        // variabel untuk kepentingan membuat tabel
        int maxID = 2;
        int maxNama = 4;
        int maxBidang = 6;
        int maxPartai = 6; 

        int pilihMenu; // pemilihan menu

        ArrayList<DPR> listDPR = new ArrayList<>(); // membuat arraylist

        Scanner sc = new Scanner(System.in); // untuk scan meminta masukan

        do // perulangan untuk menu
        {
            
            System.out.println("Pilih Menu: ");
            System.out.println("1. Add");
            System.out.println("2. Edit");
            System.out.println("3. Hapus");
            System.out.println("4. View");
            System.out.println("Ketik 0 untuk mengakhiri program");

            for (int i = 0; i < listDPR.size(); i++) // proses emncari length terpanjang di setiap atribut di setiap anggota 
            {
                String idStr = Integer.toString(listDPR.get(i).getId()); // untuk id
                if(idStr.length() > maxID)
                {
                    maxID = idStr.length();
                }

                if(listDPR.get(i).getNama().length() > maxNama) // untuk nama
                {
                    maxNama = listDPR.get(i).getNama().length();
                }

                if(listDPR.get(i).getBidang().length() > maxBidang) // untuk bidang
                {
                    maxBidang = listDPR.get(i).getBidang().length();
                }

                if(listDPR.get(i).getPartai().length() > maxPartai) // untuk partai
                {
                    maxPartai = listDPR.get(i).getPartai().length();
                }
            }

            pilihMenu = sc.nextInt(); // meminta masukan untuk menu

            if (pilihMenu == 1) // jika menu 1
            {
                int id; String nama, bidang, partai; // deklarasi variabel yang digunakan sebagai temp untuk setiap atribut anggota dpr 
                System.out.print("ID: "); id = sc.nextInt(); // meminta masukan untuk data baru
                System.out.print("Nama: "); nama = sc.next();
                System.out.print("Bidang: "); bidang = sc.next();
                System.out.print("Partai: "); partai = sc.next();
                
                DPR temp = new DPR(id, nama, bidang, partai); // temp untuk menampung data baru
                listDPR.add(temp); // memasukkan ke list
                
                System.out.println("Data berhasil ditambah ");
            }
            else if(pilihMenu == 2) // jika menu 2
            {
                // maka melakukan edit data anggota
                int stop = 0; // variabel untuk stop dalam do while yang dimana digunakan untuk error handling saja
                do // perulangan untuk error handling jika memilih id yang tidak ada di data
                {
                    int id; String nama, bidang, partai; // deklarasi variabel yang digunakan sebagai temp untuk setiap atribut anggota dpr 
                    System.out.print("ID yang ingin diedit: "); id = sc.nextInt(); // meminta masukan untuk id yang ingin diedit
                    int i; // indeks list untuk mencari yang ketemu
                    for (i = 0; i < listDPR.size() && stop == 0; i++) // sequential search
                    {
                        if (id == listDPR.get(i).getId()) // jika ketemu
                        {
                            stop = 1; // maka stop dan keluar perulangan sehingga indeks tersimpan
                        }
                    }

                    if (stop == 1) // jika id ketemu
                    {
                        System.out.println("Ditemukan ID " + id);

                        System.out.println("Mengubah data");

                        System.out.print("ID: "); id = sc.nextInt();          listDPR.get(i - 1).setId(id); // melakukan edit setiap atribut data
                        System.out.print("Nama: "); nama = sc.next();         listDPR.get(i - 1).setNama(nama);
                        System.out.print("Bidang: "); bidang = sc.next();     listDPR.get(i - 1).setBidang(bidang);
                        System.out.print("Partai: "); partai = sc.next();     listDPR.get(i - 1).setPartai(partai);
                        System.out.println("Data berhasil diubah");
                    }
                    else // error handling
                    {
                        System.out.println("Tidak ada data dengan ID yang dimaksud");
                    }
                    
                } while (stop == 0); // selama tidak ketemu
            }
            else if(pilihMenu == 3)
            {
                // maka melakukan hapus data anggota
                int stop = 0; // variabel untuk stop dalam do while yang dimana digunakan untuk error handling saja
                do // perulangan untuk error handling jika memilih id yang tidak ada di data
                {
                    int id; // deklarasi variabel yang digunakan sebagai temp untuk setiap atribut anggota dpr 
                    System.out.print("ID yang ingin dihapus: "); id = sc.nextInt(); // meminta masukan untuk id yang ingin diedit
                    int i; // indeks list untuk mencari yang ketemu
                    for (i = 0; i < listDPR.size() && stop == 0; i++) // sequential search
                    {
                        if (id == listDPR.get(i).getId()) // jika ketemu
                        {
                            stop = 1; // maka stop dan keluar perulangan sehingga indeks tersimpan
                        }
                    }
    
                    if (stop == 1) // jika id ketemu
                    {
                        System.out.println("Ditemukan ID " + id);
                        listDPR.remove(i - 1);
                        System.out.println("Data berhasil dihapus");
                    }
                    else // error handling
                    {
                        System.out.println("Tidak ada data dengan ID yang dimaksud");
                    }
                    
                } while (stop == 0); // selama tidak ketemu
            }
            else if(pilihMenu == 4) // jika pilih 4
            {
                // membuat kerangka tabel
                System.out.print("+");
                for (int i = 0; i < maxID; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxNama; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxBidang; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxPartai; i++) System.out.print(" ");
                
                System.out.println("+");
                
                
                System.out.print("|ID");
                for (int i = 0; i < maxID - 2; i++) System.out.print(" ");

                System.out.print("|Nama");
                for (int i = 0; i < maxNama - 4; i++) System.out.print(" ");

                System.out.print("|Bidang");
                for (int i = 0; i < maxBidang - 6; i++) System.out.print(" ");

                System.out.print("|Partai");
                for (int i = 0; i < maxPartai - 6; i++) System.out.print(" ");

                System.out.println("|");

                System.out.print("+");
                for (int i = 0; i < maxID; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxNama; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxBidang; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxPartai; i++) System.out.print(" ");
                
                System.out.println("+");


                for (int i = 0; i < listDPR.size(); i++)
                {
                    String idStr = Integer.toString(listDPR.get(i).getId());

                    System.out.print("|");
                    System.out.print(listDPR.get(i).getId()); // menggunakan getter id

                    for (int j = 0; j < maxID - idStr.length(); j++) 
                    {
                        System.out.print(" ");
                    }

                    System.out.print("|");
                    System.out.print(listDPR.get(i).getNama()); // menggunakan getter nama

                    for (int j = 0; j < maxNama - listDPR.get(i).getNama().length(); j++) 
                    {
                        System.out.print(" ");
                    }

                    System.out.print("|");
                    System.out.print(listDPR.get(i).getBidang()); // menggunakan getter bidang

                    for (int j = 0; j < maxBidang - listDPR.get(i).getBidang().length(); j++) 
                    {
                        System.out.print(" ");
                    }

                    System.out.print("|");
                    System.out.print(listDPR.get(i).getPartai()); // menggunakan getter partai

                    for (int j = 0; j < maxPartai - listDPR.get(i).getPartai().length(); j++) 
                    {
                        System.out.print(" ");
                    }

                    System.out.println("|");
                }

                System.out.print("+");
                for (int i = 0; i < maxID; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxNama; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxBidang; i++) System.out.print(" ");

                System.out.print("+");
                for (int i = 0; i < maxPartai; i++) System.out.print(" ");
                
                System.out.println("+\n");
            }

        } while (pilihMenu != 0);
        
        System.out.println("Terima kasih telah menggunakan program ini!");

        sc.close(); // menutup scanner
    } 
}
