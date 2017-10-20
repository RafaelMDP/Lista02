/* Faca um programa que calcule e mostre a area de um trapezio. Sabe-se que:
A = (basemaior + basemenor) ∗altura 2 Lembre-se a base maior e a base menor
devem ser numeros maiores que zero. */
#include<stdio.h>

main(){

float a, bM, bm, al;

printf("Area de um trapezio\n");

printf("digite a primeira base: ");
scanf("%f", &bM);

printf("digite a segunda base: ");
scanf("%f", &bm);

printf("digite a altura: ");
scanf("%f", &al);

 a=bM+bm*al/2;

    if(bM>=0 && bm>=0 ){
    printf("A area do trapezio eh: %.2f",a);
}else{
    printf("numero invalido");
}







return 0;
}
