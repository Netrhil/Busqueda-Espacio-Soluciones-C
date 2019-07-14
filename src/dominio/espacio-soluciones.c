#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int solucion[9];
int numeroSoluciones;
Solucion *soluciones;

void sumarPos8(){
    if(monedero.cantidadVeinteMil != 0){
        if(monedero.cantidadVeinteMil < solucion[8] + 1 ) {
            solucion[8] = 0;
          
        } else {
            solucion[8] ++;
        }
    }
}

void sumarPos7(){
    if(monedero.cantidadDiezMil == 0) sumarPos8();
    else {
        if(monedero.cantidadDiezMil < solucion[7] + 1 ) {
            solucion[7] = 0;
            sumarPos8();
        } else {
            solucion[7] ++;
        }
    }

}

void sumarPos6(){
    if(monedero.cantidadCincoMil == 0) sumarPos7();
    else {
        if(monedero.cantidadCincoMil < solucion[6] + 1 ) {
            solucion[6] = 0;
            sumarPos7();
        } else {
            solucion[6] ++;
        }
    }

}

void sumarPos5(){
    if(monedero.cantidadDosMil == 0) sumarPos6();
    else {
        if(monedero.cantidadDosMil < solucion[5] + 1 ) {
            solucion[5] = 0;
            sumarPos6();
        } else {
            solucion[5] ++;
        }
    }
}

void sumarPos4(){

    if(monedero.cantidadUnMil == 0) sumarPos5();
    else {
        if(monedero.cantidadUnMil < solucion[4] + 1 ) {
            solucion[4] = 0;
            sumarPos5();
        } else {
            solucion[4] ++;
        }
    }

}


void sumarPos3(){
    if(monedero.cantidadQuinintos == 0) sumarPos4();
    else {
        if(monedero.cantidadQuinintos < solucion[3] + 1 ) {
            solucion[3] = 0;
            sumarPos4();
        } else {
            solucion[3] ++;
        }
    }

}

void sumarPos2(){
    if(monedero.cantidadCien == 0) sumarPos3();
    else {
        if(monedero.cantidadCien < solucion[2] + 1 ) {
            solucion[2] = 0;
            sumarPos3();
        } else {
            solucion[2] ++;
        }
    }
}

void sumarPos1(){
    if(monedero.cantidadCincuenta == 0) sumarPos2();
    else {
        if(monedero.cantidadCincuenta < solucion[1] + 1 ) {
            solucion[1] = 0;
            sumarPos2();
        } else {
            solucion[1] ++;
        }
    }

}

void sumarPos0(){
    if(monedero.cantidadDiez == 0) sumarPos1();
    else {
        if(monedero.cantidadDiez < solucion[0] + 1 ) {
            solucion[0] = 0;
            sumarPos1();
        } else {
            solucion[0] ++;
        }
    }
}


