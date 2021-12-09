#include <stdio.h>

int main(void) {
	int a, n;
	scanf("%d", &n);
	a = 0;
	for (int i = 1; i <= n; i++) {
		a += i;
	}
	
	printf("%d\n", a);
	return 0;
}