/* Faca um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e
a segunda prova t�m peso 1 e a terceira tem peso 2. Ao final, mostrar a m�dia do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovacao deve ser igual ou
superior a 60 pontos
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, soma = 0;
    printf("Digite a 1� nota: ");
    scanf("%f", &n1);
    printf("Digite a 2� nota: ");
    scanf("%f", &n2);
    printf("Digite a 3� nota: ");
    scanf("%f", &n3);
    soma = (n1*1)+(n2*1)+(n3*2)/4;
    if(soma >= 10){
        printf("Aluno aprovado com m�dia %.2f\n", soma);
    }else{
        printf("Aluno reprovado com m�dia %.2f\n", soma);
    }
    return 0;
}
