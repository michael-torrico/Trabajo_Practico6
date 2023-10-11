#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void funcion(char *t){
	int difa='a'-'A',difb='A'-'a',i=0;
	while (t[i])
	{
		if (t[i]>='a' && t[i]<='z')
			
			t[i]=t[i]-difa;
		else
			if (t[i]>='A' && t[i]<='Z')
				t[i]=t[i]-difb;
		
		i++;
	}
	printf("Su texto invertido es %s\n",t);
}
int main ()
{
	char t[50];
	printf("Ingrese su texto: ");
	gets(t);
	funcion(t);
	system("pause");
}