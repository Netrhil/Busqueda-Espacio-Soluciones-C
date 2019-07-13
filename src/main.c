#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "estructuras/estructuras.h"
#include "controlador-ficheros/leer.h"

int main(int argc, char **argv){
    bool enPrograma = true;
    
    char entradaUsuarioMenu;
    
    system("clear");
    
    puts("_____________________________________________");
    puts("---------------- Bienvenido! ----------------");
    puts("");

    while(enPrograma) {

        puts(" Escoga una opcion: ");
        puts("  1) Cargar archivo con dinero.");
        puts("  2) Calcular vuelto.");
        puts("  3) Salir.");
        puts("_____________________________________________");
        printf("Escoga su opcion: ");
        char opcion = getchar();
        fflush(stdin);

        switch (opcion) {
            case '1':
                obtenerMonedero();
                printf(" %d\n", monedero.cantidadVeinteMil);
                printf(" %d\n", monedero.cantidadUnMil);
                printf(" %d\n", monedero.cantidadCincuenta);
                printf(" %d\n", monedero.cantidadDiez);
                printf(" %d\n", monedero.cantidadDiezMil);
                
                break;
            case '2':

                break;
            case '3':
                puts("Adios!");
                enPrograma = false;
                break;
            
            default:
                puts("Opcion invalida :( ");
        }
    }

    return 0;
}