//Faca um programa para veriﬁcar se um determinado numero inteiro e divisIvel por 3 ou 5, mas n˜ao simultaneamente pelos dois.
#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
printf("Entre com um numero inteiro \n");
scanf("%d", &a);

if( a % 3==0){
    printf("Numero %d divisivel por 3", a);
}else if (a % 5==0){
    printf("Numero %d divisivel por 5 ", a);
}else if(a % 3 ==0 && a % 5==0){
    printf("Numero %d divisivel por 3 e 5 ",a);
}




return 0;
}
