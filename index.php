<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP</title>
</head>
<body>

<? 

print "<b>Zmienne! </b> <br>";
$test=5;
print $test;
print "<br>";

$test+=3.215215;
print $test;
print "<br>";

$test = "73";
print $test;
print "<br>";

$opis = " - ucinska liczba";
print $test.$opis;

$a=2;
$b=10;

$wynik=$a+$b;
print "suma: ".$a." + ".$b." = ".$wynik."<br>";
$wynik=$a-$b;
print "różnica: ".$a." - ".$b." = ".$wynik."<br>";
$wynik=$a*$b;
print "suma: ".$a." * ".$b." = ".$wynik."<br>";
$wynik=$a/$b;
print "suma: ".$a." / ".$b." = ".$wynik."<br>";
$wynik=$a%$b;
print "suma: ".$a." % ".$b." = ".$wynik."<br>";
$wynik=$a**$b;
print "suma: ".$a." ** ".$b." = ".$wynik."<br>";

?>
    
</body>
</html>