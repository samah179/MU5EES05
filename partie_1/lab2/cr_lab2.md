CR Lab2 – Git
Commandes utilisées
Installation des packages : sudo apt install git gitk git-email

Configuration de Git : git config --global user.name "samah" git config --global user.email arabsamah1@gmail.com git config --global user.name git config --global user.email

Création d’un répertoire test : mkdir test cd test

Création d’un fichier : echo "hello M2 syscom" > samah

Initialiser un dépôt : git init

Vérifier l’état : git status

Ajouter le fichier : git add samah git status

Premier commit : git commit -m "Premier commit"

Création d’un repo vide sur GitHub (via interface web)

Connecter et pousser : git remote add origin https://github.com/samah179/sys_temps_reel.git git push -u origin master

Mémoriser identifiants : git config credential.helper store

Création d’un README.md (via interface GitHub)

Mise à jour locale : git pull origin master

Clonage du repo : cd ~/Downloads git clone https://github.com/samah179/sys_temps_reel.git
