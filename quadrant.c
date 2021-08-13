#include <stdio.h>

int main(void) {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	if (0 <= x && 0 <= y) {
		printf("1\n");
	}
	else if (0 >= x && 0 <= y) {
		printf("2\n");
	}
	else if (0 >= x && 0 >= y) {
		printf("3\n");
	}
	else if (0 <= x && 0 >= y){
		printf("4\n");
	}
	return 0;
}