#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define T 50
#define F 10
#define C 10

int cargar_vector(int vec[T], int tam);
int cargar_matriz(int mat[F][C], int fil, int col);
int imprimir_vector(int vec[T], int tam);
int imprimir_matriz(int mat[F][C], int fil, int col);


int main(int argc, char *argv[]) {
	
	int vector[T], matriz[F][C], n, filas, colum;
	do{
		printf("\n\n\t Numero de elementos del vector [5 - %d]: ",T);
		scanf("%d",&n);
	}while(n<5 || n>T);

	do{
		printf("\n\n\t Numero de filas de la matriz [3 - %d]: ",F);
		scanf("%d",&filas);
	}while(filas<3 || filas>F);
	
	do{
		printf("\n\n\t Numero de columnas de ka matriz [3 - %d]: ",C);
		scanf("%d",&colum);
	}while(colum<3 || colum>C);
	
	srand(time(0));
	
	cargar_vector(vector,n);
	cargar_matriz(matriz,filas,colum);
	imprimir_vector(vector,n);
	imprimir_matriz(matriz,filas,colum);
	return 0;
}

int cargar_vector(int vec[T], int tam){
	int i;
	for(i=0;i<tam;i++){
		vec[i]=rand()%100 + 100;
	}

}

int cargar_matriz(int mat[F][C], int fil, int col){
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			mat[i][j]=rand()%100 + 100;
		}
	}
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(mat[])
		}
	}
	

}
int imprimir_vector(int vec[T], int tam){
	
	int i;
	system("CLS");
	printf("\n\n\t\t\t ** VECTOR **\n\n");
	for(i=0;i<tam;i++){
		printf("\n\t %d ",vec[i]);
	}
	printf("\n\n\t\t");
	system("PAUSE");
}
int imprimir_matriz(int mat[F][C], int fil, int col){

	int i,j;
	system("CLS");
	printf("\n\n\t\t\t ** MATRIZ **\n\n");
	for(i=0;i<fil;i++){
		printf("\n");
		for(j=0;j<col;j++){
			printf(" %d ",mat[i][j]);
		}
	}

	printf("\n\n\t\t");
	system("PAUSE");
}

