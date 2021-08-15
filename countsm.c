#include <stdio.h>

int main(void) {
	int n, x, j;
	scanf("%d %d", &n, &x);
	j = n;
	for (int i = 1; i <= n; i++) {
		j--;
		if (j < x) {
				printf("%d ", j+1);
			}

	}



	return 0;
}