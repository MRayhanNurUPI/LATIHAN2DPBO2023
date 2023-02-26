from SivitasAkademik import SivitasAkademik

class Mahasiswa(SivitasAkademik):
    __nim = ""
    __prodi = ""
    __fakultas = ""

    def __init__(self, nik="", nama="", jk='', asalUniv="", emailUniv="", nim = "", fakultas = "", prodi = ""):
        super(Mahasiswa, self).__init__(nik, nama, jk, asalUniv, emailUniv)
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas

    def setNIM(self, nim):
        self.__nim = nim

    def setProdi(self, prodi):
        self.__prodi = prodi

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getNIM(self):
        return self.__nim
    
    def getProdi(self):
        return self.__prodi
    
    def getFakultas(self):
        return self.__fakultas
    