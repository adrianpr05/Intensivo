#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
   struct materia{
   	 char nombre[20];
   	 int semestre;
   	 int nota[4];
   };
   struct estudiante{
	char nom[30];
	int cedula,edad;
	char carrera[30]; 
	struct materia mat[20];
};
int main(int argc, char *argv[]) {
	
	
	int x,y,num,acum=0,z,estu;
	float acumdef=0,par,def[10];
	struct estudiante sec[5];
	
    printf("\nNumero de estudiantes:  ");
    scanf("%d",&estu);
	for(x=0;x<estu;x++){
		printf("\n\nEstudiante numero: %d",x+1);
		printf("\nNombre: ");
		fflush(stdin);
		gets(sec[x].nom);
		printf("\nCedula:  ");
		scanf("%d",&sec[x].cedula);
		printf("\nEdad:  ");
		scanf("%d",&sec[x].edad);
		printf("\nCarrera que cursa:  ");
		fflush(stdin);
		gets(sec[x].carrera);
		printf("\nCuantas materias cursa:  ");
		scanf("%d",&num);
		for(y=0;y<num;y++){
			printf("\nNombre de la materia:  ");
			fflush(stdin);
			gets(sec[x].mat[y].nombre);
			printf("\nCuantos parciales presento:  ");
			scanf("%f",&par);
			for(z=0;z<par;z++){
				printf("\nNota del parcial %d :   ",z+1);
				scanf("%d",&sec[x].mat[y].nota[z]);
				acumdef=acumdef+sec[x].mat[y].nota[z];
			}
		    def[y]=acumdef/par;
		    
		}
		
	}
	printf("\n");
	for(x=0;x<estu;x++){
		printf("\nEstudiante Numero %d  Nombre:  %s  Su definitiva es: %f     ",x+1,sec[x].nom,def[x]);
	}
	return 0;
}
