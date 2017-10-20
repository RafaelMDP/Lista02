/*Faça um programa que receba dois numeros
e mostre qual deles é o maior   */


#include<stdio.h>
#include<stdlib.h>

main(){
  int x,
        y,
        maior;
    printf("Digite o numero 1: ");
    scanf("%d", &x);

    printf("Digite o numero 2: ");
    scanf("%d", &y);

    if(x > y)
        maior = x;
    else
        maior = y;

    printf("O maior numero eh: %d", maior);


return 0;
}
