#include <iostream>
#include <stdio.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,uni,dec,cen,unim,v[4],aux,acum=0,acum2=0,t[4],band;
	int a,b,c,s,res,z,i,n,j,x,y,aux2,constante,positivo,cont=0;
	char si;
  do{	
	do{
		printf("\nIngrese un numero de cuatro cifras:   ");
		scanf("%d",&num);
		if(num<1000||num>10000){
			printf("\nEl numero no contiene 4 cifras\n");
			system("pause");
			system("cls");
		}
		
	}while(num<1000||num>10000);
 
 	
 do{
 
 
 
    unim=num/1000;
    a=unim*10;
    cen=(num/100)-a;
    res=(num/100)*10;
    dec=(num/10)-res;
    b=(num/10)*10;
    uni=num-b;
    /*printf("\nUnidad de mil:  %d",unim);
    printf("\nCentena:        %d",cen);
    printf("\nDecena:         %d",dec);
    printf("\nUnidad:         %d",uni);*/
    v[0]=uni;
    v[1]=dec;
    v[2]=cen;
    v[3]=unim;
    t[0]=uni;
    t[1]=dec;
    t[2]=cen;
    t[3]=unim;
    for( i=0;i<4;i++){
    	for( j=i;j<4;j++){
    		if(v[i]<v[j+1]){
    		 aux=v[i];
    			v[i]=v[j+1];
    			v[j+1]=aux;
    		}
    		   if(v[i]>v[j+1]){
    			    aux=v[i];
    		    	v[i]=v[j+1];
    			    v[j+1]=aux;
    			}
    		
    	   
    	}
    
    }
    for( x=0;x<4;x++){
    	for( y=x;y<4;y++){
    		if(t[x]>t[y+1]){
    		 aux2=t[x];
    			t[x]=t[y+1];
    			t[y+1]=aux2;
    		}
    		   if(t[x]<t[y+1]){
    			    aux2=t[x];
    		    	t[x]=t[y+1];
    			    t[y+1]=aux2;
    			}
    		
    	   
    	}
    
    }
    for(i=0;i<4;i++){	
    	acum=(acum*10)+v[i];
    }
      //printf("\n%d",acum);
    for(x=0;x<4;x++){
    	acum2=(acum2*10)+t[x];
    }
      //printf("\n%d",acum2);
    if(acum!=acum2){
    	if(acum<acum2){
    		constante=acum2-acum;
    		printf("\nIteracion numero: %d   %d-%d=%d",cont+1,acum2,acum,constante);
    		cont++;
    		num=constante;
    		
    	}else if(acum2<acum){
    		constante=acum-acum2;
    		 printf("\nIteracion numero: %d  %d-%d=%d",cont+1,acum,acum2,constante);
    		 cont++;
    		num=constante;
    	}
    }if(acum==acum2){
    	printf("\n Los numeros son iguales. no se puede hacer la resta");
    
    }
    acum=0;
    acum2=0;
   
      }while(constante!=6174);
            printf("\n\nRepetir de nuevo: presione (s)    salir: presione (n):    ");
            fflush(stdin);
            scanf("%c",&si);
            if(si=='s'){
            	band=1;
			}
			else{
				band=0;
			}
           
         
 }while(band==1); 
	return 0;
}
