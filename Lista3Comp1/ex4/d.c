#include <stdio.h>

int main(){
    double x, z, a, b, resultado;
    int c, y;

    x = 6.0;
    y = 2;
    z = 4.0;
    a = 8;
    b = 7.5; 
    c = 12;

    resultado = c % y <= y % c;

    printf("Resultado = %.3lf", resultado);
   
    return 0;

}