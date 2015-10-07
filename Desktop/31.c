#include<stdio.h>
#include<string.h>
main(){
int i,cont=0;
char A[100]='\0', B[100]='\0';
printf("Ingrese la palabra: ");
fgets(A, 100, stdin);
cont=strlen(A);
while(cont>=0){
	B[cont]=A[cont-1];
	cont--;
}
if(strcmp(A,B)==0)
printf("\nLa palabra %s es un palindromo",A);
else
printf("\nLa palabra %s no es un palindromo",A);
}
