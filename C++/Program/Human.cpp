/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library
#include <iostream>
#include <string>

using namespace std;

// deklarasi kelas
class Human
{

    // attibut private bertipe data string
private:
    string nik;
    string nama;
    char jenis_kelamin;

    // public Methods
public:
    // constructor tanpa parameter
    Human()
    {
        this->nik = "";
        this->nama = "";
        this->jenis_kelamin = ' ';
    }

    // constructor dengan parameter nik, nama, jenis_kelamin,
    Human(string nik, string nama, char jenis_kelamin)
    {
        this->nik = nik;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }

    // setter dan getter untuk setiap atribut nik, nama, jenis_kelamin
    string get_nik()
    {
        return this->nik;
    }

    void set_nik(string nik)
    {
        this->nik = nik;
    }

    string get_nama()
    {
        return this->nama;
    }

    void set_nama(string nama)
    {
        this->nama = nama;
    }

    char get_jenis_kelamin()
    {
        return this->jenis_kelamin;
    }

    void set_jenis_kelamin(char jenis_kelamin)
    {
        this->jenis_kelamin = jenis_kelamin;
    }

    // deconstructor
    ~Human()
    {
    }
};
