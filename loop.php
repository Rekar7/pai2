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

    for($i=1;$i<=10;$i++)
    {
        print $i.", ";
    }
    print "<br>";

    for($i=10;$i>=1;$i--)
    {
        print $i.", ";
    }
    print "<br>";

    
    $wynik=0;
    for($i=1;$i<=10;$i++)
    {
        $wynik+=$i;
        print $wynik.", ";
    }
    print "Wynik całkowity: ".$wynik;
    print "<br>";

    ?>

</body>

</html>