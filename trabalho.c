#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double divisao(int termo, double calc);
char *reverseString(char *string, char *string2);
void atividade1();
void atividade2();


int main() {
	//atividade1();
	atividade2();
}

void atividade1() {
	int termos;
	double resultado;
	
	printf("Entre com o numero de Termos: ");
	scanf("%d", &termos);
	
	resultado = divisao(termos, 0);
	printf("Resultado: %.2f", resultado);
}

void atividade2() {
	char string[100];
	char *stringRevese[100];
	
	printf("Digite uma palavra: ");
	gets(string);
	
	printf("\n\n%s", reverseString(string, ""));
}


double divisao(int termo, double calc) {	
	if(termo == 0) {
		return calc;
	}else {
		calc += (pow(termo, 2) / pow(termo * 2, 2));
		return divisao(termo - 1, calc);
	}
}

char *reverseString(char *string, char *string2) {
	if (*string == '\0') {
		printf("\nX");
		return string2;
	}else {
        *string2 = 'H';
        return reverseString(string + 1, string2);
	}
};
