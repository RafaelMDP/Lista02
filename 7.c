/* Faca um programa que receba dois n�meros e mostre o maior.
Se por acaso, os dois n�meros forem iguais,
omprima a mensagem N�meros iguais */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("Digite um n�mero inteiro: ");
    scanf("%i", &n1);
    printf("Digite outro n�mero inteiro: ");
    scanf("%i", &n2);
    if(n1 > n2){
        printf("%i � o maior n�mero\n", n1);
    }else if(n1 == n2 ){
        printf("N�meros iguais!\n");
    }else{
        printf("%i � o maior n�mero\n", n2);
    }
    return 0;
}
