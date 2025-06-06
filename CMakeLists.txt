cmake_minimum_required(VERSION 3.0)
project(LAB5)

# Incluir el directorio donde están los headers
include_directories(src)

# Crear el ejecutable indicando los archivos fuente directamente
add_executable(archivo_json
    src/main.c
    src/json.c
    
)
find_library(CJSON_LIB cjson REQUIRED)
target_link_libraries(archivo_json ${CJSON_LIB})