class Human:

    __nik = ""
    __nama = ""
    __jenis_kelamin = ''

    def __init__(self, nik="", nama="", jk=''):
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jk

    def setNIK(self, nik):
        self.__nik = nik
    
    def setNama(self, nama):
        self.__nama = nama

    def setJenisKelamin(self, jk):
        self.__jenis_kelamin = jk

    def getNIK(self):
        return self.__nik
    
    def getNama(self):
        return self.__nama
    
    def getJenisKelamin(self):
        return self.__jenis_kelamin
    
    