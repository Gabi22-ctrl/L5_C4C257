#include <stdio.h>
#include "json.h" //Incluyo el archvio de cabecera que declara la función

int main() {
    crear_json("build/data.json"); //Se llama a la función declarada en el json.c
    return 0;
}
