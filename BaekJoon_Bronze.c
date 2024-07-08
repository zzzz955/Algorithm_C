void q4562();
void q4892();
void q5217();
void q5337();
void q5338();
void q5339();
void q5522();
void q6749();

#include <stdio.h>

int main(void) {
    q6749();
    return 0;
}

void q6749() {
    // 백준 6749번 Next in line
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", b * 2 - a);
}


void q5522() {
    // 백준 5522번 카드 게임 C언어
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        int a;
        scanf("%d", &a);
        ans += a;
    }
    printf("%d", ans);
}


void q5339() {
    // 백준 5339번 콜센터 C언어
    printf("     /~\\\n");
    printf("    ( oo|\n");
    printf("    _\\=/_\n");
    printf("   /  _  \\\n");
    printf("  //|/.\\|\\\\\n");
    printf(" ||  \\ /  ||\n");
    printf("============\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("|          |\n");
}


void q5338() {
    // 백준 5338번 마이크로소프트 로고 C언어
    printf("       _.-;;-._\n");
    printf("'-..-'|   ||   |\n");
    printf("'-..-'|_.-;;-._|\n");
    printf("'-..-'|   ||   |\n");
    printf("'-..-'|_.-''-._|\n");
}


void q5337() {
    // 백준 5337번 웰컴 C언어
    printf(".  .   .\n");
    printf("|  | _ | _. _ ._ _  _\n");
    printf("|/\\|(/.|(_.(_)[ | )(/.\n");
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