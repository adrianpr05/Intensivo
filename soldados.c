
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int soldados,x,conta=1,band;
	char r;
	do{
			printf("Cuantos soldados dispone?:  ");
        	scanf("%d",&soldados);
        	if(soldados<1){
        		printf("\nImposible, debe haber mas soldados  \n");
                
			}
			if(soldados>25000){
				printf("\nExcediste la cantidad de soldados. solo hay 25000\n");
	
	             
			}
	            
	    		printf("\ncontinuar s/n:   ");
	            r=getch();
	            system("cls");
	           	x=1;
   
	if(r=='s' && (soldados>0 && soldados<=25000)){
	    	do{
		
	   	     if(soldados%x==0){
		        	conta++;
               }    
	          x++;
        	}while(x!=soldados);
		printf("\nHay %d de formas para distribuir a los soldados",conta);
		printf("\n\nDesea repetir  s/n:   ");
        r=getch();
    }
    
    
      	}while( r=='s');

	return 0;
}
