#include "Human.h"

Human::Human()
{
    this->nik = "";
    this->nama = "";
    this->jenis_kelamin = '-';
}

Human::Human(string nik, string nama, char jenis_kelamin)
{
    this->nik = nik;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}

void Human::setNIK(string nik) { this->nik = nik; }
void Human::setNama(string nama) { this->nama = nama; }
void Human::setJenisKelamin(char jk) { this->jenis_kelamin = jk; }

string Human::getNIK() { return this->nik; }
string Human::getNama() { return this->nama; }
char Human::getJenisKelamin() { return this->jenis_kelamin; }

Human::~Human() {}