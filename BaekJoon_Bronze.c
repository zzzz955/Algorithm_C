void q4562();
void q4892();

#include <stdio.h>

int main() {
    q4892();
    return 0;
}

void q4892() {
    // 백준 4892번 숫자 맞추기 게임 C언어
    int n, index = 0;
    char *s;
    while (1) {
        index += 1;
        scanf("%d", &n);
        if (n == 0) break;
        n *= 3;
        if (n % 2 == 0) {
            n /= 2;
            s = "even";
        }
        else {
            n = (n + 1) / 2;
            s = "odd";
        }
        n *= 3;
        n /= 9;
        printf("%d. %s %d\n", index, s, n);
    }
}


void q4562() {
    // 백준 4562번 No Brainer C언어
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < y) {
            printf("NO BRAINS\n");
        }
        else {
            printf("MMM BRAINS\n");
        }
    }
}