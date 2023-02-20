class Mahasiswa extends SivitasAkademik {
    private String nim, fakultas, prodi;

    public Mahasiswa() {
        this.nim = "";
        this.fakultas = "";
        this.prodi = "";
    }

    public Mahasiswa(String nik, String nama, char jenis_kelamin, String asalUniv, String emailUniv, String nim,
            String fakultas, String prodi) {
        super(nik, nama, jenis_kelamin, asalUniv, emailUniv);
        this.nim = nim;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }

    public Mahasiswa(String nim, String fakultas, String prodi) {
        this.nim = nim;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }

    public void setNIM(String nim) {
        this.nim = nim;
    }

    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    public String getNIM() {
        return this.nim;
    }

    public String getFakultas() {
        return this.fakultas;
    }

    public String getProdi() {
        return this.prodi;
    }

}
