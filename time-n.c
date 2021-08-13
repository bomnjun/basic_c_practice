#include <stdio.h>
#include <stdlib.h>

void hx(int h);
void mx(int m);
void nx(int n);
void count(int h,int m, int n);

int main(void) {
	int h, m, n;
	printf("\n***** 시간 계산기(뺄셈만)*****\n\n\n");
	printf("**현재(원하는) 시를 입력하시오(0~24시)**\n");
	scanf("%d", &h);
	hx(h);
	printf("**현재(원하는) 분을 입력하시오**(0~59분)\n");
	scanf("%d", &m);
	mx(m);
	printf("**계산하고 싶은 시간을 입력하시오(0~59분)**\n");
	scanf("%d", &n);
	mx(n);

	count(h, m, n);
		
	return 0;
}


void hx(int h) {

	if (h > 24) {
		printf("\n시간을 정확히 입력해주세요.\n");
		exit(0);
	}
}

void mx(int m) {
if (m > 59) {
		printf("\n정확한 시간을 입력해주십시오.\n");
		exit(0);
	}
}

void nx(int n) {
if (n > 59) {
		printf("\n정확한 시간을 입력해주십시오.\n");
		exit(0);
	}
}

void count(int h,int m, int n) {
		if (m < n) {
		m = m + 60;
		if (h == 0) {
			h = h + 24;
		}
		h = h - 1;
		m = m - n;
	}
	else if (m >= n) {
		m = m - n;
	}
		printf("%d시 %d분\n", h, m);

}