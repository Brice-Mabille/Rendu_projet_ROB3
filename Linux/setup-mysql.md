# Setup-MySQL

## Installation de MySQL:

Pour pouvoir installer MySQL, je me suis fié au tutoriel réalisé par DigitalOcean; les commandes d'installation sont mes suivantes:

```shell
brice@brice-VirtualBox:~$ sudo apt update

sudo apt install mysql-server

sudo systemctl start mysql.service
```

Par la suite, il est préférable de sécuriser la base de donnée:

````shell
sudo mysql

mysql> ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'BMatsql6';

mysql> exit
````

Mais lors de la mise en place de la sécurité, un problème m'est apparu, je pense avoir mal réagis au demandes faite par le terminal et ne trouvant pas la solution, je décide d'avancer en créant la base de donnée à partir du fichier donné.

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

rm mysqlsampledatabase.zip
````

Après avoir créé puis décompressé le fichier. Je réalise que l'étape de sécurité est importante; je relance alors la phase de sécurisation:

````shell
sudo mysql_secure_installation

sudo systemctl status mysql

sudo systemctl enable mysql

sudo mysql -u root -p

mysql> show databases;

mysql> exit

Bye
````

Cette fois ci, le problème a été résolu, la sécurité est mise en place. 

Par ailleurs, je duplique le fichier pour pouvoir en conserver un et donner l'extension "bz2" à l'autre:

````shell
cp mysqlsampledatabase.sql a.sql

sudo apt install bzip2

bzip2 a.sql

mv a.sql.bz2 Tdsql.bz2

brice@brice-VirtualBox:~/Documents/TDSQL$ ls

mysqlsampledatabase.sql  Tdsql.bz2
````
