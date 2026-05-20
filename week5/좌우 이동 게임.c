#include <conio.h>
#include <stdio.h>

void print(int current, char arr[], int n) {
    printf("\n");
    for (int i = 0; i < n; ++i) {
        if (i == current) {
            printf("P");
        } else {
            printf("%c", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

    const int n = 10;
    char arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = '.';
    }

    int current = 0;
    print(current, arr, n);
    while (1) {
        char c = _getch();
        if (c == 'a') {
            current = current - 1;
            if (current < 0) current = 0;

        } else if (c == 'd') {
            current = current + 1;
            if (current >= n) current = n - 1;
        }
        print(current, arr, n);
    }

    return 0;
}
