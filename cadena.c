#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palabra[50][50],ultima[1],ant[2],palabra2[50][50];
	int x,y;
	for(x=0;x<50;x++){
		fflush(stdin);
		gets(palabra[x]);
		for(y=0;y<strlen(palabra[x]);y++){
			if(y==strlen(palabra[x])-1||y==strlen(palabra[x])-2){
				ultima[y]=palabra[x][y];
				printf("%c",ultima[y]);
			}
				
		}
		printf("\n");
		fflush(stdin);
		gets(palabra2[x]);
		for(y=0;y<strlen(palabra2[x]);y++){
			if(y==0||y==1){
				ant[y]=palabra2[x][y];
				printf("%c",ant[y]);
			}
				
		}
	   
	   
		
	}
	
	return 0;
}
