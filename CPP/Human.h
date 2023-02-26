#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string nik;
    string nama;
    char jenis_kelamin;

public:
    Human();
    Human(string nik, string nama, char jenis_kelamin);
    void setNIK(string nik);
    void setNama(string nama);
    void setJenisKelamin(char jk);

    string getNIK();
    string getNama();
    char getJenisKelamin();

    ~Human();
};