<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ucinek</title>
</head>

<body>

    <?php

    for ($i = 1; $i <= 10; $i++) {
        print $i . ", ";
    }
    print "<br>";

    for ($i = 10; $i >= 1; $i--) {
        print $i . ", ";
    }
    print "<br>";


    $wynik = 0;
    for ($i = 1; $i <= 10; $i++) {
        $wynik += $i;
        print $wynik . ", ";
    }
    print "Wynik całkowity: " . $wynik;
    print "<br>";


    $wynik = 0;
    for ($i = 1; $i <= 4; $i++) {
        $wynik *= 1.08;
        $wynik += 200;
    }


    $wynik = 5;
    $wynik2 = 5;
    for ($i = 0; $i < 100; $i++) {
        $wynik2 += 10;
        $wynik += $wynik2;
    }
    print "Suma ciągu: " . $wynik2;
    print "<br>";


    $wynik = 0;
    for ($i = 1; $i <= 10; $i++) {
        for ($j = 1; $j <= 10; $j++) {
            $wynik += 1;
        }
    }
    print "Suma cegieł 2: " . $wynik;
    print "<br>";

    /////////////// 8.
    $wynik = 0;
    for ($i = 1; $i >= 12; $i++) {
        for ($j = 10; $j <= 1; $j--) {
            $wynik += 1;
        }
    }
    print "Suma cegieł 3: " . $wynik;
    print "<br>";


    $wynik = 0;
    for ($i = 1; $i >= 12; $i++) {
        for ($j = 10; $j <= 1; $j - +2) {
            $wynik += 2;
        }
    }
    print "Waga cegieł: " . $wynik;
    print "<br>";

    ///10 Symulacja działania prostego kalkulatora do zrobienia

    ///11

    for ($i = 15; $i <= 1; $i -= 5) {
        print "element: " . $i;
        print "<br>";
    }

    // 12 Oblicz sumę dwóch wylosowanych liczb w zakresie (-10;10). Alogrytma ma działac tak długo aż suma podanych liczbe będzie wynosiła 0. Podać ilość iteracji

    //13 Algorytm oblicza silnie zadeklarowanej liczby

    //14 Wypisuje na ekran ciąg N liczb, z których każda kolejna jest kwadratem poprzedniej liczby z ciągu. Warto sc pierwszej liczby podaje użytkownik.

    //15 Oblicz sumę oraz średnią z 10 losowych liczb z przedzialu <50,100>



    ?>

</body>

</html>