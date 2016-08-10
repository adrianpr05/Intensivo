#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int np,p,ch,cm,mayorp=0,cp,cca;
	float ptotal;
	char r,nom[20],s,tipo,nomaux[20];
	ch=0;cm=0;
	printf("Desea ingresar s/n");
	r=getch();//no mueestra en pantalla la letra
	r=tolower(r);//pasa a minuscula si esta en mayuscula
	while(r=='s'){
		printf("\nNombre del estudiante:  ");
		fflush(stdin);//limpia el buffer
		gets(nom);
		printf("\nsexo (M)  (F)");
		scanf("%c",&s); 
		printf("\numero de prendas:  ");
		scanf("%d",&np);
		if(s=='f'){
			cm++;
		}
		else{
			ch++;
		}
		cp=0;cca=0;
		for(p=0;p<np;p++){
			printf("\nDescripcion (p)antalon,(c)amisa,(v)estido,(o)tro:  ");
			tipo=getch();tipo=tolower(tipo);
			if(tipo=='p'){
				cp++;
			}
			if(tipo=='c'){
				cca++;
			}
			
		}
		printf("\ntrajiste %d pantalones y %d camisas",cp,cca);
		if(cp>=mayorp&&cca>4){
			mayorp=cp;
			strcpy(nomaux,nom);//compiar la segunda cadena a la primera
			
		}
		ptotal=((cca*450)+(cp*650))/1000;
		printf("\ntrajiste %f kg de ropa",ptotal);
		printf("\notro estudiante s/n:   ");
		r=tolower(getch());
		
	}
	printf("\nEl estudiante %s trajo mas pantaoles (%d)",nomaux,cp);
	if(ch<cm){
		printf("\nLos hombres usan menos la lavadora");
	}else{
		if(cm<ch){
			printf("\nLas mujeres usan menos la lavadora");
			
		}else{
			printf("\nlos dos la usan por igual");
		}
	}
	
	return 0;
}
