#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void vector();
int main(int argc, char *argv[]) {
	printf("\nvector de numeros enteros");
	vector();
	return 0;
}
void vector(){
	srand(time(NULL));
	int vec[T];
	int x,n,par=0,pos=0,neg=0;
	int mayor,menor;
	do{
	
    	printf("\nNumero de elementos del vector:   ");
	    scanf("%d",&n);	
	}while(n<1||n>T);
	
	for(x=0;x<n;x++){
		vec[x]=rand()%n+101;
	}
	
	mayor=vec[0];menor=vec[0];
	
	for(x=0;x<n;x++){
		printf("\nvec[%d]:  %d",x,vec[x]);
		if(vec[x]%2==0){
			par++;
		}
		if(vec[x]>0){
			pos++;
		}
		if(vec[x]<0){
			neg++;
		}
		if(vec[x]>mayor){
			mayor=vec[x];
		}
		if(vec[x]<menor){
			menor=vec[x];
		}
	}
	printf("\nNumeros pares %d",par);
	printf("\nNumeros positivos %d",pos);
	printf("\nNumeros negativos %d",neg);
	printf("\nMayor es %d",mayor);
	printf("\nMenor es %d",menor);
	
}
