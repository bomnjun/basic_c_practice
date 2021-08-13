#include <stdio.h>

int main(void){
	int n,n1;
	int a1,a2,a3,a4;
	scanf("%d",&n);
	scanf("%d",&n1);

	a4 = (n1%10)*n;
	a3 = (((n1%100)*n)-(a4))/10;
	a2 = ((n*n1)-(n1%100*n))/100;
	a1 = n*n1;

	printf("%d\n",a4);
	printf("%d\n",a3);
	printf("%d\n",a2);
	printf("%d\n",a1);
	
	return 0;
}