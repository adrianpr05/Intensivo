#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *vec,**mat,i,j,n,f,c;
	srand(time(NULL));
	printf("\nNumero de elementos del vector: ");
	scanf("%d",&n);
	vec=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		*vec=i+1;
		 vec++;
			
	}
	vec=vec-n;
	for(i=0;i<n;i++){
		printf("\n%d",*vec);
		vec++;
	}
	printf("\nFilas:  ");
	scanf("%d",&f);
	printf("\nColumnas:  ");
	scanf("%d",&c);
	mat=(int**)malloc(f*sizeof(int*));
	for(i=0;i<f;i++){
		mat[i]=(int*)malloc(c*sizeof(int));
	}
	for(i=0;i<f;i++){
		 for(j=0;j<c;j++){
		 	 mat[i][j]=rand()%50+10;
		 }
	}
	
	for(i=0;i<f;i++){
		printf("\n");
		 for(j=0;j<c;j++){
		 	printf(" %d ",mat[i][j]);
		 }
	}
	return 0;
}
