/* Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library
import java.util.ArrayList;

//deklarasi class main
public class Main {
  public static void main(String[] args) {

    // deklrasi variabel
    int i = 0;

    // deklrasi list menggunakan library
    ArrayList<Mahasiswa> list = new ArrayList<>();

    // instansiasi object tanpa parameter
    Mahasiswa temp1 = new Mahasiswa();
    Mahasiswa temp2 = new Mahasiswa();
    Mahasiswa temp3 = new Mahasiswa();
    Mahasiswa temp4 = new Mahasiswa();
    Mahasiswa temp5 = new Mahasiswa();

    // Setiap index dari array akan diisi oleh attribut dari class Human,
    // SivitasAkademik, dan Mahasiswa yang akan menggunakan method setter
    // lalu di add ke list array
    temp1.set_nik("3001323007020001");
    temp1.set_nama("Farhan");
    temp1.set_jenis_kelamin('L');
    temp1.set_asal_universitas("UPI");
    temp1.set_email_edu("farhan@upi.edu");
    temp1.set_nim("2105879");
    temp1.set_prodi("Ilmu Komputer");
    temp1.set_fakultas("FPMIPA");
    list.add(temp1);

    temp2.set_nik("3121323012020002");
    temp2.set_nama("Farah");
    temp2.set_jenis_kelamin('P');
    temp2.set_asal_universitas("UPI");
    temp2.set_email_edu("farah@upi.edu");
    temp2.set_nim("2105880");
    temp2.set_prodi("Sastra Bahasa Inggris");
    temp2.set_fakultas("FPBS");
    list.add(temp2);

    temp3.set_nik("3001213011020003");
    temp3.set_nama("Fatur");
    temp3.set_jenis_kelamin('L');
    temp3.set_asal_universitas("UNPAD");
    temp3.set_email_edu("fatur@undap.edu");
    temp3.set_nim("3006202105880");
    temp3.set_prodi("Bisnis Digital");
    temp3.set_fakultas("FEB");
    list.add(temp3);

    temp4.set_nik("2231132011030004");
    temp4.set_nama("Fatin");
    temp4.set_jenis_kelamin('P');
    temp4.set_asal_universitas("UPI");
    temp4.set_email_edu("fatin@upi.edu");
    temp4.set_nim("2100789");
    temp4.set_prodi("Desain Komunikasi Visual");
    temp4.set_fakultas("FPSD");
    list.add(temp4);

    temp5.set_nik("1232120101020005");
    temp5.set_nama("Faqir");
    temp5.set_jenis_kelamin('L');
    temp5.set_asal_universitas("ITB");
    temp5.set_email_edu("faqir@itb.edu");
    temp5.set_nim("112020212205880");
    temp5.set_prodi("Teknik Informatika");
    temp5.set_fakultas("STEI");
    list.add(temp5);

    // menampilkan isi dari list dengan looping for dan setiap attributnya
    // ditampilkan dengan memanggil getter masing-masing attribut
    for (i = 0; i < list.size(); i++) {
      System.out.println(Integer.toString(i + 1) + ". " + "NIK              : " + list.get(i).get_nik());
      System.out.println("   Nama             : " + list.get(i).get_nama());
      System.out.println("   Jenis_Kelamin    : " + list.get(i).get_jenis_kelamin());
      System.out.println("   Asal Universitas : " + list.get(i).get_asal_universitas());
      System.out.println("   NIM              : " + list.get(i).get_nim());
      System.out.println("   Prodi            : " + list.get(i).get_prodi());
      System.out.println("   Fakultas         : " + list.get(i).get_fakultas());
      System.out.println("   Email            : " + list.get(i).get_email_edu());
      System.out.println("");

    }
  }
}
