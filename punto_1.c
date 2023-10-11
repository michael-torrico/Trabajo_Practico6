#include <stdio.h>
#include <stdlib.h>
void fun(int a);
int funcion(){
	int a;
	printf("ingrese un num: \n");
	scanf("%d",&a);
	return a;
}
int main(){
	int nc[6],i;
	
	for(i=0;i<6;i++){
		nc[i]=funcion();
	}
	for(i=0;i<6;i++){
		fun(nc[i]);
	}
	system("pause");
	return 0;
}
	void fun(int a){
		printf("num ingresado: %d \n",a);
	}
