#include <stdio.h>

int main(void){
	for (int n = 1; n <= 9; n++){
		printf("***** %d단 입니다. *****\n\n",n);

		for (int i = 1; i <=9; i++){
			printf("%d * %d = %d\n",n,i,n*i);
		}
		printf("\n");
	}
	return 0;
}