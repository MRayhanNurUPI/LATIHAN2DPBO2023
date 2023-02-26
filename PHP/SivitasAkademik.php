<?php
require "Human.php";

class SivitasAkademik extends Human {
    private $asal_universitas = "";
    private $email_edu = "";
    
    public function __construct($nik = "", $nama = "", $jk = '', $asalUniv = "", $emailUniv = "") {
        parent::__construct($nik, $nama, $jk);
        $this->asal_universitas = $asalUniv;
        $this->email_edu = $emailUniv;
    }

    public function setAsalUniv($asalUniv) {
        $this->asal_universitas = $asalUniv;
    }

    public function setEmailUniv($emailUniv) {
        $this->email_edu = $emailUniv;
    }

    public function getAsalUniv() {
        return $this->asal_universitas;
    }

    public function getEmailUniv() {
        return $this->email_edu;
    }
}
?>