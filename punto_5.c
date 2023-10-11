#include <stdio.h>
#include <stdlib.h>
int	func(int a){
	if(a%2==0){
		return 0;
	}
	else{return 1;}
	}
int main(){
	int ns[5],i,k,j,a=1;
	printf("ingrese 20 numeros(no 0) \n");
	for(i=0;i<5;i++){
	scanf("%d",&ns[i]);	
	}

	printf("los nu(con tilde)meros pares son: \n");
	for(i=0;i<5;i++){
		a=func(ns[i]);
		if(a==0){
		printf("%d \n",ns[i]);
	}
	}
	printf("los numeros impares son: \n");
	for(i=0;i<5;i++){
		a=func(ns[i]);
		if(a!=0){
		printf("%d \n",ns[i]);
	}
	}
	system("pause");
	return 0;
}
