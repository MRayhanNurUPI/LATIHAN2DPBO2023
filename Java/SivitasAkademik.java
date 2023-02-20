public class SivitasAkademik extends Human {
    private String asal_universitas, email_edu;

    public SivitasAkademik() {
        this.asal_universitas = "";
        this.email_edu = "";
    }

    public SivitasAkademik(String asal_universitas, String email_edu) {
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    public SivitasAkademik(String nik, String nama, char jenis_kelamin, String asal_universitas, String email_edu) {
        super(nik, nama, jenis_kelamin);
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    public void setAsalUniv(String asal_universitas) {
        this.asal_universitas = asal_universitas;
    }

    public void setEmailUniv(String email_universitas) {
        this.email_edu = email_universitas;
    }

    public String getAsalUniv() {
        return this.asal_universitas;
    }

    public String getEmailUniv() {
        return this.email_edu;
    }
}
