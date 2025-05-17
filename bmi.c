/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
	float peso, altura, imc;


	printf("=================================================\n");
	printf("Calculadora de indice de masa corporal(IMC)\n");
	printf("=================================================\n");

	printf("Ingrese su peso en kilogramos: ");
	scanf("%f", &peso);

	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);

	if(altura <= 0) {

		printf("La altura debe ser mayor a 0\n ");
		return 1;
	}

	imc = peso / (altura * altura);

	printf("\n-------------------------------\n");
	printf("Resultado:\n");
	printf("-------------------------------\n");
	printf("Su imc es de: %.2f\n", imc);

	if(imc < 18.5)
		printf("Clasificacion: Bajo peso\n");
	else if(imc <24.9)
		printf("Clasificacion: Peso normal\n");
	else if(imc < 29.9)
		printf("Clasificacion: Sobrepeso\n");
	else
		printf("Clasificacion: Obesidad\n");

	printf("-------------------------------\n");



	return 0;
}
