#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char palabra[80];
 int i,h,j;
   printf("\t Programa que determina si una palabra es palindromo");
   printf("\n\nEscribe una palabra: ");
   scanf(" %s",palabra);
   i=strlen(palabra);
   i=i-1;
 for(h=0,j=i;h<=i/2;h++,j--)
          if(palabra[h]==palabra[j]){
          	printf("Es palindromo");
            break;
          }
             
 else{
 	printf("No es palindromo");
 	break;
 }
                
 getch();
}
