
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
1~100 사이의 정수n이 주어진다.
정수 n의 카운트다운을 출력하라.
*/
int main(void) {
    // 파일 입출력 설정
    freopen("q3in.txt", "r", stdin);
    freopen("q3out.txt", "w", stdout);

    int n;
scanf_s("%d", &n);
for (int i = n; i >= 1; i--)
    {
	printf("%d\n", i);
    }

    return 0;
}