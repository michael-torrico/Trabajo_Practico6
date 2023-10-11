#include <stdio.h>
#include <stdlib.h>
float func(){
	int a;
	printf("ingrese el valor de la compra: \n");
	scanf("%d",&a);
	return a;
}
int main () {
	int i;
	float nc[10],total=0,mayor=0;
	for(i=0;i<10;i++){
		nc[i]=func();
	total=total+nc[i];
	if(nc[i]>mayor){mayor=nc[i];}
	}
	printf("el mayor gasto fue: %.2f\n",mayor);
	printf("el total fue: %.2f \n",total);
	
	system("pause");
	return 0;
}