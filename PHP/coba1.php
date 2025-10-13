<?php
$nim = "I.2510435";
$nama = "Utsman Dhani P";
$umur = 19;
$nilai = 99.999;
$status = TRUE;

echo "NIM   :".$nim. "<br>";
echo "Nama  : $nama<br>";
print "Umur :" .$umur;
print "<br>";

printf("Nilai : %.3f<br>", $nilai);
if ($status)
    echo "Status: Aktif";
else
    echo "Status: Tidak Aktif";



?>