/* Fac�a um programa que leia 2 notas de um aluno, verifique se as notas s� ao v�lidas e
exiba na tela a m�dia destas notas. Uma nota v�lida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota n� ao possua um valor v�lido, este fato deve ser
informado ao usu�rio e o programa termina
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2;
    printf("Digite a nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite outra nota: ");
    scanf("%f", &n2);
    if((n1>=0 && n1<=10) && (n2>=0 && n2<=10)){
        printf("A m�dia � %.1f\n", (n1+n2)/2);
    }else{
        printf("Nota(s) inv�lida(s)!\n");
    }
    return 0;
}
