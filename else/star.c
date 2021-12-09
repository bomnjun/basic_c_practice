#include <stdio.h>

int main(void) {
	int s;
	scanf("%d",&s);

	for (int i = 1; i <= s; i++) {
		for (int k = i; k+1 <= s; k++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}