# Firmware Básico para la EDU-CIAA-NXP


Este repositorio es una verisón simplificada de [firmware_v3](https://github.com/epernia/firmware_v3), el cual contiene el firmware para trabajar con la placa EDU-CIAA-NXP y se encuentra en desarrollo. 


## Utilización

**Importante:** Antes de clonar este repositorio, hay que tener asegurado que la instalación del software de la CIAA se haya completado existosamente. Esto puede hacerse siguiendo las instrucciones de [este](https://github.com/epernia/software) repositorio.

El *firmware* es un projecto Makefile, es decir, un conjunto de directorios con archivos de código en C/C++/assembly y una serie de instrucciones de compilación contenidas en el archivo [Makefile](./Makefile). Estas instrucciones permiten ensamblar y linkear todos estos archivos para formar un binario que sea posible descargar a la placa. **No se recomienda editar el archivo Makefile. Para argegar instrucciones, crear los archivos .mk auxiliares correspondientes**.

El directorio [libs](./libs) contiene los módulos o librerías que van a utilizar los programas. Para que un programa compile correctamente, se utilizan como punto de partida las librerías [CMSIS Core](./libs/cmsis_core) y [board](./libs/board), las cuales contienen las instrucciones para llamar a la rutina principal (*main*) y para inicializar la placa correctamente. Es posible agregar módulos propios a este directorio y utilizarlos en el programa, pero deben seguirse las instrucciones de [este](./libs/Readme.md) archivo.

El directorio [projects](./projects) contiene los proyectos que se vayan desarrollando con el firmware. Para detalles sobre cómo crear y configurar un nuevo proyecto, ver [acá](./projects/Readme.md)
