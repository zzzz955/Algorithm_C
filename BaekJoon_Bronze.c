void q4562();
void q4892();
void q5217();
void q5337();
void q5338();
void q5339();
void q5522();
void q6749();
void q6778();
void q22966();

#include <stdio.h>

int main(void) {
    q22966();
    return 0;
}

void q22966() {
    // 백준 22966번 가장 쉬운 문제를 찾는 문제 C언어
    int n;
    scanf("%d", &n);
    typedef struct {
        char s[11];
        int d;
    } q;
    q qs[4];
    for (int i = 0; i < n; i++) {
        scanf("%11s %d", &qs[i].s, &qs[i].d);
    }
    q easy = qs[0];
    for (int i = 1; i < n; i++) {
        if (qs[i].d < easy.d) {
            easy = qs[i];
        }
    }
    printf("%s", easy.s);
}


void q6778() {
    // 백준 6778번 Which Alien? C언어
    int antenna, eyes;
    scanf("%d", &antenna);
    scanf("%d", &eyes);
    if (antenna >= 3 && eyes <= 4) printf("TroyMartian\n");
    if (antenna <= 6 && eyes >= 2) printf("VladSaturnian\n");
    if (antenna <= 2 && eyes <= 3) printf("GraemeMercurian\n");
}


void q6749() {
    // 백준 6749번 Next in line C언어
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