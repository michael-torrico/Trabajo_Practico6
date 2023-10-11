#include <stdlib.h>
#include <stdio.h>
void fn();
	
int main(){
	int ns[10],i,a=0,b=100000000000,conta=0,contb=0;
	
	printf("ingrese 10 numeros\n");
	for(i=0;i<10;i++){
		scanf("%d",&ns[i]);	
		if(ns[i]>a){a=ns[i];conta=0;}
		if(ns[i]==a){conta=conta+1;}
		if(ns[i]<b){b=ns[i];contb=0;}
		if(ns[i]==b){contb=contb+1;}
	}
	fn(b,a,conta,contb);
	system("pause");
	return 0;
}
	
void fn(int b, int a, int conta,int contb){
	printf("el valor minimo del vector es: %d \n",b);
	printf("el valor maximo del vector es: %d \n",a);
	printf("repeticiones del numero grande: %d \n",conta);
	printf("repetciones del numero chiquitito: %d \n",contb);
}
	

