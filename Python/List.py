from Mahasiswa import Mahasiswa

class List:
    __listMahasiswa = []

    def tambahdataMhs(self, MhsBaru):
        self.__listMahasiswa.append(MhsBaru)

    def tampilkanDataMhs(self):
        if (len(self.__listMahasiswa) == 0):
            print("Daftar Mahasiswa Kosong.")
        else:
            print("=============== DAFTAR MAHASISWA ==============\n\n")
            it = 0
            while(it < len(self.__listMahasiswa)):
                print("-------------------- " + str((it + 1)) + " --------------------");
                print("NIK             : " + self.__listMahasiswa[it].getNIK());
                print("NIM             : " + self.__listMahasiswa[it].getNIM());
                print("Nama            : " + self.__listMahasiswa[it].getNama());
                print("Jenis Kelamin   : " + self.__listMahasiswa[it].getJenisKelamin());
                print("Program Studi   : " + self.__listMahasiswa[it].getProdi());
                print("Fakultas        : " + self.__listMahasiswa[it].getFakultas());
                print("Asal Universitas: " + self.__listMahasiswa[it].getAsalUniv());
                print("Email           : " + self.__listMahasiswa[it].getEmailUniv());
                print("-------------------- " + str((it + 1)) + " --------------------\n");
                it = it + 1;