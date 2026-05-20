#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

/*
10이하의 정수 n이 주어진다.
표준라이브러리 stdlib.h의 랜덤 함수 rand()를 사용하여,
1~100 사이의 값을 출력하는 함수 solution을 구현한다.
이 작업을 n번 반복하라.
미리 작성되어 있는 srand() 코드는 수정하지 않는다.
*/

void solution(int n)
{
    for (int i = 0; i < n; i++)
    {
        int r = 1 + rand() % 100; // 1~100 범위
        printf("%d\n", r);
    }
}

int main()
{
    srand(42);

    int n;
    solution(n);

    return 0;
}
