#Compilador
CC = gcc

# Carpeta con archivos fuente
SRC_DIR = src

#Carpeta de salida
BUILD_DIR = build

# Archivos fuente (sin cJSON.c)
SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/json.c

# Nombre del ejecutable final
TARGET = $(BUILD_DIR)/programa

#Flags del compilador (incluye -Wall para advertencias)
CFLAGS = -Wall -I$(SRC_DIR)

#Flags del enlazador (linkea con cJSON instalado en el sistema)
LDFLAGS = -lcjson

#Regla por defecto
all: $(TARGET)

#Regla para compilar el ejecutable
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)

#Regla para limpiar
clean:
	rm -f $(TARGET)
	rm -f $(BUILD_DIR)/*.json
	rm -f data.json
