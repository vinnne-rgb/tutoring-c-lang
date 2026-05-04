# 한솥밥 C언어 자료

한솥밥 c언어 모임에서 사용할 실습 과제 저장소입니다.  
각 주차별 폴더 안에 문제가 주석으로 작성된 c코드, 입력 데이터, 결과 데이터 파일 존재합니다.  
c코드를 작성 후 실행하여 q0out.txt 파일에 q0result.txt와 동일한 값이 나오도록 c언어 코드를 수정합니다.

# 템플릿 코드 설명

```
#include <stdio.h>

int main() {
    // 파일 입출력 설정입니다.
    // 현재 경로의 q1in.txt 파일로 표준 입력을 받습니다.
    // 현재 경로의 q1out.txt 파일에 표준 출력을 작성합니다.
    freopen("q1in.txt", "r", stdin);
    freopen("q1out.txt", "w", stdout);

    return 0;
}
```
