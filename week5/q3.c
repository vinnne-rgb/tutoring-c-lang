
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

/*
5이하의 정수 n이 주어진다.
표준라이브러리 stdlib.h의 랜덤 함수 rand()를 사용하여 1~100 사이의 값을 2개 생성하고,
오름차순으로 출력하는 함수 solution을 구현한다.
이 작업을 n번 반복하라.
미리 작성되어 있는 srand() 코드는 수정하지 않는다.
*/

void solution(int n) {
    int arr[2];
    for (int i = 0; i < n; i++) {
        arr[0] = 1 + rand() % 100;
        arr[1] = 1 + rand() % 100;

        // 오름차순 정렬
        if (arr[0] > arr[1]) {
            int temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }

        printf("%d %d\n", arr[0], arr[1]);
    }
}

int main() {
    int n;
    scanf_s("%d", &n);

   
    solution(n);

    return 0;
}
