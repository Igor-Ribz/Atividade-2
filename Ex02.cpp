/*
leia dois valores inteiros, no caso para vari�vies A e B.
A seguir, calcule a soma entre elas e atribua � vari�vel SOMA.
A seguir escrever o valor desta vari�vel.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int A, B, SOMA;
	printf("Digite a letra A:\n");
    scanf("%d",&A);
    printf("Digite a letra B: ");
    scanf("%d",&B);
    SOMA = A + B;
    printf("%d + %d = %d", A, B, SOMA);
    
    
    
    
    
    /*	int %d inteiro
	float %f real
	double %lf real
	char %c caractere
	bool %b boleano
	*/
	
    return 0; system("pause");
}
