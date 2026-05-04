
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
-1억~1억사이의 정수가 주어진다.
0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단하라.
*/
int main(void) {
    // 파일 입출력 설정
    freopen("q1in.txt", "r", stdin);
    freopen("q1out.txt", "w", stdout);

   int x;

while (1)
    {
	scanf_s("%d", &x);
	if (x == 0) break;
	printf("%d\n", x);
    }
    
    return 0;
}