<?php
/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

require('Human.php');
// deklarasi class menjadi anak dari SivitasAkademik
class SivitasAkademik extends Human
{
    // attibut private
    private $asal_universitas;
    private $email_edu;



    // constructor dengan parameter asal_universitas, email_edu
    public function __construct($asal_universitas = '', $email_edu = '')
    {
        $this->asal_universitas = $asal_universitas;
        $this->email_edu = $email_edu;
    }

    // setter dan getter untuk setiap atribut asal_universitas, email_edu
    public function get_asal_universitas()
    {
        return $this->asal_universitas;
    }
    public function set_asal_universitas($asal_universitas)
    {
        $this->asal_universitas = $asal_universitas;
    }

    public function get_email_edu()
    {
        return $this->email_edu;
    }
    public function set_email_edu($email_edu)
    {
        $this->email_edu = $email_edu;
    }
};
