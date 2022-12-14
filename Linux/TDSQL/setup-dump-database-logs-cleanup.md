# Configuration du controle des logs

https://www.tutos.eu/7193

````shell
sudo apt install rsyslog

systemctl enable rsyslog

systemctl start rsyslog

ss -utln

systemctl status rsyslog.service
````

![image](./../Images/TDSL3.png)


### Création d'une chain pour pouvoir autoriser et logger un flux avec IPTABLES

````shell
iptables -N LOGACCEPT

iptables -A LOGACCEPT -j LOG --log-prefix 'iptables:' -m limit --limit 2/min

iptables -A LOGACCEPT -j ACCEPT
````
Ensuite, j'ai utilisé cette chain dans les règles.

````shell
iptables -t filter -A INPUT -p tcp --dport 22 -j LOGACCEPT
````

J'ai ensuite créé un fichier de configuration pour iptables

````shell
sudo nano /etc/rsyslog.d/iptables.conf
````

J'y insère les requetes suivantes:

````shell
:msg, contains, "iptables:" -/var/log/mysql.log
& ~

:msg, regex, "^\[ *[0-9]*\.[0-9]*\] iptables: " -/var/log/mysql.log
& ~
````

La commande précédente enregistre tous les messages qui contiennent "iptables:" dans un fichier /var/log/mysql.log
La seconde ligne signifie qu'il n'est pas nécessaire de logger l'évènement précédent.

````shell
systemctl restart rsyslog.service
````

Maintenant je consulte mysql.log avec la commande

````shell
tail -f /var/log/mysql.log
````
````shell
nano /etc/logrotate.conf
````

Mais en ce qui concerne cette partie sur les logs, je n'ai pas encore bien compris l'utilisation...

J'ai donc changé mon fusil d'épaule et je me suis concentré sur l'envoi des logs avec la commande "echo".
J'ai donc rajouté dans le script.sh la requete suivante:

````shell
echo "sauvegarde effectuée" >> /var/log/database.log
````

Par la suite, j'ai compris que pour controler la taille du fichier pour les logs, je devais utilisé la commande "ulimit -S<-f> <Valeur>":

````shell
$ ulimit -Sf 300
````
L'option "-f" permet de controler la taille du fichier.

Seul problème est que je ne trouve pas comment vérifié si la commande a fonctionné.
