
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
'a' ~ 'z' 영문자 1개가 주어진다.
주어진 영문자까지의 알파벳을 순서대로 출력하라.
*/
int main(void) {
    // 파일 입출력 설정
    freopen("q4in.txt", "r", stdin);
    freopen("q4out.txt", "w", stdout);

    char c;
scanf(" %c", &c);
for (char ch = 'a'; ch <= c; ch++)
    {
	printf("%c ", ch);
    }

    return 0;
}