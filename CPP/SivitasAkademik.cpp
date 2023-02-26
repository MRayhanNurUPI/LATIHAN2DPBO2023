#include "SivitasAkademik.h"

SivitasAkademik::SivitasAkademik()
{
    this->asal_universitas = "";
    this->email_edu = "";
}

SivitasAkademik::SivitasAkademik(string asal_universitas, string email_edu)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}

SivitasAkademik::SivitasAkademik(string nik, string nama, char jk, string asal_universitas, string email_edu) : Human(nik, nama, jk)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}

void SivitasAkademik::setAsalUniv(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}

void SivitasAkademik::setEmailUniv(string email_edu)
{
    this->email_edu = email_edu;
}

string SivitasAkademik::getAsalUniv()
{
    return this->asal_universitas;
}

string SivitasAkademik::getEmailUniv()
{
    return this->email_edu;
}

SivitasAkademik::~SivitasAkademik() {}