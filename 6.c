/* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferenc¸a existente entre ambos
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &n2);
    if(n1 > n2){
        printf("%i e o maior numero, com diferenca de %i\n", n1, (n1-n2));
    }else{
        printf("%i e o maior numero, com diferenca de %i\n", n2, (n2-n1));
    }
    return 0;
}
