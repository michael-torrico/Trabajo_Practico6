#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int funcion(){
		char a[20];
			printf("ingrese el apellido correctamente\n");
			scanf("%s",&a);
			if(a[0]>='A'&& a[0]<='Z'){return 1;}else{return 0;}
}
int main() {
	char a[20];
	int nota,i,p,j,nz=0;
	float b;
	int dif='a'-'A';
	p=0;
	for(i=1;i<4;i++)
	{printf("ingrese su apellido \n");
	scanf("%s",&a);
	if(a[0]>='a' && a[0]<='z'){
		while(nz==0){
			nz=funcion();
		}
		
	}
	for(j=1;j<6;j++){ 
		printf("ingrese su nota\n");	
		scanf("%d",&nota);
		b=nota+b;
	}
	p=p+b;
	b=b/5;
	printf("el promedio del alumno %s",a); printf(" es: %f \n",b);
	b=0;
	nz=0;
	}p=p/15;
	printf("el promedio del curso es: %d \n",p);
 	
	return 0;
}