<?php
require "Mahasiswa.php";

echo "<h2>=== Latihan 2 Praktikum DPBO - PHP ===</h2>";
echo "</br>";

$listMahasiswa = array();

$mhs1 = new Mahasiswa();
$mhs1->setNIK("3216xxxxxxxx03");
$mhs1->setNama("Muhammad Rayhan Nur");
$mhs1->setJenisKelamin('L');

$mhs1->setAsalUniv("Universitas Pendidikan Indonesia");
$mhs1->setEmailUniv("m.rayhan.nur@upi.edu");

$mhs1->setNIM("2100192");
$mhs1->setFakultas("FPMIPA");
$mhs1->setProdi("Ilmu Komputer");


$mhs2 = new Mahasiswa("3228xxxxxxxx99", "Asep", 'L', "Universitas Padjajaran", "asep@unpad.edu",
                "19273720", "FPEB", "Bisnis Digital");

$mhs3 = new Mahasiswa("3299xxxxxxxx70", "Bunga", 'P', "Universitas Parahyangan", "bunga@unpar.edu",
                "212293619", "FH", "Hukum");

$mhs4 = new Mahasiswa();

$mhs4->setNIM("00000007");
$mhs4->setProdi("Teknik Fix Gol");
$mhs4->setFakultas("FPLIV");

$mhs4->setNIK("3200xxxxxxxx00");
$mhs4->setNama("Darwin Nunez");
$mhs4->setJenisKelamin('L');

$mhs4->setAsalUniv("Universitas Negeri Liverpool");
$mhs4->setEmailUniv("nunez_always_score@unliv.edu");

$listMahasiswa[] = $mhs1;
$listMahasiswa[] = $mhs2;
$listMahasiswa[] = $mhs3;
$listMahasiswa[] = $mhs4;


echo "=============== DAFTAR MAHASISWA ============== <br>";
$counter = 0;
foreach ($listMahasiswa as $mhs) {
    echo "-------------------- " . ($counter + 1) . " -------------------- <br>";
    echo "NIK             : " . $mhs->getNIK()      . "<br>";
    echo "NIM             : " . $mhs->getNIM()      . "<br>";
    echo "Nama            : " . $mhs->getNama()     . "<br>";
    echo "Jenis Kelamin   : " . $mhs->getJenisKelamin() . "<br>";
    echo "Program Studi   : " . $mhs->getProdi()    . "<br>";
    echo "Fakultas        : " . $mhs->getFakultas() . "<br>";
    echo "Asal Universitas: " . $mhs->getAsalUniv() . "<br>";
    echo "Email           : " . $mhs->getEmailUniv()    . "<br>";
    echo "-------------------- " . ($counter + 1) . " -------------------- <br>";
    echo "<br>";
    $counter++;

}
echo "<h3>- Muhammad Rayhan Nur (2100192) -</h3>";
?>