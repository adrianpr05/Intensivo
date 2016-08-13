#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,cap,cont=0,i=0,metal=0,horm=0,mayor1=-99,mayor=-99,seg=0,menor1=9999,seguro;
	char r,t,nom[30],puente[30];
	float corr,mixto=0,total=0,promedio,menor=9999;
	for(x=1;x<=3;x++){
	
		printf("\n\nTroncal: (%d)",x);
			do{
				printf("\nPuente %d",i+1);
				printf("\nNombre:  ");
				fflush(stdin);
				gets(nom);
				printf("\nTipo de estructura (M)etalico  (H)ormigon  (X)Mixto:   ");
				scanf("%c",&t);
				if(t=='x'){
					printf("\nPuente en estado no definido");
					mixto++;
				}
				if(t=='m'&&x==1){
					metal++;
				}
				if(t=='h'&&x==1){
					horm++;
				}
				printf("\n%d   %d",metal,horm);
			    if(t!='x'){
			    	printf("\nCapacidad max de toneladas:  ");
			    	scanf("%d",&cap);
				    printf("\nNivel de corrosion?:  ");
			    	scanf("%f",&corr);
			    	
			    }
				
				if(corr>65){
					seg++;
				}
				
				if(cap>50&&corr>45&&t!='x'){
					printf("\nPuente en alto riesgo");
				}else if(cap<50&&corr<45&&t!='x'){
					printf("\nPuente transitable");
				}
				printf("\nHay otro puente en esta via?:  s/n");
				r=getch();
			    if(r=='s'){
			    	i++;
			    	
			    }else{
			    	i=0;
			    }
				if(corr<menor){
					menor=corr;
				}
				total++;
			}while(r=='s');
			promedio=mixto/total;
			if(promedio>0){
				printf("\nPromedio de puentes mixtos:  %.2f%",promedio);
			}
			
			if(horm<metal&&x==1){
				printf("\nhay menos puentes de hormigon (%d) que de metal (%d) en la troncal %d",horm,metal,x);
			}
			seguro=menor;
			if(seguro<menor1){
				menor1=seguro;
				strcpy(puente,nom);
			}
			mixto=0;total=0;
		   printf("\nPuente seguro de la troncal (%d) %.2f",menor,x);
	
	}
	printf("\nLa via mas segura es el puente: %s",puente);
	return 0;
}
