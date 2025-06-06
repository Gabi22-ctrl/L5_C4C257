#include <stdio.h>
#include <cjson/cJSON.h>

void crear_json(const char *archivo_salida) {
   //se crea un objeto json
   cJSON *json = cJSON_CreateObject();
   cJSON_AddStringToObject(json, "name", "Hillary Gabriela Alfaro Vargas");
   cJSON_AddNumberToObject(json, "edad", 19);
   cJSON_AddStringToObject(json, "carnet", "C4C257");
   cJSON_AddStringToObject(json, "estudiante activo", "TRUE");

   // se convierte el objeto JSON  a un JSON string
   char *json_str = cJSON_Print(json);

   //se crea y se abre el archivo para poder escribir en el ('w')
   FILE *fp = fopen("data.json", "w");
   if (fp == NULL) {
       printf("Error: no se pudo abrir el archivo\n");
       return;
   }
   printf("%s\n", json_str);
   fputs(json_str, fp);
   fclose(fp); //se cierra el archivo
   //se libera 
   cJSON_free(json_str);
   cJSON_Delete(json);
   
}