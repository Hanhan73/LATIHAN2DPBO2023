/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// deklarasi class dan menjadi anak Human
public class SivitasAkademik extends Human {

    // attibut private bertipe data string
    private String asal_universitas;
    private String email_edu;

    // constructor tanpa parameter
    public SivitasAkademik() {
        this.asal_universitas = "";
        this.email_edu = "";

    }

    // constructor dengan parameter asal_universitas, email_edu
    public SivitasAkademik(String asal_universitas, String email_edu) {
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    // setter dan getter untuk setiap atribut asal_universitas, email_edu
    public String get_asal_universitas() {
        return this.asal_universitas;
    }

    public void set_asal_universitas(String asal_universitas) {
        this.asal_universitas = asal_universitas;
    }

    public String get_email_edu() {
        return this.email_edu;
    }

    public void set_email_edu(String email_edu) {
        this.email_edu = email_edu;
    }

};
