# Chrony3.3-Custom

Esta es una version modificada del codigo del programa Chrony v3.3 cuya version original puede encontrarse en https://github.com/mlichvar/chrony/archive/3.3.zip

## Instalacion

1. Correr el archivo `instalar.sh`
2. Ejecutar el comando `sudo chronyd -x` para que comience a correr el demonio de Chrony.

## Recuperacion de datos de medicion

Chrony guarda los datos que va obteniendo de cada paquete recibido en el directorio `/var/logs/chrony` y el archivo es `measurements.log` que guarda los datos en el formato CSV equivalente a la siguiente tabla:



|t1[s]| t2[s] | t3[s]|t4[s]|phi[s]|phiAjustado[s]
----------------|--|----|---|--
1539402146.440543305|1539402146.439210094|1539402146.439258964|1539402146.453352419|-0.007678907|-0.000000000
1539402148.488918445|1539402148.487710534|1539402148.487757078|1539402148.501850475|-0.007613910|-0.000000000
1539402150.542540072|1539402150.543310773|1539402150.543357478|1539402150.557325751|-0.006558892|-0.007474248
