#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float a, b, c = 0;
	float delta, x1, x2;

	printf("Informe os valores A, B e C em ordem!\n");

	scanf("%f %f %f", &a,&b,&c);

	delta = (b * b) - (4 * a * c);

	x1 = ((b * -1) + sqrt(delta)) / (2 * a);
	x2 = ((b * -1) - sqrt(delta)) / (2 * a);

	printf("Delta = %f, x1 = %f, x2 = %f", delta, x1, x2);

	return 0;
}
