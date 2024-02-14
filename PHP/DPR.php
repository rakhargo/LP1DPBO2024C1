<!-- /*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 1 dalam mata
 kuliah Struktur data
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ -->
<?php
class DPR
{
    private $id; // untuk id anggota dpr
    private $nama; // untuk nama anggota dpr
    private $bidang; // untuk bidang anggota dpr
    private $partai; // untuk partai anggota dpr
    private $foto; // untuk foto anggota dpr

    public function __construct($id = '', $nama = '', $bidang = '', $partai = '', $foto = '') // konstruktor
    {
        $this->id = $id;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = $foto;
    }

    // setter untuk atribut anggota dpr
    public function setId($id)
    {
        $this->id = $id;
    }

    public function setNama($nama)
    {
        $this->nama = $nama;
    }

    public function setBidang($bidang)
    {
        $this->bidang = $bidang;
    }

    public function setPartai($partai)
    {
        $this->partai = $partai;
    }

    public function setFoto($foto)
    {
        $this->foto = $foto;
    }

    // getter untuk atribut anggota dpr
    public function getId()
    {
        return $this->id;
    }

    public function getNama()
    {
        return $this->nama;
    }

    public function getBidang()
    {
        return $this->bidang;
    }

    public function getPartai()
    {
        return $this->partai;
    }

    public function getFoto()
    {
        return $this->foto;
    }

    function __destruct()
    {
        
    }
}
?>