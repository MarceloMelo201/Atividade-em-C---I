#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	
	float soma, subtracao, divisao, multiplicacao, numeroUno, numeroDuo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &numeroUno);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f", &numeroDuo);
	
	soma = numeroUno + numeroDuo;
	subtracao = numeroUno - numeroDuo;
	multiplicacao = numeroUno * numeroDuo;
	divisao = numeroUno / numeroDuo;
	
	printf("\nPrimeiro valor: %.1f", numeroUno);
	printf("\nSegundo valor: %.1f", numeroDuo);
	
	printf("\nSoma: %.1f", soma);
	printf("\nSubtra��o: %.1f", subtracao);
	printf("\nMultiplica��o: %.1f", multiplicacao);
	printf("\nDivis�o: %.3f", divisao); 
	
}
