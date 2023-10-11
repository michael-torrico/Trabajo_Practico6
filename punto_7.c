#include <stdio.h>
#include <stdlib.h>	
void fn(int a, int b, int c,int d,int e, int f);
int main(){	
	int i,nc[11],pl[2],sl[2],ul[2];
	printf("ingrese los 10 tiempos \n");
	for(i=1;i<11;i++){
	printf("corredor nro %d: ",i);
	scanf("%d",&nc[i]);
	if(i==1){pl[1]=nc[i]+1;sl[1]=nc[i]+1;ul[1]=nc[i];}
	
	if(nc[i]<pl[1]){pl[1]=nc[i];pl[0]=i;};
	if((nc[i]>pl[1])&&(nc[i]<sl[1])){sl[1]=nc[i];sl[0]=i;}
	if(nc[i]>ul[1]){ul[1]=nc[i];ul[0]=i;}}
	
	fn(pl[1],sl[1],ul[1],pl[0],sl[0],ul[0]);
	return 0;}
void fn(int a,int b, int c,int d, int e,int f){
	printf("el corredor nro %d es primero es: %d \n",d,a);
	printf("el corredor nro %d es segundo es: %d \n",e,b);
	printf("el corredor nro %d es ultimo es: %d \n",f,c);
	
}
