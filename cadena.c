#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palabra[50][50],ultima[1],ant[1],palabra2[50][50],aux,aux2,aux3,aux4;
	char ult[1],pen[1];
	int x,y;
	for(x=0;x<50;x++){
		printf("\n");
		fflush(stdin);
		gets(palabra[x]);
		for(y=0;y<strlen(palabra[x]);y++){
			if(y==strlen(palabra[x])-1){
				ultima[y]=palabra[x][y];
				//printf("%c",ultima[y]);
				aux2=ultima[y];
			}
			if(y==strlen(palabra[x])-2){
				ant[y]=palabra[x][y];
				aux=ant[y];
			}
				
		}
		//printf("\n%c  %c",aux,aux2);	
		printf("\n");
		
		
		fflush(stdin);
		gets(palabra2[x]);
		for(y=0;y<strlen(palabra2[x]);y++){
			if(y==0){
				ult[y]=palabra2[x][y];
				aux3=ult[y];
			}
			if(y==1){
				pen[y]=palabra2[x][y];
				aux4=pen[y];
			}
				
		}
	//	printf("\n%c   %c",aux3,aux4);
		if(aux==aux3&&aux2==aux4){
			printf("\ncontinua");
		}
		else{
			printf("\nNo son iguales");
			break;
		}
	   
		
	}
	
	return 0;
}
