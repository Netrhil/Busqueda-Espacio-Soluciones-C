#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void obtenerMonedero() {
    FILE *manejadorArchivos;
    char linea[150];
    char directorioProyecto[100];
    char nombreArchivoEntrada[50];
    int len;

    system("clear");

    puts("_____________________________________________");
    printf("Ingrese el nombre del archivo *sin extension*: ");
    getchar();

    fgets(nombreArchivoEntrada, sizeof(nombreArchivoEntrada), stdin);
    len = strlen(nombreArchivoEntrada);
    if( nombreArchivoEntrada[len-1] == '\n' ) nombreArchivoEntrada[len-1] = 0;

    // Genera el path del directorio 
    getcwd(directorioProyecto, sizeof(directorioProyecto));

    strcat(directorioProyecto, "/src/ficheros/");
    strcat(directorioProyecto, nombreArchivoEntrada);
    strcat(directorioProyecto, ".txt");
    puts(directorioProyecto);

    manejadorArchivos = fopen(directorioProyecto, "r");

    if(manejadorArchivos == NULL)
        puts("No hay fichero");

    int numero;
    int cantidadLinea = 0;
    int mayorCantidad = 0;
    int valorBillete;

    while (fscanf(manejadorArchivos, "%d", &numero) == 1) {

        if(cantidadLinea % 2 == 0) {
            valorBillete = numero;
        } else {
            if(numero > mayorCantidad) mayorCantidad = numero;

            switch (valorBillete) {
                case 20000:
                    monedero.cantidadVeinteMil =+ numero;
                    break;
                case 10000:
                    monedero.cantidadDiezMil =+ numero;
                    break;
                case 5000:
                    monedero.cantidadCincoMil =+ numero;
                    break;
                case 2000:
                    monedero.cantidadDosMil =+ numero;
                    break;
                case 1000:
                    monedero.cantidadUnMil =+ numero;
                    break;
                case 500:
                    monedero.cantidadQuinintos =+ numero;
                    break;
                case 100:
                    monedero.cantidadCien =+ numero;
                    break;
                case 50:
                    monedero.cantidadCincuenta =+ numero;
                    break;
                case 10:
                    monedero.cantidadDiez =+ numero;
                    break;
                }
        }

        cantidadLinea++;
    }

    monedero.mayor = mayorCantidad;
    fclose(manejadorArchivos); 
}