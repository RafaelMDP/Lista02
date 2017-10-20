/* Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
assim por diante
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Digite de 1 a 12 - para ver o mes respectivo: ");
    int dia;
    scanf("%i", &dia);
    switch(dia){
        case 1 :
            printf("Janeiro\n");
        break;
        case 2 :
            printf("Fevereiro\n");
        break;
        case 3 :
            printf("Marco\n");
        break;
        case 4 :
            printf("Abril\n");
        break;
        case 5 :
            printf("Maio\n");
        break;
        case 6 :
            printf("Junho\n");
        break;
        case 7 :
            printf("Julho\n");
        break;
        case 8 :
            printf("Agosto\n");
        break;
        case 9 :
            printf("Setembro\n");
        break;
        case 10 :
            printf("Outubro\n");
        break;
        case 11 :
            printf("Novembro\n");
        break;
        case 12 :
            printf("Dezembro\n");
        break;
        default :
            printf("Dia inválido!\n");
    return 0;
    }
}
