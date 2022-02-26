//비주얼슈튜디오 2019에서 작성. 4대보험 요율중 고용보험은 7월에 새로 개정됨.
// 다른 프로그램에서 작성시 헤더오류가 나올수있음.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <windows.h>

int gookmin(double gook); //국민연금 4.5%
int gungang(double gun); //건강보험 3.43%
int janggi(double jang); // 장기요양 건강보험의 11.52%
int goyong(double go); // 고용보험 0.8%


int main(void) {
	int gook, gun, jang, go;
	int income, four;
	int result;

	printf("\n\t☆☆☆☆ 예상 세후 월급계산기 (4대 보험만 적용) ☆☆☆☆\n");
	printf("\n\t 2022년 기준 세금 적용\n\t  국민연금 4.5%%\n\t  건강보험 3.495%%\n\t  장기요양보험 12.27%%\n\t  고용보험 0.8%%\n");
	printf("\n\n\t !!!참고사항!!!\n\n\t 소수점은 절사하여 표현\n");
	printf("\n\n\t !!!주의사항!!!\n\n\t대략적인 계산임 신뢰하지 말 것\n");

	while (1)
	{
		printf("\n\n\n\t세전 수입을 입력하시오.(원)\n\n");
		printf("\t[[[[종료를 원하면 0을 입력하시오.]]]]\n");
		scanf("%d", &income);
		if (income == 0)
		{
			break;
		}


		gook = gookmin(income);
		gun = gungang(income);
		jang = janggi(gun);
		go = goyong(income);

		result = income - (gook + gun + jang + go);
		four = gook + gun + jang + go;

		system("cls");

		printf("\t예상 세후 수입은\n\n\t%d\n\n\t입니다. (+- 최대 10원)\n", result);

		printf("\n\t국민연금 %d 원\n", gook);
		printf("\n\t건강보험 %d 원\n", gun);
		printf("\n\t장기요양보험 %d 원\n", jang);
		printf("\n\t고용보험 %d원 \n", go);
		printf("\n\t 총 세금 금액은 %d 원", four);
		_getch();

		system("cls");

	}
	return(0);

}

int gookmin(double gook) {
	gook = (gook * 0.045)+0.5;
	
	return int(gook);
}

int gungang(double gun) {
	gun = (gun * 0.03495)+0.5;

	return int(gun);
}

int janggi(double jang) {
	jang = (jang * 0.1227)+0.5;

	return int(jang);
}

int goyong(double go) {
	go = (go * 0.008)+0.5;

	return int(go);
}