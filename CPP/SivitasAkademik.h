#include "Human.cpp"

class SivitasAkademik : public Human
{
private:
    string asal_universitas;
    string email_edu;

public:
    SivitasAkademik();
    SivitasAkademik(string asal_universitas, string email_edu);
    SivitasAkademik(string nik, string nama, char jk, string asal_universitas, string email_edu);

    void setAsalUniv(string asal_universitas);
    void setEmailUniv(string email_universitas);

    string getAsalUniv();
    string getEmailUniv();
    ~SivitasAkademik();
};