#include <stdio.h>

const int COLS = 80;
const int ROWS = 20;
const char SYMBOL = '2';

void linea_asteriscos(int numero_columnas, char symbol) {
	int contador;
	contador = 0;
	while(contador < numero_columnas) {
		printf("%c", symbol);
		contador++;
	}
}

void imprime_columnas() {
	int contador;
	contador = 0;
	while(contador < ROWS) {
		printf("%c", SYMBOL);
		linea_asteriscos(COLS - 2, ' ');
		printf("%c", SYMBOL);
		printf("\n");
		contador++;
	}
}

int main(int argc, char* argv[]) {
	linea_asteriscos(COLS, SYMBOL);
	imprime_columnas();
	linea_asteriscos(COLS, SYMBOL);
	return 0;
}