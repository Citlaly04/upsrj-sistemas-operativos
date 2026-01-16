# Se instala linux-source para poder acceder al código fuente del kernel
sudo apt install linux-source

# Se entra a la carpeta donde se guardan los archivos del kernel
cd /usr/src

# Se muestran los archivos que hay en esta ruta
ls

# Se entra al directorio del código fuente del kernel
cd linux-source-5.15.0

# Se descomprime el archivo del kernel
sudo tar -xjf linux-source-5.15.0.tar.bz2

# Se entra a la carpeta donde se descomprimió el kernel
cd linux-source-5.15.0

# Se muestra el contenido del directorio
ls

# Se entra a la carpeta kernel
cd kernel

# Se muestran los archivos dentro del directorio kernel
ls

# Se entra al directorio sched, donde están los archivos del planificador
cd sched

# Se muestran los archivos del directorio sched
ls

# Se visualiza el contenido del archivo fair.c
cat fair.c
