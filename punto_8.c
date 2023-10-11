#include <stdio.h>
#include <stdlib.h>	
void fn(int *nc);
int main(){	
	int i,nc[7];
	printf("ingrese 7 numeros enteros positivos: \n");
	for(i=0;i<7;i++){
	scanf("%d",&nc[i]);}
	printf("lista ordenada:\n");
fn(nc);
system("pause");
return 0;}
void fn(int *nc){
	
	for(int i=0;i<7;i++){
		for(int j=i+1;j<7;j++){
		if(nc[i]>nc[j]){int zn=nc[i];
			nc[i]=nc[j];
			nc[j]=zn;
			}}
	printf("%d\n",nc[i]);}}
