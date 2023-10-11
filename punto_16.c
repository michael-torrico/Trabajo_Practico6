#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void funcion(float s,char *nom){
	printf("el sueldo del empleado mas antiguo es: %f\n",s);
	printf("el empleado mas antiguo es: %s\n",nom);
}
int main() {
	char nombre[50];
	char nom[50];
	int  mes,anio,dia,i,a2,a,b,c,n;
	float sueldo,s;
	for (i=1;i<=3;i++){
		
		printf("persona %d ingrese su nombre\n",i);
		scanf("%s",&nombre);
		printf("persona %d ingrese su sueldo\n",i);
		scanf("%f",&sueldo);
		
		while (n!=1){
			printf("persona %d ingrese su dia de nacimiento\n",i);
			scanf("%d",&dia);
			printf("persona %d ingrese su mes\n",i);
			scanf("%d",&mes);
			printf("persona %d ingrese su anio de nacimiento\n",i);
			scanf("%d",&anio);
			a2=anio%4;
			if(mes>12) {printf("fecha no valida\n");n=0;}else {
				if  (((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia>31)){printf("fecha invalida\n");n=0;} 
				else {if (((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia>30)) {printf("fecha invalida\n");n=0;}
				else {if ((mes==2)&&(a2==1)&&(dia>29)){printf("fecha invalida\n");n=0;} else {
					if 	((mes==2)&&(a2!=0)&&(dia>28)){printf("fecha invalida\n");n=0;} else { 
						if((mes<13)&& (((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia<32))){n=1;}
						if((mes<13)&& (((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia<31)))
							if(((mes<13)&& (((mes==2)&&(a2==0))&&(dia<30)))||((mes==2)&&(a2!=1)&&(dia>28))){n=1;}}}}}}
		}n=0;
		
		if(i==1){	a=anio+1;b=mes+1;c=dia+1;}
		
		if (anio<a){a=anio;strcpy(nom,nombre);s=sueldo;} else{ 
			if((anio==a)&&(mes<b)){b=mes;strcpy(nom,nombre);s=sueldo;} else {
				if ((anio==a)&&(mes==mes)&&(dia<a)){a=dia;strcpy(nom,nombre);s=sueldo;}else {
				}
			}
			
		}
		
	}
	funcion(s,nom);
	
	system("pause");	
	return 0;
}



	

