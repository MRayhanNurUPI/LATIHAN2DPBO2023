<?php

class Human {
    private $nik = "";
    private $nama = "";
    private $jenis_kelamin = '';

    public function __construct($nik = "", $nama = "", $jk = '') {
        $this->nik = $nik;
        $this->nama = $nama;
        $this->jenis_kelamin = $jk;
    }

    public function setNIK($nik) {
        $this->nik = $nik;
    }

    public function setNama($nama) {
        $this->nama = $nama;
    }

    public function setJenisKelamin($jenis_kelamin) {
        $this->jenis_kelamin = $jenis_kelamin;
    }

    public function getNIK() {return $this->nik; }
    public function getNama() {return $this->nama;}
    public function getJenisKelamin() {return $this->jenis_kelamin;}
}
?>