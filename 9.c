/*Leia o salário de um trabalhador e o valor da prestacao de um empréstimo. Se a
prestacao for maior que 20% do salário imprima: Empréstimo nao concedido, caso
contrário imprima: Empréstimo concedido
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float sa, em;
    printf("Digite o salário do trabalhador: ");
    scanf("%f", &sa);
    printf("Digite o valor do empréstimo: ");
    scanf("%f", &em);
    if(em <= (sa*0.20)){
        printf("Empréstimo concedido\n");
    }else{
        printf("Empréstimo não concedido\n");
    }
    return 0;
}
