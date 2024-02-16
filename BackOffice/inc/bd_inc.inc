<?php
$server="Localhost";
$login="jfv";
$password="jfv5d946dd5eeaa0";
$database="jfv_catalogo";

$conexao=mysqli_connect($server,$login,$password) or die("Mysql Server error");
mysqli_set_charset($conexao,"utf8");
mysqli_select_db($conexao,$database) or die("Base de Dados error");
?>