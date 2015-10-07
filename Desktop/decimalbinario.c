#include<stdio.h>

int main(){
	int i,j,n,a[1000000];
	printf("Igrese un numero entero:  \n");
	scanf("%d",n);
	while(n>0){
		a[i]=n%2;
		n/=2;
		i++
	}

	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
	printf("\n");
	return 0;
}