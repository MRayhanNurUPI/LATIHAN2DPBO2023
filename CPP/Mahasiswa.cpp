#include "Mahasiswa.h"

Mahasiswa::Mahasiswa()
{
    this->nim = "";
    this->prodi = "";
    this->fakultas = "";
}

Mahasiswa::Mahasiswa(string nim, string prodi, string fakultas)
{
    this->nim = nim;
    this->prodi = prodi;
    this->fakultas = fakultas;
}

Mahasiswa::Mahasiswa(string nik, string nama, char jk, string asal_univ, string email_edu, string nim, string prodi, string fakultas) : SivitasAkademik(nik, nama, jk, asal_univ, email_edu)
{
    this->nim = nim;
    this->prodi = prodi;
    this->fakultas = fakultas;
}

void Mahasiswa::setNIM(string nim)
{
    this->nim = nim;
}

void Mahasiswa::setProdi(string prodi)
{
    this->prodi = prodi;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Mahasiswa::getNIM() { return this->nim; }
string Mahasiswa::getProdi() { return this->prodi; }
string Mahasiswa::getFakultas() { return this->fakultas; }

Mahasiswa::~Mahasiswa() {}