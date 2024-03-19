#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[40];
	int idade;
	float notaUno, notaDuo, notaTri, notaQua, media;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
	printf("\nDigite a primeira nota: ");
	scanf("%f", &notaUno);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", &notaDuo);
	
    printf("\nDigite a terceira nota: ");
	scanf("%f", &notaTri);

	printf("\nDigite a quarta nota: ");
	scanf("%f", &notaQua);
	
	media = (notaUno + notaDuo + notaTri + notaQua) / 4;
	
	printf("\nNome: %s", nome);
	printf("\nIdade: %d", idade);
	
	printf("\nPrimeira Nota: %.1f", notaUno);
	printf("\nSegunda Nota: %.1f", notaDuo);
	
	printf("\nTerceira Nota: %.1f", notaTri);
	printf("\nQuarta Nota: %.1f", notaQua);
	
    printf("\nMédia: %.3f", media);
    
    if(media > 7.0){
    	printf("\nAluno aprovado(a)!");

	}else{
		
		printf("\nAluno reprovado(a)!");
	}
    
    return 0; 
    
}
