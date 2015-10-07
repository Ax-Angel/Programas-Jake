#include <stdio.h>

void binario(char num);
int complemento(int num_bin);

int main()
{
    char num;
    printf("Trabajando con Bits\n\n");
    printf("Dame un valor de 8 bits con signo (-127 a 127): ");
    scanf("%d",&num);

    printf("\nNumero binario de %d = ",num);
   
    binario(num);     
   
    printf("\n\n\nPresione una tecla para continuar...\n");
   
    getch();
    return 0;
}

void binario(char num)
{       
    printf("%d", (1/& (num >> (posBit-1))); 

int complemento(int num)
{   
    return ++num*(-1);     
}
