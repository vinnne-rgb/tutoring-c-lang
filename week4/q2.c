
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
1~100 사이의 정수n이 주어진다.
이후 n개의 -1억~1억 사이의 정수가 주어진다.
n개의 입력된 정수를 순서대로 출력하라.
*/
int main(void) {
    // 파일 입출력 설정
    freopen("q2in.txt", "r", stdin);
    freopen("q2out.txt", "w", stdout);

    int n;
scanf_s("%d", &n);
for (int i = 0; i < n; i++)

    {
	  int x;
	  scanf_s("%d", &x);
	  printf("%d\n", x);
    }

    return 0;
}