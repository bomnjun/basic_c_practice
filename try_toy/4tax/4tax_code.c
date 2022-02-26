//비주얼 스튜디오 2019에서 작성. vscode실행시 헤더관련 오류가 나올수 있음.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <windows.h>

int origin(double n);
int gookmin(double gook); //국민연금 4.5%
int gungang(double gun); //건강보험 3.43%
int janggi(double jang); // 장기요양 건강보험의 11.52%
int goyong(double go); // 고용보험 0.8%

int main(void)
{
	int income, oincome, gook, gun, jang, go, four;

	printf("\n\t  ☆☆☆ 2022년 세금 기준으로 분할☆☆☆\n\n");
	printf("\t국민연금 4.5%%\t건강보험 3.495%%\n\t장기요양보험 12.27%%\t고용보험 0.8%%\n");
	printf("\n\n\t!!!참고사항!!!\n\t소수점은 절사하여 표현\n");
	printf("\n\n\t !!!주의사항!!!\n\t대략적인 계산임, 신뢰하지 말 것\n");

	while (1)
	{
		printf("\n\n\n\t☆☆☆☆☆ 받은 월급을 입력하시오(원) ☆☆☆☆☆\n");
		printf("\n\t[[[[종료를 원하면 0을 입력하시오.]]]]\n");
		scanf("%d", &income);		


		oincome = origin(income);
		gook = gookmin(oincome);
		gun = gungang(oincome);
		jang = janggi(gun);
		go = goyong(oincome);
		four = gook + gun + jang + go;

		system("cls");

		printf("\t예상 세전 금액은\n\n\t%d\n\n\t입니다. (+- 최대 50원)\n", oincome);
		printf("\n\t국민연금 %d 원\n", gook);
		printf("\n\t건강보험 %d 원\n", gun);
		printf("\n\t장기요양보험 %d 원 \n", jang);
		printf("\n\t고용보험 %d 원\n", go);
		printf("\n\t총 세금 금액은 %d 원", four);
		_getch();

		system("cls");
	}
	return (0);
}


int origin(double n)
{
	int result;

	result = (n * 1.101611);
	return ((int)result);
}

int gookmin(double gook) {
	gook = (gook * 0.045) + 0.5;

	return ((int)gook);
}

int gungang(double gun) {
	gun = (gun * 0.03495) + 0.5;

	return ((int)gun);
}

int janggi(double jang) {
	jang = (jang * 0.1227) + 0.5;

	return ((int)jang);
}

int goyong(double go) {
	go = (go * 0.008) + 0.5;

	return ((int)go);
}

// 메모
// 총 세금에서 각각 차지하는 부분
//국민 45000원  48.78 %
//0.01 % 해서(48.79 %) 계산시 - 45002
//
//건강 34950원 37.89 %
//0.01 % 해서(37.9 %) 계산시 - 34958
//
//장기요양보험 4288원 12.268 %
//0.01 % 해서(12.27 %) 계산시 - 4288
//
//고용보험 8000원 8.67 %
//0.1 % 해서(8.68 %) - 8006원