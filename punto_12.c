#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void funcion(char *a, int b);
int main(){
	char cadena[50];
	char cadena2[50];
	char lo;
	printf("introduzca un texto de no mas de 50 caracteres: \n");
	gets(cadena);
	strcpy(cadena2,cadena);
	lo=strlen(cadena);
	funcion(cadena,lo);
	
	if (strcmp(cadena2,cadena)==0){
	printf("es palindromo\n");}else {printf("no es palindromo\n");}
	system("pause");
}
void funcion(char *a,int b){
	int i;
	char temp;
	int j=b-1;
	for(i=0;i<b/2;i++){
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		j--;}
}