int ** generarEspacios() {
    numeroSoluciones = 0;
    solucion[0] = 0;
    solucion[1] = 0;
    solucion[2] = 0;
    solucion[3] = 0;
    solucion[4] = 0;
    solucion[5] = 0;
    solucion[6] = 0;
    solucion[7] = 0;
    solucion[8] = 0;
 
    while(
       !( monedero.cantidadDiez == solucion[0] &&
        monedero.cantidadCincuenta == solucion[1] &&
        monedero.cantidadCien == solucion[2] &&
        monedero.cantidadQuinintos == solucion[3] &&
        monedero.cantidadUnMil == solucion[4] &&
        monedero.cantidadDosMil == solucion[5] &&
        monedero.cantidadCincoMil == solucion[6] &&
        monedero.cantidadDiezMil == solucion[7] &&
        monedero.cantidadVeinteMil == solucion[8])
    ){
        sumarPos0();
        numeroSoluciones ++;
    }

    solucion[0] = 0;
    solucion[1] = 0;
    solucion[2] = 0;
    solucion[3] = 0;
    solucion[4] = 0;
    solucion[5] = 0;
    solucion[6] = 0;
    solucion[7] = 0;
    solucion[8] = 0;
    

    int ** soluciones = malloc(sizeof(int *) *numeroSoluciones);
     for(int i=0;i<numeroSoluciones;i++){
        soluciones[i] = malloc(sizeof( int) * 10);
    }
    int auxSoluciones = 0;
    
    while(
       !( monedero.cantidadDiez == solucion[0] &&
        monedero.cantidadCincuenta == solucion[1] &&
        monedero.cantidadCien == solucion[2] &&
        monedero.cantidadQuinintos == solucion[3] &&
        monedero.cantidadUnMil == solucion[4] &&
        monedero.cantidadDosMil == solucion[5] &&
        monedero.cantidadCincoMil == solucion[6] &&
        monedero.cantidadDiezMil == solucion[7] &&
        monedero.cantidadVeinteMil == solucion[8])
    ){
        sumarPos0();
        

        /* soluciones[auxSoluciones].VeinteMil = solucion[8];
        soluciones[auxSoluciones].DiezMil = solucion[7];
        soluciones[auxSoluciones].CincoMil = solucion[6];
        soluciones[auxSoluciones].DosMil = solucion[5];
        soluciones[auxSoluciones].UnMil = solucion[4];
        soluciones[auxSoluciones].Quinintos = solucion[3];
        soluciones[auxSoluciones].Cien = solucion[2];
        soluciones[auxSoluciones].Cincuenta = solucion[1];
        soluciones[auxSoluciones].Diez = solucion[0];
        soluciones[auxSoluciones].esSolucion = false; */

             soluciones[auxSoluciones][0] = solucion[0];
             soluciones[auxSoluciones][1] = solucion[1];
             soluciones[auxSoluciones][2] = solucion[2];
             soluciones[auxSoluciones][3] = solucion[3];
             soluciones[auxSoluciones][4] = solucion[4];
             soluciones[auxSoluciones][5] = solucion[5];
             soluciones[auxSoluciones][6] = solucion[6];
             soluciones[auxSoluciones][7] = solucion[7];
             soluciones[auxSoluciones][8] = solucion[8];
             soluciones[auxSoluciones][9] = 0;
      

        auxSoluciones++;        

    }

    fflush(stdin);
    return soluciones;
}


void restriccionValor( int valor) {
    
    int ** soluciones = generarEspacios();
   
    for (size_t i = 0; i < numeroSoluciones; i++) {
        int valorSolucion = 0;
        valorSolucion = soluciones[i][0] * 10 +
                        soluciones[i][1] * 100 +
                        soluciones[i][2] * 50 +
                        soluciones[i][3]  * 500+
                        soluciones[i][4] * 1000+
                        soluciones[i][5] * 2000 +
                        soluciones[i][6] * 5000+
                        soluciones[i][7] * 10000+
                        soluciones[i][8] * 20000;

        
        if(valorSolucion == valor) {
            
            printf("10: %i \n", soluciones[i][0]);
            printf("50: %i \n", soluciones[i][1]);
            printf("100: %i \n", soluciones[i][2]);
            printf("500: %i \n", soluciones[i][3]);
            printf("1000: %i \n", soluciones[i][4]);
            printf("2000: %i \n", soluciones[i][5]);
            printf("5000: %i \n", soluciones[i][6]);
            printf("10000: %i\n", soluciones[i][7] );
            printf("20000: %i \n", soluciones[i][8]); 
            printf(" valorSolucion: %i\n" , valorSolucion);
            puts("Solucion : ");
                 
        }
    }
    sleep(5);    
}

void restriccionMoneda() {

}

void restriccionesBilletes() {

}

void menuVuelto(char opcion) {
    int vuelto;
    int aux = 0;

    puts("_____________________________________________");
    puts("----------------Vuelto---------------");
    printf("Ingrese el vuelto a evaluar: ");
    getchar();
    scanf("%d", &vuelto);

    switch (opcion) {
        case '1':
            
            break;
        case '2':
           
            break;
        case '3':
            restriccionValor(vuelto);
            break;
        }
    }


void subMenu() {
    bool enSubMenu = true;
    getchar();

    while(enSubMenu) {
        puts("_____________________________________________");
        puts("----------------Restricciones---------------");
        puts("");
        puts("  1) Solo Monedas.");
        puts("  2) Solo Billetes.");
        puts("  3) Monedas y Billetes.");
        puts("  4) Volver al Menu.");
        puts("_____________________________________________");
        printf("Escoga su opcion: ");
        char opcionSubMenu = getchar();
        fflush(stdin);

        switch (opcionSubMenu) {
            case '1':
                menuVuelto('1');
                break;
            case '2':
                menuVuelto('2');
                break;
            case '3':
                menuVuelto('3');
            case '4':
                free(soluciones);
            default:
                puts("---------------- Opcion invalida :( ---------------");
                sleep(1);
        }
    };

    
}