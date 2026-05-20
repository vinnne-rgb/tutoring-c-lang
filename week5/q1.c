
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
10이하의 정수 n이 주어진다.
1~3000 사이의 정수 year가 n개 주어진다.
year가 윤년이면 1, 아니라면 0을 반환하는 함수 leap_year을 구현한다.
이 작업을 n번 반복하면서 함수 leap_year을 호출하여 결과를 출력하라.
*/

int leap_year(int year)
{
	if (year % 400 == 0) return 1;
	if (year % 100 == 0) return 0;
	if (year % 4 == 0) return 1;
	return 0;
}

int main(void)
{
	int n;
	scanf_s("%d", &n); // year 개수 입력

	for (int i = 0; i < n; i++)
	  {
		int year;
		scanf_s("%d", &year);
		printf("%d\n", leap_year(year));
	  }

	return 0;
}
