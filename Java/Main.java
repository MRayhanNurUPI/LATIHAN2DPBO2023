class Main {
    public static void main(String[] args) {
        List listMhs = new List();
        Mahasiswa mhs1 = new Mahasiswa();
        mhs1.setNIK("3216xxxxxxxx03");
        mhs1.setNama("Muhammad Rayhan Nur");
        mhs1.setJenisKelamin('L');

        mhs1.setAsalUniv("Universitas Pendidikan Indonesia");
        mhs1.setEmailUniv("m.rayhan.nur@upi.edu");

        mhs1.setNIM("2100192");
        mhs1.setFakultas("FPMIPA");
        mhs1.setProdi("Ilmu Komputer");

        Mahasiswa mhs2 = new Mahasiswa("3228xxxxxxxx99", "Asep", 'L', "Universitas Padjajaran", "asep@unpad.edu",
                "19273720", "FPEB", "Bisnis Digital");

        Mahasiswa mhs3 = new Mahasiswa("3299xxxxxxxx70", "Bunga", 'P', "Universitas Parahyangan", "bunga@unpar.edu",
                "212293619", "FH", "Hukum");

        Mahasiswa mhs4 = new Mahasiswa("00000007", "FPLIV", "Teknik Fix Gol");
        mhs4.setNIK("3200xxxxxxxx00");
        mhs4.setNama("Darwin Nunez");
        mhs4.setJenisKelamin('L');

        mhs4.setAsalUniv("Universitas Negeri Liverpool");
        mhs4.setEmailUniv("nunez_always_score@unliv.edu");

        listMhs.tambahDataMhs(mhs1);
        listMhs.tambahDataMhs(mhs2);
        listMhs.tambahDataMhs(mhs3);
        listMhs.tambahDataMhs(mhs4);

        listMhs.tampilkanDataMhs();
    }
}