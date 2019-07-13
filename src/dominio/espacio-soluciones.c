#include <stdio.h>
int solucion[9] = {0};

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

void sumarSolucion() {

}

int soluciones = 0;
void generarEspacios() {

    size_t i,j,k,l,m,n,o,p,q;
    i = j = k = l = m = n = o = p = q = 0;

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
        printf(" %i %i %i %i %i %i %i %i %i \n", 
                solucion[0],
                solucion[1],
                solucion[2],
                solucion[3],
                solucion[4],
                solucion[5],
                solucion[6],
                solucion[7],
                solucion[8]);
        soluciones ++;
    }

    printf("Cantidad de soluciones: %i \n", soluciones);


    fflush(stdin);
    
}