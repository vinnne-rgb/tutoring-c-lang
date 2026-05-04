#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
반복문을 사용하여 구구단 프로그램을 완성한다.
1~9 범위의 정수 n이 주어진다.
구구단 N단을 출력하라.
*/
int main(void) {
    // 파일 입출력 설정
    freopen("q6in.txt", "r", stdin);
    freopen("q6out.txt", "w", stdout);

    for (int n = 1; n <= 9; n++)
    {
        printf("===%d단===\n", n);
        for (int i = 1; i <= 9; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("\n");
    }
    return 0;
}