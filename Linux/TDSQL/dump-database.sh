#!/bin/bash

user="brice"
password="BMatsql6*"
BDD="classicmodels"

chemin="/home/brice/Documents/TDSQL/mysqlsampledatabase"
Date="$(date +%Y-%m-%d-%H-%M-%S)"
Fichier="${chemin}${Date}.sql"

mysqldump -u $user -p$password $BDD >$Fichier

echo "sauvegarde effectuée" >> /var/log/database.log

bzip2 ${Fichier}

n=1
for file in $(ls -t $chemin*); do
	if [ $n -gt 5 ]; then
		rm $file
	fi
	((n = n + 1))
done