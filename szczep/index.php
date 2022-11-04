<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>

    <?php

    // $tablica = array();
    // $tablica[0]=1;
    // $tablica[1]=2;
    // $tablica[2]=3;
    // $tablica[3]=4;
    // $tablica[4]=5;

    // $tab2 =  array(1,2,3,4,5,6,7,8,9,10);

    // print "tab1: ".$tablica[2]."<br>";
    // print "tab2: ".$tab2[3]."<br>";

    // foreach($tab2 as $x)
    // {
    //     print "tab2: ".$x."<br>";
    // }

    $tab1 =  array(7, 3, 1, 6, 9, 5, 4, 10, 2, 2);

    print "tab1: " . $tab1[4] . "<br>";
    $tab1[6] = 12;

    $tab2 = array();

    $i = 0;
    foreach ($tab1 as $x) {
        $tab2[$i] = $x;
        $i++;
    }

    $tab3 = array();

    for ($i = 0; $i < 10; $i++) {
        $tab3[$i] = $tab1[$i] + $tab2[$i];
    }

    $j = 0;
    for ($i = 9; $i >= 0; $i--) {
        $tab2[$j] = $tab1[$i];
        $j++;
    }

    //////////////////////////////////////////

    $userTab = array($_GET['n1'], $_GET['n2'], $_GET['n3'], $_GET['n4']);

    $biggest = 0;
    $smallest = 0;
    for ($i = 1; $i < 4; $i++) {
        if (($userTab[$i] > $userTab[$i - 1]) && ($i == 1)) {
            $biggest = $userTab[$i];
        } else if ($i == 1) {
            $biggest = $userTab[$i - 1];
        }

        if (($userTab[$i] < $userTab[$i - 1]) && ($i == 1)) {
            $smallest = $userTab[$i];
        } else if ($i == 1) {
            $smallest = $userTab[$i - 1];
        }


        if ($i > 1) {
            if ($userTab[$i] > $biggest) {
                $biggest = $userTab[$i];
            }
            if ($userTab[$i] > $smallest) {
                $smallest = $userTab[$i];
            }
        }
    }

    $wynik = 0;
    foreach ($userTab as $x) {
        $wynik += $x;
    }
    $wynik = $wynik / 4;

    $liczbaTrzy = 0;
    foreach ($userTab as $x) {
        if ($x == 3) {
            $liczbaTrzy++;
        }
    }

    sort($userTab);


    $mediana = ($biggest - $smallest) / 2 + $smallest;

    //już jest posortowane do największej więc wystaczy wyświetlić

    for ($i = 0; $i < 3; $i++) {
        print "tabUserSmall: " . $userTab[$i] . "<br>";
    }

    for ($i = 1; $i < 4; $i++) {
        print "tabUserBig: " . $userTab[$i] . "<br>";
    }

    for ($i = 0; $i < 4; $i++) {
        $userTab[$i] = $userTab[$i] ** 2;
    }


    $parzyste = 0;
    $nieparzyste = 0;

    for ($i = 0; $i < 4; $i++) {
        if ($userTab[$i] % 2 == 0) {
            $parzyste++;
        } else {
            $nieparzyste++;
        }
    }

    $podzielnePrzezTrzy = 0;
    for ($i = 0; $i < 4; $i++) {
        if ($userTab[$i] % 3 == 0) {
            $podzielnePrzezTrzy++;
        }
    }

    /////////////////////////////////////////////////////////////////////////

    $letterTab = array($_GET['a1'], $_GET['a2'], $_GET['a3'], $_GET['a4'], $_GET['a5'], $_GET['a6'], $_GET['a7'], $_GET['a8'], $_GET['a9'], $_GET['a10']);

    $wyraz = $_GET['wyraz'];

    for ($i = 0; $i < 10; $i++) {
        $letterTab[$i] = $wyraz[$i];
    }

    for ($i = 0; $i < 10; $i++) {
        $letterTab[$i] = strtoupper($letterTab[$i]);
    }


    print implode($letterTab);

    print "<br>";

    for ($i = 0; $i < 10; $i++) {
        print "losowo: " . $letterTab[rand(0, 9)] . "<br>";
    }



    print "<br>";
    print implode($letterTab);

    /////////////////////////////////////////////////////////////////////

    $liczby = array();

    for ($i = 0; $i < 100; $i++) {
        $liczby[$i] = rand(0, 1000000);
    }

    print "<br>Najwyższa wartość: " . max($liczby) . "<br>";

    for ($i = 0; $i < 100; $i++) {
        if ($liczby[$i] % 2 != 0) {
            print "<br>Nieparzyste: " . $liczby[$i] . "<br>";
        }
    }

    for ($i = 0; $i < 100; $i += 2) {

        print "<br>Nieparzyste indexy: " . $liczby[$i] . " o indeksie: " . $i . "<br>";
        if ($i == 0) {
            $i++;
            print "<br>Nieparzyste indexy: " . $liczby[$i] . " o indeksie: " . $i . "<br>";
        }
    }

    $wPrzedziale = array();
    $ileLiczb = 0;
    for ($i = 0; $i < 100; $i++) {
        if (($liczby[$i] >= 5) && ($liczby[$i] < 15)) {
            $wPrzedziale = $i;
            $ileLiczb++;
        }
    }
    print "<br>W przedziale jest " . $ileLiczb . " liczb.<br>";

    foreach ($wPrzedziale as $x) {
        print "<br>W przediale jest liczba: " . $liczby[$x] . ".<br>";
    }

    $roznica = array();
    $roznicaIndeks = 0;
    for ($i = 0; $i < 100; $i++) {
        $roznica[$i] = $liczby[$i] - $_GET['a'];

        if ($roznica < 0) {
            $roznica[$i] = $roznica[$i] * (-1);
        }
    }

    for ($i = 0; $i < 100; $i++) {
        if ($roznica[$i] == min($roznica)) {
            $roznicaIndeks = $i;
        }
    }

    print "<br>Najbliżej jest liczba " . $_GET['a'] . " jest liczba: " . $liczby[$roznicaIndeks] . ".<br>";

    $przednik = 0;
    $nastepnik = 0;
    for ($i = 0; $i < 100; $i++) {
        if ($liczby[$i] == min($liczby)) {
            $przednik = $i - 1;
            $nastepnik = $i + 1;
        }
    }

    $dziesiecTab = array();
    $dziesiecIndeks = 0;
    for ($i = 0; $i < 100; $i++) {
        if ($liczby[$i] > 10) {
            $dziesiecTab[$dziesiecIndeks] = $liczby[$i];
            $dziesiecIndeks++;
        }
    }

    $liczby2 = array();
    for ($i = 0; $i < 100; $i++) {
        $liczby2[$i] = 0;
        for ($j = 0; $j <= $i; $j++) {
            $liczby2[$i] += $liczby[$j];
        }
    }

    rsort($liczby2);

    $indeksy = array();
    for ($i = 0; $i < 100; $i++) {
        $powtorzenia = 0;
        for ($j = 0; $j < 100; $j++) {
            if ($liczby2[$i] == $liczby2[$j]) {
                $indeksy[$powtorzenia] = $j;
                $powtorzenia++;
            }
        }
        if ($powtorzenia > 3) {
            for ($j = 0; $j < $powtorzenia; $j++) {
                print "<br>Powtarza się: " . $liczby2[$indeksy[$j]] . ".<br>";
            }
        }
    }


    ////////////////////////////////////////////////////////////////////////////////////////////

    $fiboTab = array_fill(0, 100, NULL);
    $fiboTab[0]=0;
    $fiboTab[1]=1;
    $fiboTab[2]=1;
    for($i=3;$i<100;$i++)
    {
        $fiboTab[$i]=$fiboTab[$i-1]+$fiboTab[$i-2];
    }

    for($i=0;$i<100;$i++)
    {
        $fiboTab[$i]=2**($i+1);
    }

    $fiboTab[0]=3;
    for($i=1;$i<100;$i++)
    {
        $fiboTab[$i]=$fiboTab[$i-1]+3;
    }

    $fiboTab[0]=2;
    for($i=1;$i<100;$i++)
    {
        $fiboTab[$i]=$fiboTab[$i-1]*2;
    }




    ?>

    <form action="index.php" method="GET">
        <input type=number name="n1" required><br>
        <input type=number name="n2" required><br>
        <input type=number name="n3" required><br>
        <input type=number name="n4" required><br>
        <label>Liczba a</label>
        <input type=number name="a" required><br>
        text
        <input type=text name="a1" required><br>
        <input type=text name="a2" required><br>
        <input type=text name="a3" required><br>
        <input type=text name="a4" required><br>
        <input type=text name="a5" required><br>
        <input type=text name="a6" required><br>
        <input type=text name="a7" required><br>
        <input type=text name="a8" required><br>
        <input type=text name="a9" required><br>
        <input type=text name="a10" required><br>
        wyraz
        <input type=text name="wyraz" required><br>
        <input type=submit value="szzep">
    </form>


</body>

</html>