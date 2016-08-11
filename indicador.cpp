#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int centro,num,indicador,a,b,rango,total=0;
	char r;
	float porcentaje,cont=0,cont2=0;
	do{
        
	    printf("\n\nDesea jugar  s/n:  ");
    	r=getch();
    	if(r=='s'){
    	  total++;	
    	  printf("\n\nExremo derecho:  ");
    	  scanf("%d",&a);
    	  printf("\nExtremo izquierdo:  ");
    	  scanf("%d",&b);
    	  
    	  if(a<b){
    	    	centro=(a+b)/2;
    	    	printf("\n el centro del rango es:  %d",centro);
    	     	printf("\n\nIngrese numero:  ");
	            scanf("%d",&num);
	            if(num>=a&&num<=b){
	        	printf("\n El num %d esta en el rango de [%d,%d]  (Ganaste)",num,a,b);
	        	cont++;
	            }else{
	            	printf("\nperdiste");
	            	cont2++;
				}
				a=0;b=0;
		  }else{
		   	printf("\nEl extremo derecho no puede ser menor al izquierdo");
		  }
		  
		}
	
	}while(r=='s');
    porcentaje=(cont2/total)*100;
    printf("\nhas jugado %d veces",total);
	printf("\nrondas ganadas %0.0f",cont);
	printf("\nrondas perdidas %0.0f ",cont2);
	printf("\nporcentaje de veces que has perdido %.2f   ",porcentaje);
	return 0;
}
