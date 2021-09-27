#!/bin/sh
# script.sh

DIRECTORY=/home/labo3/PruebasPermisos

sudo adduser labo3 #Se creal el nuevo usuario

sudo -u labo3 bash << EOF

	whoami

	mkdir $DIRECTORY #Directorio PruebasPermisos

	if [ -d "$DIRECTORY" ];
	then
	    echo "PruebasPermisos es directorio y fue creado exitosamente"
	else
	    echo "El directorio no fue creado"
	fi

	echo "Esta oraci´on es para probar permisos" > $DIRECTORY/LEER.txt

	if [ -e "$DIRECTORY/LEER.txt" ];
	then
	    echo "El archivo fue creado exitosamente"
	else
	    echo "El archivo no fue creado"
	fi 

	chmod -R 770 $DIRECTORY

	ls -l -R /home/labo3

EOF

whoami

touch $DIRECTORY/prueba.txt

echo "prueba de permisos" > $DIRECTORY/LEER.txt

sudo addgroup grupolabo3

sudo adduser $USER grupolabo3

sudo adduser labo3 grupolabo3

id $USER 

#exec su -l $USER

id $USER

sudo -u labo3 bash << EOF

	whoami

	chown -R labo3:grupolabo3 $DIRECTORY

	ls -l /home/labo3

EOF
whoami

touch $DIRECTORY/prueba.txt

ls $DIRECTORY

echo "prueba de permisos" >> $DIRECTORY/LEER.txt

cat $DIRECTORY/LEER.txt

sudo deluser $USER grupolabo3

id $USER

apt-get moo

exit
