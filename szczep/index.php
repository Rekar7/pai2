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

    $showed = array();

    $checker = false;
    $checker2 = true;

    for ($i = 0; $i < 10; $i++) {

        while ($checker == false) {
            $showed[$i] = rand(0, 9);

            if ($i == 0) {
                $checker = true;
            }

            if ($i >= 1) {
                for ($j = 0; $j < $i; $j++) {
                    if ($letterTab[$i] == $showed[$j]) {
                        $checker2 = false;
                    }
                    if ($checker2 == true) {
                        $showed[$i] = $letterTab[$i];
                    }
                }
                $checker2 = true;
            }
        }
        $checker = false;
    }

    print "<br>";
    print implode($letterTab);

    ?>

    <form action="index.php" method="GET">
        <input type=number name="n1" required><br>
        <input type=number name="n2" required><br>
        <input type=number name="n3" required><br>
        <input type=number name="n4" required><br>
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