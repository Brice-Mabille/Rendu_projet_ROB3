brice@brice-VirtualBox:~$ sudo apt update

brice@brice-VirtualBox:~$ sudo apt install mysql-server

brice@brice-VirtualBox:~$ sudo systemctl start mysql.service

brice@brice-VirtualBox:~$ sudo mysql

mysql> ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'BMatsql6';
mysql> exit

brice@brice-VirtualBox:~$ mysql -u root -p
mysql> CREATE USER 'brice'@'localhost' IDENTIFIED BY 'BMatsql6'

brice@brice-VirtualBox:~$ ls
Desktop  Documents  Downloads  Music  Pictures  Public  snap  Templates  Videos

brice@brice-VirtualBox:~$ cd Documents/

brice@brice-VirtualBox:~/Documents$ mkdir TDSQL

brice@brice-VirtualBox:~/Documents$ cd TDSQL/

brice@brice-VirtualBox:~/Documents/TDSQL$ wget https://www.mysqltutorial.org/wp-content/uploads/2018/03/mysqlsampledatabase.zip

brice@brice-VirtualBox:~/Documents/TDSQL$ ls
mysqlsampledatabase.zip

brice@brice-VirtualBox:~/Documents/TDSQL$ unzip mysqlsampledatabase.zip

brice@brice-VirtualBox:~/Documents/TDSQL$ ls
mysqlsampledatabase.sql  mysqlsampledatabase.zip

brice@brice-VirtualBox:~/Documents/TDSQL$ rm mysqlsampledatabase.zip

brice@brice-VirtualBox:~$ sudo mysql_secure_installation

brice@brice-VirtualBox:~$ sudo systemctl status mysql

brice@brice-VirtualBox:~$ sudo systemctl enable mysql

brice@brice-VirtualBox:~$ sudo mysql -u root -p

mysql> show databases;
mysql> exit
Bye

brice@brice-VirtualBox:~/Documents/TDSQL$ cp mysqlsampledatabase.sql a.sql

brice@brice-VirtualBox:~/Documents/TDSQL$ sudo apt install bzip2

brice@brice-VirtualBox:~/Documents/TDSQL$ bzip2 a.sql

brice@brice-VirtualBox:~/Documents/TDSQL$ mv a.sql.bz2 Tdsql.bz2

brice@brice-VirtualBox:~/Documents/TDSQL$ ls
mysqlsampledatabase.sql  Tdsql.bz2

brice@brice-VirtualBox:~/Documents/TDSQL$ touch horodatage.sh

brice@brice-VirtualBox:~/Documents/TDSQL$ open horodatage.sh




	
