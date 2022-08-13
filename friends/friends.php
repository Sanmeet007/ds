<?php

function friends_problem($n)
{
    if ($n == 1 || $n == 0) return 1;
    return friends_problem($n - 1) + friends_problem($n - 2) * ($n - 1);
};

$friends = friends_problem(4);
echo $friends;

?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>

</body>

</html>