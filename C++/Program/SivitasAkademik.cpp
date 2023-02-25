/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library
#include <iostream>
#include <string>
#include "Human.cpp"

using namespace std;

// deklarasi class menjadi anak dari Human
class SivitasAkademik : public Human
{

    // attibut private bertipe data string
private:
    string asal_universitas;
    string email_edu;

    // public Methods
public:
    // constructor tanpa parameter
    SivitasAkademik()
    {
        this->asal_universitas = "";
        this->email_edu = "";
    }

    // constructor dengan parameter asal_universitas, email_edu
    SivitasAkademik(string asal_universitas, string email_edu, string prodi, string fakultas)
    {
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }

    // setter dan getter untuk setiap atribut asal_universitas, email_edu
    string get_asal_universitas()
    {
        return this->asal_universitas;
    }

    void set_asal_universitas(string asal_universitas)
    {
        this->asal_universitas = asal_universitas;
    }

    string get_email_edu()
    {
        return this->email_edu;
    }

    void set_email_edu(string email_edu)
    {
        this->email_edu = email_edu;
    }

    // deconstructor
    ~SivitasAkademik()
    {
    }
};
