#include <stdio.h>
#include <stdlib.h>
void funcion(int encontrado1,int encontrado2,int numero1, int numero2, int contador1, int contador2);
int main() {
	int numeros[8],numero1, numero2,i,encontrado1 = 0, encontrado2 = 0;
	printf("Introduce 8 números enteros:\n");
	for (i = 0; i < 8; i++) {
		scanf("%d", &numeros[i]);
	}
	printf("Introduce dos números adicionales:\n");
	scanf("%d %d", &numero1, &numero2);
	for (i = 0; i < 8; i++) {
		if (numeros[i] == numero1) {
			printf("El número %d pertenece a la secuencia y se encuentra en la posición %d.\n", numero1, i + 1);
			encontrado1 = 1;
		}
		if (numeros[i] == numero2) {
			printf("El número %d pertenece a la secuencia y se encuentra en la posición %d.\n", numero2, i + 1);
			encontrado2 = 1;
		}
	}
	int contador1 = 0, contador2 = 0;
	for (i = 0; i < 8; i++) {
		if (numeros[i] == numero1) {
			contador1++;
		}
		if (numeros[i] == numero2) {
			contador2++;
		}
	}
	funcion(encontrado1,encontrado2,numero1,numero2,contador1,contador2);
	
	
	return 0;
}
void funcion(int encontrado1,int encontrado2,int numero1, int numero2, int contador1, int contador2){
	if (encontrado1) {
		printf("El número %d se repite %d veces en la secuencia.\n", numero1, contador1);
	} else {
		printf("El número %d no se encuentra en la secuencia.\n", numero1);
	}
	if (encontrado2) {
		printf("El número %d se repite %d veces en la secuencia.\n", numero2, contador2);
	} else {
		printf("El número %d no se encuentra en la secuencia.\n", numero2);
	}
}