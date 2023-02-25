<?php
/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

//import file 
require('Mahasiswa.php');

// instansiasi object 
$mhs1 = new Mahasiswa();
$mhs2 = new Mahasiswa();
$mhs3 = new Mahasiswa();
$mhs4 = new Mahasiswa();
$mhs5 = new Mahasiswa();

// Setiap index dari array akan diisi oleh attribut dari class Human,
// SivitasAkademik, dan Mahasiswa yang akan menggunakan method setter
// lalu di add ke list array
$mhs1->set_nik("3001323007020001");
$mhs1->set_nama("Farhan");
$mhs1->set_jenis_kelamin('L');
$mhs1->set_asal_universitas("UPI");
$mhs1->set_email_edu("farhan@upi.edu");
$mhs1->set_nim("2105879");
$mhs1->set_prodi("Ilmu Komputer");
$mhs1->set_fakultas("FPMIPA");

$mhs2->set_nik("3121323012020002");
$mhs2->set_nama("Farah");
$mhs2->set_jenis_kelamin('P');
$mhs2->set_asal_universitas("UPI");
$mhs2->set_email_edu("farah@upi.edu");
$mhs2->set_nim("2105880");
$mhs2->set_prodi("Sastra Bahasa Inggris");
$mhs2->set_fakultas("FPBS");

$mhs3->set_nik("3001213011020003");
$mhs3->set_nama("Fatur");
$mhs3->set_jenis_kelamin('L');
$mhs3->set_asal_universitas("UNPAD");
$mhs3->set_email_edu("fatur@undap.edu");
$mhs3->set_nim("3006202105880");
$mhs3->set_prodi("Bisnis Digital");
$mhs3->set_fakultas("FEB");

$mhs4->set_nik("2231132011030004");
$mhs4->set_nama("Fatin");
$mhs4->set_jenis_kelamin('P');
$mhs4->set_asal_universitas("UPI");
$mhs4->set_email_edu("fatin@upi.edu");
$mhs4->set_nim("2100789");
$mhs4->set_prodi("Desain Komunikasi Visual");
$mhs4->set_fakultas("FPSD");

$mhs5->set_nik("1232120101020005");
$mhs5->set_nama("Faqir");
$mhs5->set_jenis_kelamin('L');
$mhs5->set_asal_universitas("ITB");
$mhs5->set_email_edu("faqir@itb.edu");
$mhs5->set_nim("112020212205880");
$mhs5->set_prodi("Teknik Informatika");
$mhs5->set_fakultas("STEI");

//memasukkan object ke dalam array
$mhs = array($mhs1, $mhs2, $mhs3, $mhs4, $mhs5);

//menampilkan data mahasiswa
echo "<br> Data Mahasiswa <br>";

for ($i = 0; $i < 5; $i++) {
    echo $i + 1 . ". NIK            : " . $mhs[$i]->get_nim() . "<br>";
    echo "   Nama               : " . $mhs[$i]->get_nama() . "<br>";
    echo "   Jenis Kelamin      : " . $mhs[$i]->get_jenis_kelamin() . "<br>";
    echo "   Asal Univeristas   : " . $mhs[$i]->get_asal_universitas() . "<br>";
    echo "   NIM                : " . $mhs[$i]->get_nim() . "<br>";
    echo "   Prodi              : " . $mhs[$i]->get_prodi() . "<br>";
    echo "   Fakultas           : " . $mhs[$i]->get_fakultas() . "<br>";
    echo "   Email              : " . $mhs[$i]->get_email_edu() . "<br><br>";
}
