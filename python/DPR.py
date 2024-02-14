# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 1 dalam mata
#  kuliah Struktur data
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 
class DPR:

    __id = 0; # untuk id anggota dpr
    __nama = ""; # untuk nama anggota dpr
    __bidang = ""; # untuk bidang anggota dpr
    __partai = ""; # untuk partai anggota dpr

    def __init__(self, id = 0, nama = "", bidang = "", partai = ""): # constructor
        self.__id = id
        self.__nama = nama
        self.__bidang = bidang
        self.__partai = partai

    # setter untuk setiap atribut
    def setId(self, id):
        self.__id = id

    def setNama(self, nama):
        self.__nama = nama

    def setBidang(self, bidang):
        self.__bidang = bidang

    def setPartai(self, partai):
        self.__partai = partai

    # getter untuk setiap atribut
    def getId(self):
        return self.__id
    
    def getNama(self):
        return self.__nama
    
    def getBidang(self):
        return self.__bidang
    
    def getPartai(self):
        return self.__partai
