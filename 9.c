/*Leia o sal�rio de um trabalhador e o valor da prestacao de um empr�stimo. Se a
prestacao for maior que 20% do sal�rio imprima: Empr�stimo nao concedido, caso
contr�rio imprima: Empr�stimo concedido
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float sa, em;
    printf("Digite o sal�rio do trabalhador: ");
    scanf("%f", &sa);
    printf("Digite o valor do empr�stimo: ");
    scanf("%f", &em);
    if(em <= (sa*0.20)){
        printf("Empr�stimo concedido\n");
    }else{
        printf("Empr�stimo n�o concedido\n");
    }
    return 0;
}
