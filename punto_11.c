#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void funcion(char *a,int b);
int main()
{
	char i,j,longi;
	char longitud;
	char cadena[50];
	printf("Introduce un texto (menos de 50 caracteres): ");
	gets(cadena);
	longitud=strlen(cadena);
	funcion(cadena,longitud);
	printf("Resultado: %s\n", cadena);
	system("pause");
}
void funcion(char *a,int b){
	int i;
	char temp;
	int j=b-1;
	for (i=0; i<b/2; i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
}