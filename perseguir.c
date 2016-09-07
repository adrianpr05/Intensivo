#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define DER 77
#define IZQ 75
#define ARR 72
#define ABJ 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void imprimir(int mapa[20][20]);
int main(int argc, char *argv[]) {
	
int mapa[20][20]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	             {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},      };
	             
	             int fi,co;
	             char tecla;
	             fi=2;
	             co=2;
	             tecla=0;
	             mapa[fi][co]=2;
	             imprimir(mapa);
	             while(tecla!='x'){
	             	 tecla=0;
	             	 if(kbhit()){
	             	 	tecla=getch();
					  }
					  mapa[fi][co]=0;
					  if(tecla==DER){
					  	 if(mapa[fi][co+1]!=1){
					  	 	 co++;
						   }
					  }
					  if(tecla==IZQ){
					  	if(mapa[fi][co-1]!=1){
					  		 co--;
						  }
					  }
					  if(tecla==ARR){
					  	if(mapa[fi-1][co]!=1){
					  		 fi--;
						  }
					  }
					  if(tecla==ABJ){
					  	if(mapa[fi+1][co]!=1){
					  		fi++;
						  }
					  }
					 mapa[fi][co]=2;
					 imprimir(mapa); 
					 Sleep(100);	
				 }
	             
	             
	return 0;
}
 
void imprimir(int mapa[20][20]){
	int x,y;
	system("cls");
	for(x=0;x<20;x++){
		printf("\n");
		 for(y=0;y<20;y++){
		 	if(mapa[x][y]==0){
		 		printf(" ");
			 }
			 if(mapa[x][y]==1){
		 		printf("\4");
			 }
			 if(mapa[x][y]==2){
		 		printf("\1");
			 }
			 
		 }
	}
}



