/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library dan file
#include <bits/stdc++.h>
#include <list>
#include "Mahasiswa.cpp"

int main()
{
    // deklrasi variabel
    int i;

    // deklrasi list menggunakan library
    list<Mahasiswa> lList;

    // instansiasi object tanpa parameter
    Mahasiswa temp;

    // Setiap index dari array akan diisi oleh attribut dari class Human,
    // SivitasAkademik, dan Mahasiswa yang akan menggunakan method setter
    // lalu di add ke list array
    temp.set_nik("3001323007020001");
    temp.set_nama("Farhan");
    temp.set_jenis_kelamin('L');
    temp.set_asal_universitas("UPI");
    temp.set_email_edu("farhan@upi.edu");
    temp.set_nim("2105879");
    temp.set_prodi("Ilmu Komputer");
    temp.set_fakultas("FPMIPA");
    lList.push_back(temp);

    temp.set_nik("3121323012020002");
    temp.set_nama("Farah");
    temp.set_jenis_kelamin('P');
    temp.set_asal_universitas("UPI");
    temp.set_email_edu("farah@upi.edu");
    temp.set_nim("2105880");
    temp.set_prodi("Sastra Bahasa Inggris");
    temp.set_fakultas("FPBS");
    lList.push_back(temp);

    temp.set_nik("3001213011020003");
    temp.set_nama("Fatur");
    temp.set_jenis_kelamin('L');
    temp.set_asal_universitas("UNPAD");
    temp.set_email_edu("fatur@undap.edu");
    temp.set_nim("3006202105880");
    temp.set_prodi("Bisnis Digital");
    temp.set_fakultas("FEB");
    lList.push_back(temp);

    temp.set_nik("2231132011030004");
    temp.set_nama("Fatin");
    temp.set_jenis_kelamin('P');
    temp.set_asal_universitas("UPI");
    temp.set_email_edu("fatin@upi.edu");
    temp.set_nim("2100789");
    temp.set_prodi("Desain Komunikasi Visual");
    temp.set_fakultas("FPSD");
    lList.push_back(temp);

    temp.set_nik("1232120101020005");
    temp.set_nama("Faqir");
    temp.set_jenis_kelamin('L');
    temp.set_asal_universitas("ITB");
    temp.set_email_edu("faqir@itb.edu");
    temp.set_nim("112020212205880");
    temp.set_prodi("Teknik Informatika");
    temp.set_fakultas("STEI");
    lList.push_back(temp);

    // cek terlebih dahulu apakah list kosong atau tidak
    if (lList.empty())
    {
        cout << '\n'
             << "DATA MAHASISWA KOSONG!" << '\n';
    }
    else
    {
        // menampilkan isi dari list dengan looping for dan setiap attributnya ditampilkan dengan memanggil getter masing-masing attribut
        i = 0;
        cout << "Data Lengkap Mahasiswa: ";

        for (list<Mahasiswa>::iterator it = lList.begin(); it != lList.end(); it++)
        {
            cout << '\n'
                 << (i + 1) << '.' << " NIK                     : " << it->get_nik() << '\n';
            cout << "   Nama                    : " << it->get_nama() << '\n';
            cout << "   Jenis Kelamin           : " << it->get_jenis_kelamin() << '\n';
            cout << "   Asal Universitas        : " << it->get_asal_universitas() << '\n';
            cout << "   NIM                     : " << it->get_nim() << '\n';
            cout << "   Program Studi           : " << it->get_prodi() << "\n";
            cout << "   Fakultas                : " << it->get_fakultas() << "\n";
            cout << "   Email Edu               : " << it->get_email_edu() << "\n";
            i++;
        }
    }

    return 0;
}
