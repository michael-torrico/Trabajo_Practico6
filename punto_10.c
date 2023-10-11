#include <stdio.h>
#include <stdlib.h>
void creciente(int nc[]);
void decreciente(int nc[]);
int main(){
	int nc[8],i,pos=0,neg=0,temp,j;
	printf("ingrese 8 numeros \n");
	for(i=0;i<8;i++){
		scanf("%d",&nc[i]);
		if(nc[i]>0){pos++;}
	}
	creciente(nc);
	printf("numeros negativos decreciente: \n ");
	for(i=0;i<8;i++){
		if(nc[i]<0){
		printf("%d \n",nc[i]);neg++;
	}}

	decreciente(nc);
	printf("numeros positivos creciente \n");
	for(i=0;i<8;i++){if(nc[i]>0){
		printf("%d \n",nc[i]);}
	}
}
void decreciente (int nc[]){
	int temp,j,i;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(nc[j]<nc[j+1]){
				temp=nc[j];
				nc[j]=nc[j+1];
				nc[j+1]=temp;
			}
		}
	}
}
void creciente(int nc[]){
	int j,i,temp;
	
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(nc[j]>nc[j+1]){
				temp=nc[j];
				nc[j]=nc[j+1];
				nc[j+1]=temp;
			}
		}
	}

}