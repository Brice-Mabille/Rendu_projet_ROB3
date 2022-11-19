* Un script de base de sauvegarde de base de données

#!/bin/bash

user="brice"
password="BMatsql6*"
BDD="classicmodels"

chemin="/home/brice/Documents/mysqlsampledatabase/"
Prefix="dump_${BDD}"
Nom="${Prefix}_$(date +%Y-%m-%d-%H-%M-%S)"
Fichier="${chemin}${Nom}.sql"

mysqldump -u $user -p$password $BDD >$Fichier

# find $chemin -maxdepth 1 -name "${Prefix}*"

n=1
for file in $(ls -t $chemin$Prefix*); do
	if [ $n -gt 5 ]; then
		rm $file
	fi
	((n = n + 1))
done