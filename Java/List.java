import java.util.ArrayList;

public class List {
    private ArrayList<Mahasiswa> listMahasiswa = new ArrayList<Mahasiswa>();

    public void tambahDataMhs(Mahasiswa mhsBaru) {
        listMahasiswa.add(mhsBaru);
    }

    public void tampilkanDataMhs() {
        if (listMahasiswa.isEmpty()) {
            System.out.println("Daftar Mahasiswa Kosong.");
        } else {
            System.out.println("=============== DAFTAR MAHASISWA ==============\n");

            int counter = 0;
            for (Mahasiswa it : listMahasiswa) {
                System.out.println("-------------------- " + (counter + 1) + " --------------------");
                System.out.println("NIK             : " + it.getNIK());
                System.out.println("NIM             : " + it.getNIM());
                System.out.println("Nama            : " + it.getNama());
                System.out.println("Jenis Kelamin   : " + it.getJenisKelamin());
                System.out.println("Program Studi   : " + it.getProdi());
                System.out.println("Fakultas        : " + it.getFakultas());
                System.out.println("Asal Universitas: " + it.getAsalUniv());
                System.out.println("Email           : " + it.getEmailUniv());
                System.out.println("-------------------- " + (counter + 1) + " --------------------\n");
                counter++;
            }
            System.out.println("");
        }
    }
}
