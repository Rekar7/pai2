<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="./style.css">
</head>

<body>

    <h1>ZADANIE BOJOWE PAI</h1>
    <h2>INSTRUKCJE WARUNKOWE</h2>
    <?

    $a = 1;
    $b = 2;
    $wynik = 0;
    if ($a > $b) {
        print "A > B<br>";
    } else {
        print "A < B<br>";
    }

    $c = 6;
    $d = 4;

    if ($c > $d) {
        print "C > D<br>";
    } else if ($c < $d) {
        print "C < D<br>";
    } else {
        print "C = D";
    }

    /////////////////////////////////////////////////////////////////////////////

    if ($b != 0) {
        $wynik = $a / $b;
        print "1. " . $wynik . "<br>";
    } else {
        print "Nie dziel przez zero!<br>";
    }

    /////////////////////////////
    if (($b != 0) && ($d != 0)) {
        $wynik = $a / $b + $c / $d;
        print "2. " . $wynik . "<br>";
    } else {
        print "Nie dziel przez zero!<br>";
    }
    //////////////////////////////////////////

    if ($b - 4 != 0) {
        $wynik = ($a + 6) / ($b - 4);
        print "3. " . $wynik . "<br>";
    } else {
        print "Nie dziel przez zero!<br>";
    }
    ////////////////////////////////////////////////

    if ($a % 2 == 0) {
        print "Liczba a jest parzysta<br>";
    } else {
        print "Liczba a jest nieparzysta<br>";
    }
    //////////////////////////////////////////////////////////////////

    if ($a % $b == 0) {
        print "liczba a jest podzielna przez liczbe b<br>";
    } else {
        print "liczba a nie jest podzielna przez liczbe b<br>";
    }
    /////////////////////////////////////////////////////////

    if ($a > 0) {
        print "liczba a jest dodatnia<br>";
    } else if ($a < 0) {
        print "Liczba a jest ujemna<br>";
    } else {
        print "Liczba a to zero<br>";
    }
    ////////////////////////////////////////////////////////////////////////

    if (($a > $b) && ($a > $c)) {
        print "Liczba a jest najwi??ksza<br>";
    } else if (($b > $a) && ($b > $c)) {
        print "Liczba b jest najwi??ksza<br>";
    } else {
        print "Liczba c jest najwi??ksza<br>";
    }
    ////////////////////////////////////////////////////////////////////////////

    if (($a > $b) && ($a > $c)) {
        print "1. " . $a . " | ";
        if ($b > $c) {
            print "2. " . $b . " |  3. " . $c . "<br>";
        } else {
            print "2. " . $c . " |  3. " . $b . "<br>";
        }
    } else if (($b > $a) && ($b > $c)) {
        print "1. " . $b . " | ";
        if ($a > $c) {
            print "2. " . $a . " |  3. " . $c . "<br>";
        } else {
            print "2. " . $c . " |  3. " . $a . "<br>";
        }
    } else {
        print "1. " . $c . " | ";
        if ($b > $a) {
            print "2. " . $b . " |  3. " . $a . "<br>";
        } else {
            print "2. " . $a . " |  3. " . $b . "<br>";
        }
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////

    $day = 18;
    $month = 10;
    $year = 2004;
    $yearT = 2022;
    $monthT = 10;
    $dayT = 19;

    if ($yearT - $year > 18) {
        print "Osobnik jest pe??noletni<br>";
    } else if (($yearT - $year == 18) && ($monthT - $month > 0)) {
        print "Osobnik jest pe??noletni<br>";
    } else if (($yearT - $year == 18) && ($monthT - $month == 0) && ($dayT - $day >= 0)) {
        print "Osobnik jest pe??noletni<br>";
    } else {
        print "Osobnik nie jest pe??noletni<br>";
    }
    ////////////////////////////////////////////////////////////////////////

    $znak = 'a';

    if (is_numeric($znak) == true) {
        print "znak " . $znak . " jest cyfr??<br>";
    } else if (ctype_upper($znak) == true) {


        print "znak " . $znak . " jest du???? liter??<br>";
    } else if (ctype_upper($znak) == false) {
        print "znak " . $znak . " jest ma???? liter??<br>";
    } else {
        print "znak " . $znak . " jest innym znakiem<br>";
    }
    //////////////////////////////////////////////////////////////////////

    $liczba = 454;

    $liczba = strval($liczba);

    if (strrev($liczba) == $liczba) {
        print "Liczba " . $liczba . " jest palindromem<br>";
    } else {
        print "Liczba " . $liczba . " nie jest palindromem<br>";
    }
    /////////////////////////////////////////////////////////////////////////////////

    $liczba = 22;

    if ((($liczba / 10) % 10) % 2 == 0) {
        print "Pierwsz cyfra w liczbie " . $liczba . " jest parzysta<br>";
    } else {
        print "Pierwsz cyfra w liczbie " . $liczba . " nie jest parzysta<br>";
    }

    if (($liczba % 10) % 2 == 0) {
        print "Druga cyfra w liczbie " . $liczba . " jest parzysta<br>";
    } else {
        print "Druga cyfra w liczbie " . $liczba . " nie jest parzysta<br>";
    }


    if ((($liczba / 10) % 10) + ($liczba % 10) == 4) {
        print "Suma obu cyfr w liczbie " . $liczba . " jest r??wna 4<br>";
    } else {
        print "Suma obu cyfr w liczbie " . $liczba . " nie jest r??wna 4<br>";
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////


    ?>

</body>

</html>