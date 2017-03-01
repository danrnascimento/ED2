#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void atividadeA() {
	printf("\n\n\tAtividade A\n");
	float quantidade;
	printf("\n\tDigite um numero inteiro e positivo?   ");
	scanf("%f", &quantidade);
	if(quantidade >= 0 && roundf(quantidade) == quantidade) {
		printf("\n\tSeu retorno: [%.0f]", quantidade);
	} else {
		printf("\n\tSeu numero nao e inteiro ou positivo");
	}
}

void atividadeB() {
	printf("\n\n\tAtividade B\n");
	int vetor[10];
	int numeroAux;
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("\n\tDigite um numero inteiro para o vetor na posicao[%d]  ", i);
		scanf("%d", vetor + i);
	}
}

int getFatorial(numero) {
	int i;
	int fatorial = 1;
	for (i = 1; i <= numero; i++) {
		fatorial = fatorial * i;
	}
	return fatorial;
}

void atividadeC() {
	printf("\n\n\tAtividade C\n");
	int i;
	int vetor[10] = {2, 4, 6, 8, 10, 12, 3, 7, 9, 11};
	int vetorLength = sizeof(vetor)/sizeof(vetor[0]);
	for (i = 0; i < vetorLength; i++) {
		printf("\n\tFatorial: %d - > %i", vetor[i], getFatorial(vetor[i]));
	}
}

int main(void) {
	atividadeA();
	atividadeB();
	atividadeC();
}
