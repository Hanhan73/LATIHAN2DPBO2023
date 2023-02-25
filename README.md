# LATIHAN2DPBO2023

## Janji

Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.

## Soal

Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance  pada kelas - kelas tersebut:
- Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
- Human: NIK, nama, jenis_kelamin
- SivitasAkademik: asal_universitas, email_edu

## Design Program

![image](https://user-images.githubusercontent.com/96176429/221360965-a185bd68-8672-4afa-9c02-da9863c5d503.png)

Alasan dari design program:

a. SivitasAkdemik is a Human, Karena SivitasAkademik adalah objek yang serupa, yaitu seorang manusia
b. Mahasiswa is a SivitasAkademik, karena Mahasiswa merupakan bagian dari sebuah SivitasAkademik dan pastinya Mahasiswa adalah manusia


 A. Class Human:

  * Atribut:

    - nik = NIK seorang manusia
    - nama = Nama sorang manusia
    - Jenis = Jenis kelamin dari orang tersebut

  * Method:
    - get_nik() = mendapatkan value nik
    - get_nama() = mendapatkan value nama
    - get_jenis_kelamin() = mendapatkan value jenis_kelamin
    - set_nik() = menetapkan value nik
    - set_nama() = menetapkan value nama
    - set_jenis_kelamin() = menetapkan value jenis_kelamin
    
 B. Class SivitasAkademik:

  * Atribut:

    - asal_universitas = Asal Universitas Mahasiswa
    - email_edu =  Email Edu dari suatu kampus

  * Method:
    - get_asal_universitas() = mendapatkan value asal_universitas
    - get_email_edu() = mendapatkan value email_edu
    - set_asal_universitas() = menetapkan value asal_universitas
    - set_email_edu() = menetapkan value email_edu
    
 C Class Mahasiswa:

  * Atribut:

    - nim = NIM Mahasiswa
    - nama = Nama Mahasiswa
    - prodi = Program Studi Mahasiswa
    - fakultas = Fakultas Mahasiswa

  * Method:
    - get_nim() = mendapatkan nim
    - get_nama() = mendapatkan nama
    - get_prodi() = mendapatkan prodi
    - get_fakultas() = mendapatkan fakultas
    - set_nim() = menetapkan value nim
    - set_nama() = menetapkan value nama
    - set_prodi() = menetapkan value prodi
    - set_fakultas() = menetapkan value fakultas
    
## Penjelasan Alur Program
1. Import Library dan file yang diperlukan
2. Deklarasi variabel dan array
3. Intansiasi object
4. Mengisi object dengan data yang diperlukan
5. Memasukkan object ke dalam array
6. Menampilkan isi array secara berurutan

## Dokumentasi

![Read](https://user-images.githubusercontent.com/96176429/221361835-38430a29-f1b3-4152-83b1-1709df80212a.png)
