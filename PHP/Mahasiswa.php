<?php
require "SivitasAkademik.php";

class Mahasiswa extends SivitasAkademik {
    private $nim;
    private $prodi;
    private $fakultas;

    public function __construct($nik="", $nama="", $jk='', $asalUniv = "", $emailUniv = "", $nim = "", $fakultas = "", $prodi = "") {
        parent::__construct($nik, $nama, $jk, $asalUniv, $emailUniv);
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }
    

    public function setNIM($nim) {
        $this->nim = $nim;
    }

    public function setProdi($prodi) {
        $this->prodi = $prodi;
    }

    public function setFakultas($fakultas) {
        $this->fakultas = $fakultas;
    }

    public function getNIM() {return $this->nim;}
    public function getProdi() {return $this->prodi;}
    public function getFakultas() {return $this->fakultas;}
}
?>