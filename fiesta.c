#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int per,i,j;
	char nom[100];
	int a;
	printf("\ncuantas personas vinieron a la fiesta?:   ");
	scanf("%d",&per);
	for(i=0;i<per;i++){
		printf("\n\n%d: Soy ",i+1);
		fflush(stdin);
		gets(nom);
		if(isdigit(nom[i])){
			break;
		}
		printf("\nHola, %s",nom);
		
		
			
	}
	return 0;
}
