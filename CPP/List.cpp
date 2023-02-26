#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

using namespace std;

class List
{
private:
    list<Mahasiswa> listMahasiswa;

public:
    void tambahDataMhs(Mahasiswa mhsbaru)
    {
        listMahasiswa.push_back(mhsbaru);
    }

    void tampilkanDataMhs()
    {
        if (listMahasiswa.empty())
        {
            cout << "Daftar Mahasiswa Kosong." << endl;
        }
        else
        {
            cout << "=============== DAFTAR MAHASISWA ==============\n"
                 << endl;

            int counter = 0;
            for (list<Mahasiswa>::iterator it = listMahasiswa.begin(); it != listMahasiswa.end(); it++)
            {
                cout << ("-------------------- ") << (counter + 1) << (" --------------------") << "\n";
                cout << ("NIK             : ") << (it->getNIK()) << "\n";
                cout << ("NIM             : ") << (it->getNIM()) << "\n";
                cout << ("Nama            : ") << (it->getNama()) << "\n";
                cout << ("Jenis Kelamin   : ") << (it->getJenisKelamin()) << "\n";
                cout << ("Program Studi   : ") << (it->getProdi()) << "\n";
                cout << ("Fakultas        : ") << (it->getFakultas()) << "\n";
                cout << ("Asal Universitas: ") << (it->getAsalUniv()) << "\n";
                cout << ("Email           : ") << (it->getEmailUniv()) << "\n";
                cout << ("-------------------- ") << (counter + 1) << (" --------------------\n");
                counter++;
                cout << "\n";
            }
        }
    }
};