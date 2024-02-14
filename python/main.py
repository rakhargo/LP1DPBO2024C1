# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 1 dalam mata
#  kuliah Struktur data
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 

from DPR import DPR # import class

# variabel untuk pembuatan tabel
maxID = 2
maxNama = 4
maxBidang = 6
maxPartai = 6 

listDPR = [] # membuat array

pilihMenu = 1 # variabel pemilihan menu

while pilihMenu != 0: # selama belum 0
    print("Pilih Menu: ")
    print("1. Add")
    print("2. Edit")
    print("3. Hapus")
    print("4. View")
    print("Ketik 0 untuk mengakhiri program")

    for i in range(len(listDPR)): # proses pencarian length max dari setiap atribut di setiap anggota  
        if maxID < len(str(listDPR[i].getId())): # untuk ID
            maxID = len(str(listDPR[i].getId()))
            
        if maxNama < len(listDPR[i].getNama()): # untuk nama
            maxNama = len(listDPR[i].getNama())

        if maxBidang < len(listDPR[i].getBidang()): # untuk bidang
            maxBidang = len(listDPR[i].getBidang())

        if maxPartai < len(listDPR[i].getPartai()): # untuk partai
            maxPartai = len(listDPR[i].getPartai())

    pilihMenu = int(input()) # meminta masukan user untuk pemilihan menu

    if pilihMenu == 1: # jika pilih 1, maka create
        # meminta masukan untuk setiap atribut
        id = int(input("ID: "))
        nama = input("Nama: ")
        bidang = input("Bidang: ")
        partai = input("Partai: ")

        temp = DPR(id, nama, bidang, partai) # construct data
        listDPR.append(temp) # memasukkan ke list

        print("Data berhasil ditambah")
    elif pilihMenu == 2: # jika pilih 2, maka edit
        stop = 0 # variabel untuk error handling
        while stop == 0: 
            id = int(input("ID yang ingin diedit: ")) # meminta masukan untuk id yang ingin diedit
            for i in range(len(listDPR)): # untuk mencari id di list
                if id == listDPR[i].getId():
                    stop = 1
                    break

            if stop == 1: # jika ketemu
                print("Ditemukan ID ", id)
                print("Mengubah data")
                # maka meminta masukan untuk data baru
                # menggunaka setter untuk setiap atribut anggota
                id = int(input("ID: "))
                listDPR[i].setId(id)
                nama = input("Nama: ")
                listDPR[i].setNama(nama)
                bidang = input("Bidang: ")
                listDPR[i].setBidang(bidang)
                partai = input("Partai: ")
                listDPR[i].setPartai(partai)
                print("Data berhasil diubah")
            else: # jika tidak
                print("Tidak ada data dengan ID yang dimaksud")
    elif pilihMenu == 3: # jika pilih 3, maka hapus
        stop = 0 # variabel untuk error handling
        while stop == 0:
            id = int(input("ID yang ingin dihapus: ")) # meminta masukan untuk id yang ingin dihapus
            for i in range(len(listDPR)): # untuk mencari id di list
                if id == listDPR[i].getId():
                    stop = 1
                    break

            if stop == 1: # jika ketemu
                print("Ditemukan ID ", id)
                listDPR.remove(listDPR[i]) # menghapus data di indeks tersebut
                print("Data berhasil dihapus")
            else:
                print("Tidak ada data dengan ID yang dimaksud")
                
    elif pilihMenu == 4: # jika pilih 4, maka view
        # pembuatan tabel
        print("+" + "-" * maxID + "+" + "-" * maxNama + "+" + "-" * maxBidang + "+" + "-" * maxPartai + "+")

        print("|ID" + " " * (maxID - 2) + "|Nama" + " " * (maxNama - 4) + "|Bidang" + " " * (maxBidang - 6) + "|Partai" + " " * (maxPartai - 6) + "|")

        print("+" + "-" * maxID + "+" + "-" * maxNama + "+" + "-" * maxBidang + "+" + "-" * maxPartai + "+")

        for i in range(len(listDPR)):
            print("|" + str(listDPR[i].getId()) + " " * (maxID - len(str(listDPR[i].getId()))) +
                  "|" + listDPR[i].getNama() + " " * (maxNama - len(listDPR[i].getNama())) +
                  "|" + listDPR[i].getBidang() + " " * (maxBidang - len(listDPR[i].getBidang())) +
                  "|" + listDPR[i].getPartai() + " " * (maxPartai - len(listDPR[i].getPartai())) + "|")

        print("+" + "-" * maxID + "+" + "-" * maxNama + "+" + "-" * maxBidang + "+" + "-" * maxPartai + "+")





print("Terima kasih telah menggunakan program ini!")