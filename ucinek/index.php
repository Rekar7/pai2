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


    function suma($a, $b)
    {
        print $a + $b . "<br>";;
    }

    function podstawy($a, $b)
    {
        print $a + $b . "<br>";
        print $a - $b . "<br>";
        print $a * $b . "<br>";
        print $a / $b . "<br>";
    }

    function kalkulator($a, $b, $dzialanie)
    {
        if ($dzialanie == 1) {
            print $a + $b . "<br>";
        }
        if ($dzialanie == 2) {
            print $a - $b . "<br>";
        }
        if ($dzialanie == 3) {
            print $a * $b . "<br>";
        }
        if ($dzialanie == 4) {
            print $a / $b . "<br>";
        }
    }

    function maks($a, $b, $c)
    {
        $liczby = array($a, $b, $c);
        print max($liczby) . "<br>";
    }

    function wzrost($wzrost)
    {
        if ($wzrost < 150) {
            print "niski<br>";
        } else if ($wzrost > 180) {
            print "wysoki<br>";
        } else if (($wzrost >= 150) && ($wzrost <= 180)) {
            print "sredni<br>";
        }
    }

    function bmi($waga, $wzrost)
    {
        if ($waga / ($wzrost ** 2) < 18.5) {
            print "za mało<br>";
        }
        if ($waga / ($wzrost ** 2) > 25) {
            print "za duzo<br>";
        }
        if (($waga / ($wzrost ** 2) < 18.5) && ($waga / ($wzrost ** 2) > 25)) {
            print "OK<br>";
        }
    }

    function starszy($data1, $data2)
    {
        if ($data1 > $data2)
            print $data1 . " jest młodszy " . $data2 . "<br>";
        else
            print $data1 . " is older than " . $data2 . "<br>";
    }

    function przestepny($rok)
    {
        if ($rok % 4 == 0) {
            print "rok jest przestepny<br>";
        } else {
            print "rok nie jest przestepny<br>";
        }
    }

    function sila($haslo)
    {
        $dobre = false;
        $dobre2 = false;
        $dobre3 = false;
        $dobre4 = false;
        $poziom = "slabe<br>";
        $length = strlen($haslo);
        if ($length <= 4) {
            $poziom = "slabe<br>";
        } else if ($length <= 8) {
            $poziom = "srednie<br>";
        } else if ($length > 8) {
            $poziom = "mocne<br>";
        }

        for ($i = 0; $i <= strlen($haslo) - 1; $i++) {
            if (is_numeric($haslo[$i])) {
                $dobre = true;
                break;
            }
            if (ctype_upper($haslo[$i])) {
                $dobre2 = true;
                break;
            }
            if (ctype_lower($haslo[$i])) {
                $dobre3 = true;
                break;
            }
        }

        if (preg_match('[@_!#$%^&*()<>?/|}{~:]', $haslo)) {
            $dobre4 = true;
        }

        if (($dobre == false) || ($dobre2 == false) || ($dobre3 == false) || ($dobre4 == false)) {
            $poziom = "slabe<br>";
        }

        print $poziom;
    }

    function trojkat($a, $b, $c)
    {

        if ($a + $b > $c) {
            print "Trojkat dziala<br>";
        } else {
            print "Trojkat nie dziala<br>";
        }
    }



    suma(1, 1);
    podstawy(1, 2);
    kalkulator(15, 2, 1);
    wzrost(185);
    bmi(78, 185);
    starszy("1998-11-24", "1997-03-26");
    przestepny(2012);
    sila("UcińskieHaslo1!");
    trojkat(12,2,9)

    ?>

</body>

</html>