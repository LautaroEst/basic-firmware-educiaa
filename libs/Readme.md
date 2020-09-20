# Carpeta de módulos utilizables en la EDU-CIAA

Este directorio contiene los módulos que utilizarán en un proyecto determinado.

Para incluir un nuevo módulo, debe crearse una carpeta que contenga todos los archivos correspondientes a ese módulo junto con un archivo `module.mk` en el cual se incluyan:

* La dirección de los archivos fuente (*.c*, *.cpp*, *s*) en una variable de Makefile llamada `SRC` sobreescriba diferencialmente a la ya definida en el archivo Makefile
* La dirección de los encabezados (archivos *.h*) en una variable `INC` de igual características que `SRC`
* Los flags correspondientes para declarar estos directorios en el proceso de compilación.

Para más información, tomar como ejemplo los módulos *board* y *cmsis_core* del repositorio actual, o los módulos incluídos en el repositorio [firmware_v3](https://github.com/epernia/firmware_v3/tree/master/libs).

IMPORTANTE: Los módulos *board* y *cmsis_core* deben estar incluidos obligatoriamente para bajar el programa a la placa EDU-CIAA.
