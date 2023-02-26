#include "SivitasAkademik.cpp"

class Mahasiswa : public SivitasAkademik
{
private:
    string nim, prodi, fakultas;

public:
    Mahasiswa();
    Mahasiswa(string nim, string prodi, string fakultas);
    Mahasiswa(string nik, string nama, char jk, string asal_univ, string email_edu, string nim, string prodi, string fakultas);
    void setNIM(string nim);
    void setProdi(string prodi);
    void setFakultas(string fakultas);

    string getNIM();
    string getProdi();
    string getFakultas();

    ~Mahasiswa();
};