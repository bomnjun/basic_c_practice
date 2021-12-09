# include <stdio.h>

int main(void) {
	int h, m;
	scanf("%d %d", &h,&m);
	
	if (m < 45) {
		m = m + 15;
		if (h == 0) { 
			h = h +24; }
		h = h - 1;
	}
	else if (m >=45) {
		m = m - 45;
		
	}
	printf("%d %d\n", h, m);


	

	return 0;

}