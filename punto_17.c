#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fecha_permitida(int i,int anio,int mes,int dia){
	int a,n;

	a=anio%4;
	if(anio>2023) {printf("fecha no valida\n");n=0;}else {
		if((anio==2023)&&(mes>10)){printf("fecha no valida\n");n=0;}else{
			if((anio==2023)&&(mes==10)&&(dia>4)){printf("fecha no valida\n");n=0;}else{
				if((mes>12)||(mes<1)) {printf("fecha no valida\n");n=0;}else {
					if  (((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&((dia>31)||(dia<0))){printf("fecha invalida\n");n=0;} 
					else {if (((mes==4)||(mes==6)||(mes==9)||(mes==11))&&((dia>30)||(dia<0))) {printf("fecha invalida\n");n=0;}
					else {if ((mes==2)&&(a==1)&&((dia>29)||(dia<1))){printf("fecha invalida\n");n=0;} else {
						if 	((mes==2)&&(a!=0)&&((dia>28)||(dia<1))){printf("fecha invalida\n");n=0;} else { 
							if((mes<13)&&  (((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia<32))){n=1;}
							if((mes<13)&&  (((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia<31))){n=1;}else {
								if((mes<13)&&(mes==2)&&(a==0)&&(dia<30)){n=1;}else{
									if	((mes==2)&&(a!=0)&&(dia<29)){n=1;}}}}}}}}}}}
	return n;
}
int funcion_edad(int a,int b, int c){
	return a*10000+b*100+c*1;
}
int main() {
	char nombre1[50];
	char nombre2[50];
	char nombre3[50];
	char nombre[50];
	char d[50];
	int  dia,i,mes,anio,n,n1,dia1,dia2,dia3,mes1,mes2,mes3,anio1,anio2,anio3,x,edad1,edad2,edad3,j,k,s,edad;
	float a;
	n=0;
	for (i=1;i<4;i++){
		while (n!=1){
			printf("empleado %d ingrese su dia de nacimiento\n",i);
			scanf("%d",&dia);
			printf("empleado %d ingrese su mes\n",i);
			scanf("%d",&mes);
			printf("empleado %d ingrese su anio de nacimiento\n",i);
			scanf("%d",&anio);	
		n=fecha_permitida(i,anio,mes,dia);
		}
		printf("empleado %d ingrese su nombre\n",i);
		scanf("%s",&nombre);
		
		j= 4-dia ;
		k= 10-mes;
		s= 2023-anio;	
		if((j<1)&&((mes==2)||(mes==4)||(mes==6)||(mes==8)||(mes==9)||(mes==11)||(mes==1))){j=j+31;k=k-1;} else {
			if((j<1)&&((mes==5)||(mes==7)||(mes==10)||(mes==12))){j=j+30;k=k-1;}else{
				if((j<1)&&(mes==3)&&(a==0)){j=j+29;k=k-1;}else {
					if((j<1)&&(mes==3)&&(a!=0)){j=j+28;k=k-1;}}}} 
		if((k<1)&&(s>=1)) {k=k+12;s=s-1;} 
		if((k==0)&&(s==0)){k=0;s=0;}
		
		edad=funcion_edad(s,k,j);
		
		
		if (i==1) {edad1=edad;dia1=dia;mes1=mes;anio1=anio;strcpy(nombre1,nombre);} else {
			if (i==2) {edad2=edad;dia2=dia;mes2=mes;anio2=anio;strcpy(nombre2,nombre);} else {
				if (i==3) {edad3=edad;dia3=dia;mes3=mes;anio3=anio;strcpy(nombre3,nombre);}
			}
		}
		n=0;
	}	
	
	
	do{
		printf("quiere cambiar la fecha de nacimiento de algun empleado?, si o no\n");
		scanf("%s",&d);
		if ((strcmp(d,"SI")==0)||(strcmp(d,"si")==0)) {
			n1=1;
			while (n1!=0){
				printf("ingrese el nombre\n");
				scanf("%s",&nombre);
				do{ 
					if (strcmp(nombre1,nombre)==0) { printf("ingrese el dia\n"); scanf("%d",&dia1);printf("ingrese el mes\n");scanf("%d",&mes1);printf("ingrese el anio\n");scanf("%d",&anio1);n1=0;} else {
						if (strcmp(nombre2,nombre)==0) {printf("ingrese el dia\n");scanf("%d",&dia2);printf("ingrese el mes\n");scanf("%d",&mes2);printf("ingrese el anio\n");scanf("%d",&anio2);n1=0;} else {
							if (strcmp(nombre3,nombre)==0){printf("ingrese el dia\n");scanf("%d",&dia3);printf("in3grese el mes\n");scanf("%d",&mes3);printf("ingrese el anio\n"); scanf("%d",&anio3);n1=0;} else {
								if ((strcmp(nombre1,nombre)!=0)&&(strcmp(nombre2,nombre)!=0)&&(strcmp(nombre3,nombre)!=0))			{printf("nombre invaliDOU\n"); n1=1;}
							}}}x=1;
					if (strcmp(nombre,nombre1)==0){a=anio1%4;
					if(anio1>2023) {printf("fecha no valida\n");n=0;}else {
						if((anio1==2023)&&(mes1>10)){printf("fecha no valida\n");n=0;}else{
							if((anio1==2023)&&(mes1==10)&&(dia1>4)){printf("fecha no valida\n");n=0;}else{
						if((mes1>12)||(mes1<1)) {printf("fecha no valida\n");n=0;}else {
							if  (((mes1==1)||(mes1==3)||(mes1==5)||(mes1==7)||(mes1==8)||(mes1==10)||(mes1==12))&&((dia1>31)||(dia1<0))){printf("fecha invalida\n");n=0;} 
							else {if (((mes1==4)||(mes1==6)||(mes1==9)||(mes1==11))&&((dia1>30)||(dia1<0))) {printf("fecha invalida\n");n=0;}
							else {if ((mes1==2)&&(a==1)&&((dia1>29)||(dia1<1))){printf("fecha invalida\n");n=0;} else {
								if 	((mes1==2)&&(a!=0)&&((dia1>28)||(dia1<1))){printf("fecha invalida\n");n=0;} else { 
									if((mes1<13)&&  (((mes1==1)||(mes1==3)||(mes1==5)||(mes1==7)||(mes1==8)||(mes1==10)||(mes1==12))&&(dia1<32))){n=1;}
									if((mes1<13)&&  (((mes1==4)||(mes1==6)||(mes1==9)||(mes1==11))&&(dia1<31))){n=1;}else {
										if((mes1<13)&&(mes1==2)&&(a==0)&&(dia1<30)){n=1;}else{
											if	((mes1==2)&&(a!=0)&&(dia1<29)){n=1;}}}}}}}}}}}
					j= 4-dia1 ;
					k= 10-mes1;
					s= 2023-anio1;	
					if((j<1)&&((mes1==2)||(mes1==4)||(mes1==6)||(mes1==8)||(mes1==9)||(mes1==11)||(mes1==1))){j=j+31;k=k-1;} else {
						if((j<1)&&((mes1==5)||(mes1==7)||(mes1==10)||(mes1==12))){j=j+30;k=k-1;}else{
							if((j<1)&&(mes1==3)&&(a==0)){j=j+29;k=k-1;}else {
								if((j<1)&&(mes1==3)&&(a!=0)){j=j+28;k=k-1;}}}} 
					if((k<1)&&(s>=1)) {k=k+12;s=s-1;} 
					if((k==0)&&(s==0)){k=0;s=0;}
					edad1=funcion_edad(s,k,j);
					
					}
					
					
					if (strcmp(nombre,nombre2)==0){a=anio2%4;
					if(anio2>2023) {printf("fecha no valida\n");n=0;}else {
						if((anio2==2023)&&(mes2>10)){printf("fecha no valida\n");n=0;}else{
							if((anio2==2023)&&(mes2==10)&&(dia2>4)){printf("fecha no valida\n");n=0;}else{
						if((mes2>12)||(mes2<1)) {printf("fecha no valida\n");n=0;}else {
							if  (((mes2==1)||(mes2==3)||(mes2==5)||(mes2==7)||(mes2==8)||(mes2==10)||(mes2==12))&&((dia2>31)||(dia2<0))){printf("fecha invalida\n");n=0;} 
							else {if (((mes2==4)||(mes2==6)||(mes2==9)||(mes2==11))&&((dia2>30)||(dia2<0))) {printf("fecha invalida\n");n=0;}
							else {if ((mes2==2)&&(a==1)&&((dia2>29)||(dia2<1))){printf("fecha invalida\n");n=0;} else {
								if 	((mes2==2)&&(a!=0)&&((dia2>28)||(dia2<1))){printf("fecha invalida\n");n=0;} else { 
									if((mes2<13)&&  (((mes2==1)||(mes2==3)||(mes2==5)||(mes2==7)||(mes2==8)||(mes2==10)||(mes2==12))&&(dia2<32))){n=1;}
									if((mes2<13)&&  (((mes2==4)||(mes2==6)||(mes2==9)||(mes2==11))&&(dia2<31))){n=1;}else {
										if((mes2<13)&&(mes2==2)&&(a==0)&&(dia2<30)){n=1;}else{
											if	((mes2==2)&&(a!=0)&&(dia2<29)){n=1;}}}}}}}}}}}
					j= 4-dia2 ;
					k= 10-mes2;
					s= 2023-anio2;	
					if((j<1)&&((mes2==2)||(mes2==4)||(mes2==6)||(mes2==8)||(mes2==9)||(mes2==11)||(mes2==1))){j=j+31;k=k-1;} else {
						if((j<1)&&((mes2==5)||(mes2==7)||(mes2==10)||(mes2==12))){j=j+30;k=k-1;}else{
							if((j<1)&&(mes2==3)&&(a==0)){j=j+29;k=k-1;}else {
								if((j<1)&&(mes2==3)&&(a!=0)){j=j+28;k=k-1;}}}} 
					if((k<1)&&(s>=1)) {k=k+12;s=s-1;} 
					if((k==0)&&(s==0)){k=0;s=0;}
					edad2=funcion_edad(s,k,j);
					
					}
					if(strcmp(nombre,nombre3)==0){
						a=anio3%4;
						if(anio3>2023) {printf("fecha no valida\n");n=0;}else {
							if((anio3==2023)&&(mes3>10)){printf("fecha no valida\n");n=0;}else{
								if((anio3==2023)&&(mes3==10)&&(dia3>4)){printf("fecha no valida\n");n=0;}else{
							if((mes3>12)||(mes3<1)) {printf("fecha no valida\n");n=0;}else {
								if  (((mes3==1)||(mes3==3)||(mes3==5)||(mes3==7)||(mes3==8)||(mes3==10)||(mes3==12))&&((dia3>31)||(dia3<0))){printf("fecha invalida\n");n=0;} 
								else {if (((mes3==4)||(mes3==6)||(mes3==9)||(mes3==11))&&((dia3>30)||(dia3<0))) {printf("fecha invalida\n");n=0;}
								else {if ((mes3==2)&&(a==1)&&((dia3>29)||(dia3<1))){printf("fecha invalida\n");n=0;} else {
									if 	((mes3==2)&&(a!=0)&&((dia3>28)||(dia3<1))){printf("fecha invalida\n");n=0;} else { 
										if((mes3<13)&&  (((mes3==1)||(mes3==3)||(mes3==5)||(mes3==7)||(mes3==8)||(mes3==10)||(mes3==12))&&(dia3<32))){n=1;}
										if((mes3<13)&&  (((mes3==4)||(mes3==6)||(mes3==9)||(mes3==11))&&(dia3<31))){n=1;}else {
											if((mes3<13)&&(mes3==2)&&(a==0)&&(dia3<30)){n=1;}else{
												if	((mes3==2)&&(a!=0)&&(dia3<29)){n=1;}}}}}}}}}}}
						j= 4-dia3 ;
						k= 10-mes3;
						s= 2023-anio3;	
						if((j<1)&&((mes3==2)||(mes3==4)||(mes3==6)||(mes3==8)||(mes3==9)||(mes3==11)||(mes3==1))){j=j+31;k=k-1;} else {
							if((j<1)&&((mes3==5)||(mes3==7)||(mes3==10)||(mes3==12))){j=j+30;k=k-1;}else{
								if((j<1)&&(mes3==3)&&(a==0)){j=j+29;k=k-1;}else {
									if((j<1)&&(mes3==3)&&(a!=0)){j=j+28;k=k-1;}}}} 
						if((k<1)&&(s>=1)) {k=k+12;s=s-1;} 
						if((k==0)&&(s==0)){k=0;s=0;}
						edad3=funcion_edad(s,k,j);
						
					}
					
					
					
					
				}while(n!=1);n=0;
			}
		} 
		if ((strcmp(d,"no")==0)||(strcmp(nombre,"NO")==0)){x=0;}} while(x!=0);
	
	if ((edad1<edad2)&&(edad2<edad3)) {
		printf("%s ",nombre1); printf("%d\n",edad1);
		printf("%s ",nombre2); printf("%d\n",edad2);
		printf("%s ",nombre3); printf("%d\n",edad3);} else {
		if((edad1<edad3)&&(edad3<2)){ 
			printf("%s ",nombre1); printf("%d\n",edad1);
			printf("%s ",nombre3); printf("%d\n",edad3);
			printf("%s ",nombre2); printf("%d\n",edad2);} 
		else { 
			if((edad2<edad3)&&(edad3<edad1)){
				printf("%s ",nombre2); printf("%d\n",edad2);
				printf("%s ",nombre3); printf("%d\n",edad3);
				printf("%s ",nombre1); printf("%d\n",edad1);
			} else {
				if((edad2<edad1)&&(edad1<edad3)){
					printf("%s ",nombre2); printf("%d\n",edad2);
					printf("%s ",nombre1); printf("%d\n",edad1);
					printf("%s ",nombre3); printf("%d\n",edad3);
				} else {
					if((edad3<edad1)&&(edad1<edad2)){
						printf("%s ",nombre3); printf("%d\n",edad3);
						printf("%s ",nombre1); printf("%d\n",edad1);
						printf("%s ",nombre2); printf("%d\n",edad2);
					} else {
						if ((edad3<edad2)&&(edad2<edad1)){
							printf("%s ",nombre3); printf("%d\n",edad3);
							printf("%s ",nombre2); printf("%d\n",edad2);
							printf("%s ",nombre1); printf("%d\n",edad1);
						}else {
							if((edad1==edad2)&&(edad2==3)) {
								printf("misma edad\n%s ",nombre1);printf("%d\n",edad1); 
								printf("%s ",nombre2);printf("%d\n",edad2);
								printf("%s ",nombre3);printf("%d\n",edad3);
								
							}else {
								if((edad1==edad2)&&(edad2<edad3)) {
									printf("los primeros 2 tienen la misma edad \n%s  \n",nombre1);printf("%d\n",edad1);
									printf("%s ",nombre2);printf("%d\n",edad2);
									printf("%s ",nombre3);printf("%d\n",edad3);
								}else {
									if((edad1==edad3)&&(edad1<edad2)){
										printf("los primeros 2 tienen la misma edad  \n %s  \n",nombre1);printf("%d\n",edad1);
										printf("%s ",nombre3);printf("%d\n",edad3);
										printf("%s ",nombre2);printf("%d\n",edad2);
									}else{
										if((edad2==edad3)&&(edad3<edad1)){
											printf("los primeros 2 son iguales \n%s ",nombre2);printf("%d\n",edad2);
											printf("%s ",nombre3);printf("%d\n",edad3);
											printf("%s ",nombre1);printf("%d\n",edad1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");	
	return 0;
}


