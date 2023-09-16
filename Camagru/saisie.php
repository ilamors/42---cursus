<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Camagru</title>
</head>
    <body>
        <form name="inscription" method="post">
            <label>Saisissez votre pseudo:</label><br>
            <input  type="text" name="username" value= "username"/><br>
            <label>Saisissez votre email:</label><br>
            <input  type="text" name="mail" value= "email"/><br>
            <label>Saisissez votre mot de passe:</label><br>
            <input  type="password" name="password" value= "mot de passe"/><br>
            <label>Repetez votre mot de passe:</label><br>
            <input  type="password" name="password" value= "mot de passe"/><br>
            <label>Saisissez votre date de naissance:</label><br>
            <input  type="date" name="birth" value= "date de naissance"/><br>
            <label>Saisissez votre pays:</label><br>
            <input  type="text" name="pays" value= "pays"/><br>
            <br>
            <input type= "checkbox" id="newsletter" name="newsletter"/> J'accepte de rejoindre la liste de diffusion Camagru<br>
            <input type= "checkbox" id="accord" name="accord"/> <a href="accord.php">En cliquant sur "Créer un compte", vous acceptez les conditions de service Camagru  et notre politique de confidentialité</a><br>
            <input type="submit" name="valider" value="Créer un compte"/>
        </form>        
        <br>
        <p>Vous avez déjà un compte ? <a href="accueil.php">C'est par ici</a></p>
        
        <?php
            if(isset($_POST['valider'])){
                if(isset($_POST["newsletter"])){
                    echo "vous acceptez de recevoir la newsletter<br>";
                }
                if(isset($_POST['accord'])){
                    echo "vous acceptez notre polique de confidentialité<br>";
                }
                if(empty($_POST["newsletter"])){
                    echo "pas de newsletter.ok<br>";
                }
                    if(empty($_POST['accord'])){
                    echo "vous ne pouvez vous inscrire";
                }
            }
        ?>
    </body>
</html>