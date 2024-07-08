void q4562();
void q4892();
void q5217();

#include <stdio.h>

int main(void) {
    q5217();
    return 0;
}

void q5217() {
    // 백준 5217번 쌍의 합 C언어
    int n;
    scanf("%d", &n);
    while (n--) {
        int num;
        scanf("%d", &num);
        printf("Pairs for %d:", num);
        if (num > 2) {
            printf(" %d %d", 1, num - 1);
            for (int i = 2; i < 100; i++) {
                if (i < num - i) {
                    printf(", %d %d", i, num - i);
                } else {
                    break;
                }
            }
        }
        printf("\n");
    }
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