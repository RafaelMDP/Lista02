/* ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem �N�mero
inv�lido�. Se o n�mero for positivo, calcular o logaritmo deste numero
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Digite um n�mero inteiro: ");
    int num;
    scanf("%i", &num);
    if(num >= 0){
        printf("Seu logaritmo � %.2f\n", log(num));
    }else{
        printf("N�mero inv�lido!");
    }
    return 0;
}
