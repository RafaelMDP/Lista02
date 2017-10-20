/*Leia um numero real. Se o numero for positivo imprima
a raiz quadrada. Do contrario, imprima o numero ao quadrado.*/

#include <stdio.h>

main(){

    float num;

    printf("Digite um numero real: ");C
    scanf("%f", &num);

    if(num>0){
        printf("Raiz quadrada e %.1f \n", sqrt(num));
    }else
    printf("Elevado ao quadrado e: %.2f \n", pow(num, 2));








return 0;
}



