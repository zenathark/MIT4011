#include <stdio.h>

void imprime_doce_renglones() {
	int contador;
	for (contador=0; contador < 12; ++contador)
	{
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int contador;
	imprime_doce_renglones();
	for (contador = 0; contador < 39; ++contador){
		printf(" ");
	}
	printf("*");
	imprime_doce_renglones();
	getchar();
	return 0;
}