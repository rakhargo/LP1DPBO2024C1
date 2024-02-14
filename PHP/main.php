<!-- /*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 1 dalam mata
 kuliah Struktur data
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/  -->
<html>
    <body>
            <?php
            require('DPR.php'); // include file class

            // membuat variabel array dan create data
            $listDPR = []; 
            $listDPR[0] = new DPR(1, "Rakha", "Ekonomi", "PAN", "orang.jpg");
            $listDPR[1] = new DPR(2, "Alfi", "Bisnis", "PKS", "orang.jpg");
            $listDPR[2] = new DPR(3, "Roshan", "Politik", "PDIP", "orang.jpg");

            ?>
            <!-- view data dengan tabel setelah di create data -->
            <h3>Create</h3>
            <table border=1>
            <tr>
                <th>ID</th>
                <th>Nama</th>
                <th>Bidang</th>
                <th>Partai</th>
                <th>Foto</th>
            </tr>
            <?php // perulangan untuk setiap data anggota
            foreach ($listDPR as $anggota) 
            {
                echo "<tr>";
                echo "<td>" . $anggota->getId() . "</td>"; // getter id
                echo "<td>" . $anggota->getNama() . "</td>"; // getter nama
                echo "<td>" . $anggota->getBidang() . "</td>"; // getter bidang
                echo "<td>" . $anggota->getPartai() . "</td>"; // getter partai
                echo "<td><img src=" . $anggota->getFoto() . " width=21% /> </td>"; // getter foto
                echo "</tr>";
            }
            ?>
            
            </table>
            
            <!-- view data dengan tabel setelah di edit data -->
            <h3>Edit ID 2</h3>
            <?php
            $idEdit = 2; // id yang ingin diedit yaitu 2
            foreach ($listDPR as $anggota) // perulangan untuk mencari data dengan id 2
            {
                if ($anggota->getId() == $idEdit) // jika ketemu
                {
                    $anggota->setId(22); // maka menggunakan setter untuk setiap atribut
                    $anggota->setNama("Yogi");
                    $anggota->setBidang("Pertahanan");
                    $anggota->setPartai("Gerindra");
                }
            }
            ?>
            <table border=1>
            <tr>
                <th>ID</th>
                <th>Nama</th>
                <th>Bidang</th>
                <th>Partai</th>
                <th>Foto</th>
            </tr> 
            <?php
            foreach ($listDPR as $anggota) 
            {
                echo "<tr>";
                echo "<td>" . $anggota->getId() . "</td>"; // getter id
                echo "<td>" . $anggota->getNama() . "</td>"; // getter nama
                echo "<td>" . $anggota->getBidang() . "</td>"; // getter bidang
                echo "<td>" . $anggota->getPartai() . "</td>"; // getter partai
                echo "<td><img src=" . $anggota->getFoto() . " width=21% /> </td>"; // getter foto
                echo "</tr>";
            }
            ?>
            </table>

            <!-- view data dengan tabel setelah di hapus data -->
            <h3>Hapus ID 1</h3>
            <?php
            $idHapus = 1; // id yang ingin dihapus yaitu 1
            foreach ($listDPR as $index => $anggota) // perulangan untuk mencari data dengan id sesuai yang dicari
            {
                if ($anggota->getId() == $idHapus) // jika ketemu
                {
                    $indHapus = $index; // mendapatkan index
                }
            }
            unset($listDPR[$indHapus]); // menghapus dengan index yang ketemu
            ?>
            <table border=1>
            <tr>
                <th>ID</th>
                <th>Nama</th>
                <th>Bidang</th>
                <th>Partai</th>
                <th>Foto</th>
            </tr>
            <?php
            foreach ($listDPR as $anggota) 
            {
                echo "<tr>";
                echo "<td>" . $anggota->getId() . "</td>"; // getter id
                echo "<td>" . $anggota->getNama() . "</td>"; // getter nama
                echo "<td>" . $anggota->getBidang() . "</td>"; // getter bidang
                echo "<td>" . $anggota->getPartai() . "</td>"; // getter partai
                echo "<td><img src=" . $anggota->getFoto() . " width=21% /> </td>"; // getter foto
                echo "</tr>";
            }
            ?>
            </table>

    </body>
</html>