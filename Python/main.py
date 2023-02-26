from Mahasiswa import Mahasiswa
from List import List

listMhs = List()
mhs1 = Mahasiswa()
mhs1.setNIK("3216xxxxxxxx03")
mhs1.setNama("Muhammad Rayhan Nur")
mhs1.setJenisKelamin('L')

mhs1.setAsalUniv("Universitas Pendidikan Indonesia")
mhs1.setEmailUniv("m.rayhan.nur@upi.edu")

mhs1.setNIM("2100192")
mhs1.setFakultas("FPMIPA")
mhs1.setProdi("Ilmu Komputer")


mhs2 = Mahasiswa("3228xxxxxxxx99", "Asep", 'L', "Universitas Padjajaran", "asep@unpad.edu",
                 "19273720", "FPEB", "Bisnis Digital");

mhs3 = Mahasiswa("3299xxxxxxxx70", "Bunga", 'P', "Universitas Parahyangan", "bunga@unpar.edu",
                 "212293619", "FH", "Hukum");

mhs4 = Mahasiswa(nim="00000007", fakultas="FPLIV", prodi="Teknik Fix Gol");
mhs4.setNIK("3200xxxxxxxx00");
mhs4.setNama("Darwin Nunez");
mhs4.setJenisKelamin('L');
mhs4.setAsalUniv("Universitas Negeri Liverpool");
mhs4.setEmailUniv("nunez_always_score@unliv.edu");

listMhs.tambahdataMhs(mhs1)
listMhs.tambahdataMhs(mhs2)
listMhs.tambahdataMhs(mhs3)
listMhs.tambahdataMhs(mhs4)

listMhs.tampilkanDataMhs()

