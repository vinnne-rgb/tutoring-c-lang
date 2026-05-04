#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
1~9 범위의 정수 n이 주어진다.
1부터 시작하여 정수 n까지 3 6 9 게임 규칙에 맞게 값을 출력하라.
숫자에 3, 6, 9중 한개 이상 포함된 경우 X를 출력하고, 아닌 경우 원래 값을 출력하라.
*/
int main(void)
{
    // 파일 입출력 설정
    freopen("q5in.txt", "r", stdin);
    freopen("q5out.txt", "w", stdout);

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}