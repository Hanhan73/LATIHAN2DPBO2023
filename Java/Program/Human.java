/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// deklarasi class
public class Human {

    // attibut private bertipe data string
    private String nik;
    private String nama;
    private char jenis_kelamin;

    // constructor tanpa parameter
    public Human() {
        this.nik = "";
        this.nama = "";
        this.jenis_kelamin = '-';

    }

    // constructor dengan parameter nik, nama, jenis_kelamin
    public Human(String nik, String nama, char jenis_kelamin) {
        this.nik = nik;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;

    }

    // setter dan getter untuk setiap atribut nik, nama, jenis_kelamin
    public String get_nik() {
        return this.nik;
    }

    public void set_nik(String nik) {
        this.nik = nik;
    }

    public String get_nama() {
        return this.nama;
    }

    public void set_nama(String nama) {
        this.nama = nama;
    }

    public char get_jenis_kelamin() {
        return this.jenis_kelamin;
    }

    public void set_jenis_kelamin(char jenis_kelamin) {
        this.jenis_kelamin = jenis_kelamin;
    }

};
