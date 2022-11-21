# Setup-MySQL

## Installation de MySQL:

Pour pouvoir installer MySQL, je me suis fié au tutoriel réalisé par DigitalOcean; les commandes d'installation sont les suivantes:

```shell
brice@brice-VirtualBox:~$ sudo apt update

sudo apt install mysql-server

sudo systemctl start mysql.service
```

Par la suite, il est préférable de sécuriser la base de donnée:

````shell
sudo mysql_secure_installation
````

Mais lors de la mise en place de la sécurité, un problème m'est apparu: le mot de passe n'est pas accepté. Je réalise alors les requètes suivantes:

````
sudo mysql

mysql> ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'BMatsql6*';

mysql> exit
````
L'erreur est alors corrigée.

Je décide de créer un nouvel utilisateur et lui accorder des privilèges:

````shell
mysql -u root -p

mysql> CREATE USER 'brice'@'localhost' IDENTIFIED BY 'BMatsql6*';

mysql> GRANT ALL PRIVILEGES ON *.* TO 'brice'@'localhost' WITH GRANT OPTION;

mysql> show databases;

mysql> exit
````

Je vérifie ensuite si MySQL fonctionne:

````shell
sudo systemctl status mysql.service
````

MySQL est alors opérationnel.

## Importation de la base de donnée

Je créé alors un fichier dans lequel j'importe la base de donnée:

````shell
brice@brice-VirtualBox:~$ ls

Desktop  Documents  Downloads  Music  Pictures  Public  snap  Templates  Videos

cd Documents/

mkdir TDSQL

cd TDSQL/

wget https://www.mysqltutorial.org/wp-content/uploads/2018/03/mysqlsampledatabase.zip

unzip mysqlsampledatabase.zip
````

Par ailleurs, je duplique le fichier pour pouvoir en conserver un et donner l'extension "bz2" à l'autre:

````shell
cp mysqlsampledatabase.sql copie.sql

sudo apt install bzip2

bzip2 copie.sql

mv copie.sql.bz2 Tdsql.bz2

brice@brice-VirtualBox:~/Documents/TDSQL$ ls

mysqlsampledatabase.sql  mysqlsampledatabase.zip Tdsql.bz2 
````

J'importe ensuite la base de donnée dans MySQL:

````shell
mysql -u brice -p < /home/brice/Documents/TDSQL/mysqlsampledatabase.sql

mysql -u brice -p

mysql> show databases;

mysql> use classicmodels;

mysql> show tables;
````

![image](C:\Users\brice\OneDrive\Documents\GitHub\Rendu_projet_ROB3\Linux\Images\TDSQL.jpg)

![image](C:\Users\brice\OneDrive\Documents\GitHub\Rendu_projet_ROB3\Linux\Images\TDSQL2.png)

