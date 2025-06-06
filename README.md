# L5_C4C257
LABORATORIO 5 
En primer lugar para compilar el programa debe tener instalado la libreria JSON. Esto puede hacerce con el comando sudo apt install libcjson-dev. 
Para la compilación del programa con Make, se debe dirigir a la rama de este repositorio denominada MAKE y descargar los archivos de este. Para la compilación se debe colocar en la raíz del proyecto y usar el comando make, seguido de ./build/programa. Se genera el archivo json dentro de la carpeta build. Si requiere limpiar lo generado se debe usar el comando make clean.

En segundo lugar, para la compilación con CMake se debe ir a la rama Make dentro del repositorio y descargar el archivo txt. Despues, dentro de la raíz del programa se debe ejecutar cmake .., seguido de cmake --build . y luegp compilar el ejecutable ./archivo_json.

En tercer lugar, para compilarlo con Meson. Se debe dirigir a la rama del repositorio llamada Meson y descargar los archivos que se encuentran en esta. El archivo llamado meson.build debe ser guardado dentro de la carpeta src mientras que el meson.build1 puede permanecer dentro de la raiz del proyecto. 
Para compilarlo debe usar el comando meson setup builddir, seguido de meson compile -C builddir y luego ./builddir/src/archivo_json.

