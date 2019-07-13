#include <stdio.h>



void generarEspacios() {

    size_t i,j,k,l,m,n,o,p,q;
    i = j = k = l = m = n = o = p = q = 0;
    printf("%i \n",monedero.cantidadVeinteMil);
    printf("%i \n",monedero.cantidadDiezMil);
    printf("%i \n",monedero.cantidadUnMil);
    printf("%i \n",monedero.cantidadCincuenta);
    printf("%i \n",monedero.cantidadDiez);


    if (monedero.cantidadVeinteMil == 0 ) {
        i = 0;
        goto for1;}
    for ( i=0; i <= monedero.cantidadVeinteMil; i++) {

        for1: 
        if (monedero.cantidadDiezMil == 0 ){
          j =0;
          goto for2;  
        } 
       
        for ( j=0; j <= monedero.cantidadDiezMil; j++) {
            
            for2:

            if (monedero.cantidadCincoMil == 0 ) {
                k=0;
                goto for3;
            }
            printf(" %li %li %li %li %li %li %li %li %li \n", i,j,k,l,m,n,o,p,q);
            for ( k=0; k <= monedero.cantidadCincoMil; k++) {
                    
                for3:
                if (monedero.cantidadDosMil == 0 ) {
                    l =0;
                    goto for4;
                }
                    for ( l=0; l <= monedero.cantidadDosMil; l++) {

                    for4: 
                    if (monedero.cantidadUnMil == 0 ) {
                        m = 0;
                        goto for5;
                    }
                    
                    for ( m=0; m <= monedero.cantidadUnMil; m++) {
                        for5:
                        if (monedero.cantidadQuinintos == 0 ) {
                            n = 0;
                            goto for6;}
                        for (n=0; n <= monedero.cantidadQuinintos; n++) {
                            for6:
                            if (monedero.cantidadCien == 0 ) {
                                o = 0;
                                goto for7;
                            }
                            
                            for ( o=0; o<= monedero.cantidadCien; o++) {
                                for7:
                                
                                if (monedero.cantidadCincuenta == 0 ) {
                                    p = 0;
                                    goto for8;
                                }
                                
                                for ( p=0; p <= monedero.cantidadCincuenta; p++) {
                                    for8:
                                    if (monedero.cantidadDiez != 0 ) {
                                        
                                        for ( q=0; q <= monedero.cantidadDiez; q++) {
                                           
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    
}