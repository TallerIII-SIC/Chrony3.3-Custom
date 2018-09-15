# Chrony3.3-Custom

## Instalacion

1. Correr el archivo `instalar.sh`
2. Ejecutar el comando `sudo chronyd -x` para que comience a correr el demonio de Chrony.

## Recuperacion de datos de medicion

Chrony guarda los datos que va obteniendo de cada paquete recibido en el directorio `/var/logs/chrony` y el archivo es `measurements.log` que tiene el siguiente formato:



|Date (UTC) Time|t1| t2 | t3|t4
----------------|--|----|---|--
|2018-09-15 02:35:07|1536978907.603147064|1536978896.156507014|1536978896.156507015|1536978907.789160731
|2018-09-15 02:35:09|1536978909.798120950|1536978898.356980323|1536978898.356980324|1536978910.012508670
|2018-09-15 02:35:12|1536978912.017609899|1536978900.572093963|1536978900.572093963|1536978912.206778585
