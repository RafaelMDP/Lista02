/* Leia um numero fornecido pelo usuario. Se esse numero for positivo
 * calcule a raiz quadrada do numero.
 * Se o numero for negativo, mostre uma mensagem dizendo
 * que o numero é inválido
 */

#include <stdio.h>

float raiz_quadrada(float numero);

int main(){
    float numero;

    printf("Entre com um numero positivo por favor : ");
    scanf("%f",&numero);

    printf("A raiz quadrada de %.1f eh %.2f \n",numero,raiz_quadrada(numero));

    return(0);
}

float raiz_quadrada (float numero)
{
    int n;
    float recorre = numero;

    for (n = 0; n < 10; ++n)
          recorre = recorre/2 + numero/(2*recorre);

    return(recorre);
}
