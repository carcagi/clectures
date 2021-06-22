#include <stdio.h> 

/* Standard Input Output */

int variable1 = 6;
char variable2 = 67;

float power(float a, float b)
{
	float x = 1;

	for (int i = 0; i < b ;i++){
		x = x * a;	
	}

	return x;
}
void imprimir(int h);

int main()
{
		printf("Hello holbies!\n%d\n%c\n", variable1, variable2);
		int suma = variable1 + 4;
		int rest = variable1 - 8;
		int mult = variable1 * 2;
		int div1 = variable1 / 2;
		float div2 = variable1 / 3;
		int pot = power(variable1,2);
		float sqrt = power(variable1, 0.5);

		imprimir(155);

		printf("Suma:%d\nResta:%d\nMult:%d\nDiv1:%d\nDiv2:%.2f\nPot:%d\nSqrf:%f\n", suma, rest, mult,div1,div2,pot,sqrt);
		return 0;
}

void imprimir(int h)
{
	printf("\n\n%d\n\n", h);
}
