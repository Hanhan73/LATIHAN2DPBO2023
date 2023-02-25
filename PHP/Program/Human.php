<?php
/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// deklarasi class
class Human
{
    // attibut private
    private $nik;
    private $nama;
    private $jenis_kelamin;


    // constructor dengan parameter nik, nama, jenis_kelamin
    public function __construct($nik = '', $nama = '', $jenis_kelamin = '')
    {
        $this->nik = $nik;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;
    }

    // setter dan getter untuk setiap atribut nik, nama, jenis_kelamin
    public function get_nik()
    {
        return $this->nik;
    }
    public function set_nik($nik)
    {
        $this->nik = $nik;
    }

    public function get_nama()
    {
        return $this->nama;
    }
    public function set_nama($nama)
    {
        $this->nama = $nama;
    }

    public function get_jenis_kelamin()
    {
        return $this->jenis_kelamin;
    }
    public function set_jenis_kelamin($jenis_kelamin)
    {
        $this->jenis_kelamin = $jenis_kelamin;
    }
};
