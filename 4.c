/*Faca um programa que leia um numero e
caso ele seja positivo, calcule e mostre:
O numero digitado ao quadrado
A raiz quadrada do n´umero digitado
*/

#include<stdio.h>
#include<stdlib.h>

main(){

    float num;

        printf("Digite um numero real: ");
        scanf("%f", &num);

   if(num>0){
        printf("Raiz quadrada e %.1f \n", sqrt(num));
        printf("Elevado ao quadrado e: %.2f \n", pow(num, 2));
    }else
    printf("Numero inválido");






return 0;
}
