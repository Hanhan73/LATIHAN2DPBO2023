# Saya Farhan Muzhaffar Tiras Putra NIM 2105879 mengerjakan soal Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

# import class dari file
from Mahasiswa import Mahasiswa

# deklarasi array
mhs = []

#  Setiap index dari array akan diisi oleh attribut dari class Human,
#  SivitasAkademik, dan Mahasiswa yang akan menggunakan method setter
#  lalu di add ke array
temp = Mahasiswa()
temp.set_nik("3001323007020001")
temp.set_nama("Farhan")
temp.set_jenis_kelamin("L")
temp.set_asal_universitas("UPI")
temp.set_email_edu("farhan@upi.edu")
temp.set_nim("2105879")
temp.set_prodi("Ilmu Komputer")
temp.set_fakultas("FPMIPA")
mhs.append(temp)

temp = Mahasiswa()
temp.set_nik("3121323012020002")
temp.set_nama("Farah")
temp.set_jenis_kelamin("P")
temp.set_asal_universitas("UPI")
temp.set_email_edu("farah@upi.edu")
temp.set_nim("2105880")
temp.set_prodi("Sastra Bahasa Inggris")
temp.set_fakultas("FPBS")
mhs.append(temp)

temp = Mahasiswa()
temp.set_nik("3001213011020003")
temp.set_nama("Fatur")
temp.set_jenis_kelamin('L')
temp.set_asal_universitas("UNPAD")
temp.set_email_edu("fatur@undap.edu")
temp.set_nim("3006202105880")
temp.set_prodi("Bisnis Digital")
temp.set_fakultas("FEB")
mhs.append(temp)

temp = Mahasiswa()
temp.set_nik("2231132011030004")
temp.set_nama("Fatin")
temp.set_jenis_kelamin('P')
temp.set_asal_universitas("UPI")
temp.set_email_edu("fatin@upi.edu")
temp.set_nim("2100789")
temp.set_prodi("Desain Komunikasi Visual")
temp.set_fakultas("FPSD")
mhs.append(temp)

temp = Mahasiswa()
temp.set_nik("1232120101020005")
temp.set_nama("Faqir")
temp.set_jenis_kelamin('L')
temp.set_asal_universitas("ITB")
temp.set_email_edu("faqir@itb.edu")
temp.set_nim("112020212205880")
temp.set_prodi("Teknik Informatika")
temp.set_fakultas("STEI")
mhs.append(temp)

#  menampilkan isi dari list dengan looping for dan setiap attributnya ditampilkan dengan memanggil getter masing-masing attribut
if not mhs:
    print("DATA MAHASISWA KOSONG!")
else:
    n = 1
    print("Data Lengkap Mahasiswa: ")
    for Mhs in mhs:
        print(n, end=". ")
        print("NIK                   :", Mhs.get_nim())
        print("   Nama                  :", Mhs.get_nama())
        print("   Jenis Kelamin         :", Mhs.get_jenis_kelamin())
        print("   Asal Universitas      :", Mhs.get_asal_universitas())
        print("   Prodi                 :", Mhs.get_prodi())
        print("   Fakultas              :", Mhs.get_fakultas())
        print("")
        n += 1
