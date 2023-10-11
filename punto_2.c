#include <stdio.h>
#include <stdlib.h>
void fun(int a, int b){
	printf("posicion %d: %d \n",b,a);
}
int main(){
	int nc[7],i,a=0,as=0,des=0,z=0,ff=0;
	
	for(i=0;i<7;i++){
		printf("ingrese un entero positivo: \n");
		scanf("%d",&nc[i]);
		if(nc[i]>a){a=nc[i];}
		
		if(nc[i]>ff){as=as+1;}
		if(nc[i]<ff){des=des+1;}
		ff=nc[i];
	}
	printf("%d  %d\n",des,as);
	if((as!=7)&&(des!=6)){printf("esta desordenado\n");}
	if(as==7){printf("el orden es ascendente\n");}
	if(des==6){printf("el orden es descendente\n");}	
	printf("el numero mayor es: %d \n",a);
	for(i=0;i<7;i++){
		fun(nc[i],z);
	z++;	}
	system("pause");
	return 0;
}
