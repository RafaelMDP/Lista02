/*Determine se um determinado ano lido e bissexto.
Sendo que um ano e bissexto se for divisıvel por 400
ou se for divisıvel por 4 e n˜ao for divis´ıvel por 100. Por exemplo: 1988, 1992, 1996*/

#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
printf("Entre com o ano \n");
scanf("%d", &a);

if( a % 4==0 ){
    printf("Ano Bissexto", a);
}else if (a % 4 !=0){
    printf("Ano nao e Bissexto", a);
}



return 0;
}
