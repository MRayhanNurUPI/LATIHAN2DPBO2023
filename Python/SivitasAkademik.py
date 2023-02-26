from Human import Human

class SivitasAkademik(Human):
    __asal_universitas = ""
    __email_edu = ""

    def __init__(self, nik="", nama="", jk='',  asal_univ="", email_edu = ""):
        super(SivitasAkademik, self).__init__(nik, nama, jk)
        self.__asal_universitas = asal_univ
        self.__email_edu = email_edu

    def setAsalUniv(self, asal_univ):
        self.__asal_universitas = asal_univ

    def setEmailUniv(self, email_univ):
        self.__email_edu = email_univ

    def getAsalUniv(self):
        return self.__asal_universitas
    
    def getEmailUniv(self):
        return self.__email_edu
    