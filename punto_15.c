#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void funcion(int l,int voca[],char *t){
	for (int j=0;j<=l;j++){
		if (t[j]==97 || t[j]==65){
			voca[0]++;
		}
		if (t[j]==101 || t[j]==69){
			voca[1]++;
		}
		if (t[j]==105 || t[j]==73){
			voca[2]++;
		}
		if (t[j]==111 || t[j]==79){
			voca[3]++;
		}
		if (t[j]==117 || t[j]==85){
			voca[4]++;
		}
	}
	
}
int main() {
	int voca[5]={0};
	char l;
	char t[100];
	printf("Ingrese un texto: ");
	gets(t);
	l=strlen(t);
	funcion(l,voca,t);

	printf("La cantidad de letras 'a' es %d\n",voca[0]);
	printf("La cantidad de letras 'e' es %d\n",voca[1]);
	printf("La cantidad de letras 'i' es %d\n",voca[2]);
	printf("La cantidad de letras 'o' es %d\n",voca[3]);
	printf("La cantidad de letras 'u' es %d\n",voca[4]);
	system("pause");	
	return 0;
}