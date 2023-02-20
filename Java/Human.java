class Human {
    private String nik, nama;
    private char jenis_kelamin;

    public Human() {
        this.nik = "";
        this.nama = "";
        this.jenis_kelamin = '-';
    }

    public Human(String nik, String nama, char jenis_kelamin) {
        this.nik = nik;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    }

    public void setNIK(String nik) {
        this.nik = nik;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setJenisKelamin(char jenis_kelamin) {
        this.jenis_kelamin = jenis_kelamin;
    }

    public String getNIK() {
        return this.nik;
    }

    public String getNama() {
        return this.nama;
    }

    public char getJenisKelamin() {
        return this.jenis_kelamin;
    }

}