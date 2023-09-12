<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Camagru </title>
</head>
    <body>
        <p>Déjà enregistré? c'est par ici</p>

        <form name="inscription" method="post" action="accueil.php">
            <input  type="text" name="mail" value= "Email"/><br/>
            <input type="password" name="pass" value="Password"/><br/>                
            <input type="submit" name="valider" value="Connexion"/>
        </form> 
        <p>Nouveau sur Camagru? </p>
        <form name="inscription" method="post" action="saisie.php">
    <input type="submit" name="inscription" value="Créer un compte" id="popupButton" />
</form>   
    </body>
</html>