#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,num,i=1;
	srand(time(0));
	printf("ingrese numero para crear matriz cuadrada:  ");
	scanf("%d",&num);
	int matriz[num][num];
	for(x=0;x<num;x++){
		for(y=0;y<num;y++){
			matriz[x][y]=rand()%1;
		}
	}

	for(x=0;x<num;x++){
		printf("\n");
		for(y=0;y<num;y++){
	    	if(x==y){
	    		printf(" * ");
			}else if(x+y==num-1){
				printf(" * ");
			}else if(x==num/2&&y>=0){
	    		printf(" * ");
			}else{
				printf(" %d ",matriz[x][y]);
			}
			
		}
	}
	

	
	return 0;
}
