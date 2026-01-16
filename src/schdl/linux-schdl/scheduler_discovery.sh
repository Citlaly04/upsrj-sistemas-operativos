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

## Pregunta de reflexión (obligatoria)

Responder dentro del script como comentario:

> ¿Por qué Linux no implementa directamente FCFS, SJF o RR como se ven en los libros?
# porque esos ejemplos son más teóricos y funcionan mejor para explicar conceptos.
# En la vida real, el sistema operativo tiene que manejar muchos procesos al mismo
# tiempo y no todos se comportan igual.
# Por eso Linux usa un planificador más avanzado, que se adapta mejor a diferentes
# situaciones y reparte el tiempo del CPU de una forma más justa.
