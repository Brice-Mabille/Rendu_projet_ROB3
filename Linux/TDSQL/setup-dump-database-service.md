# Configurer le service

Pour configurer le service je me suis fié au tutoriel suivant:

https://tecadmin.net/run-shell-script-as-systemd-service

Je commence par m'accorder les droits sur le fichier:

````shell
$ sudo chmod +x script.sh
````

Je créé ensuite le fichier database.service et je le sauvegarde dans /lib/systemd/system/:

````shell
sudo nano /lib/systemd/system/database.service
````

J'écris ensuite le script pour le service qui se trouve dans le fichier: dump-database.service.md

````shell
sudo systemctl daemon-reload

sudo systemctl enable dump-database.service

sudo systemctl start dump-database.service

sudo systemctl status dump-database.service
````

Malheureusement, je n'obtiens pas ce qui est prévu, l'activation du service échoue.
