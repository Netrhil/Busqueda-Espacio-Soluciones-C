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
    bool loopFichero = true;

    system("clear");

    while (loopFichero) {
        puts("_____________________________________________");
        printf("Ingrese el nombre del archivo *sin extension*: ");

        fgets(nombreArchivoEntrada, sizeof(nombreArchivoEntrada), stdin);
        len = strlen(nombreArchivoEntrada);
        if( nombreArchivoEntrada[len-1] == '\n' ) nombreArchivoEntrada[len-1] = 0;

        // Genera el path del directorio 
        getcwd(directorioProyecto, sizeof(directorioProyecto));

        strcat(directorioProyecto, "/src/ficheros/");
        strcat(directorioProyecto, nombreArchivoEntrada);
        strcat(directorioProyecto, ".txt");
        manejadorArchivos = fopen(directorioProyecto, "r");

        if(manejadorArchivos == NULL)
            puts("No hay fichero");
        else {
            loopFichero=false;
        }
       
    }
    


    int numero;
    int cantidadLinea = 0;
    int valorBillete;

    while (fscanf(manejadorArchivos, "%d", &numero) == 1) {

        if(cantidadLinea % 2 == 0) {
            valorBillete = numero;
        } else {
            switch (valorBillete) {
                case 20000:
                    monedero.cantidadVeinteMil = monedero.cantidadVeinteMil+ numero;
                    break;
                case 10000:
                    monedero.cantidadDiezMil = monedero.cantidadDiezMil+ numero;
                    break;
                case 5000:
                    monedero.cantidadCincoMil = monedero.cantidadCincoMil+ numero;
                    break;
                case 2000:
                    monedero.cantidadDosMil = monedero.cantidadDosMil+ numero;
                    break;
                case 1000:
                    monedero.cantidadUnMil = monedero.cantidadUnMil+ numero;
                    break;
                case 500:
                    monedero.cantidadQuinintos = monedero.cantidadQuinintos + numero;
                    break;
                case 100:
                    monedero.cantidadCien = monedero.cantidadCien+ numero;
                    break;
                case 50:
                    monedero.cantidadCincuenta = monedero.cantidadCincuenta+ numero;
                    break;
                case 10:
                    monedero.cantidadDiez = monedero.cantidadDiez + numero;
                    break;
                }
        }

        cantidadLinea++;
    }

    puts(" Carga exitosa!! ");

    fclose(manejadorArchivos); 

    sleep(1);
}