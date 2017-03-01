#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int multiplicar(int numN, int numQ, int mult);
void atividadeA();
void atividadeB();
double dividir(int termos, double calc);

int main() {
	atividadeA();
}

//Atividade A
void atividadeA() {
	
	int numN, numQ;
	
	//printf("Digite um numero inteiro e positivo N: ");
	//scanf("%d", &numN);
	
	//printf("Digite um numero inteiro e positivo Q: ");
	//scanf("%d", &numQ);
	
	//int resultado = multiplicar(numN, numQ, 0);
	int resultado = multiplicar(5, 6, 0);
	printf("\nResultado: %d", resultado);
	
}

//Atividade B
void atividadeB() {
	int termos;
	
	printf("Quantos termos deseja calcular: ");
	scanf("%d", &termos);
	
	double resultado = dividir(termos, 0);
	
	printf("\nResultado: %.2f", resultado);
}

//Recursiva atividade A
int multiplicar(int numN, int numQ, int mult) {
	if(numQ == 0){
		return mult;
	} else {
		mult = numN * numQ;
		return multiplicar(numN, numQ - 1, mult);
	}
}

//Recursiva atividade B
double dividir(int termos, double calc) {
	if(termos == 0) {
		return calc;
	}else {
		calc += (pow(termos, 3) / pow(10, termos - 1));
		return dividir(termos - 1, calc);
	}
}
