#include <stdio.h>

// Min テンプレート
template <typename T>
T Min(T a, T b) {
    return (a < b) ? a : b;
}

// char型の特殊化
template <>
char Min(char a, char b) {
    if ((a < '0' || a > '9') || (b < '0' || b > '9')) {
        printf("数字以外は代入できません\n");
        return '\0';
    }
    return (a < b) ? a : b;
}

// calc 関数（int）
int calc(int a, int b) {
    printf("引数がintのときに呼び出される関数\n");
    return a + b;
}

// calc 関数（float）
float calc(float a, float b) {
    printf("引数がfloatのときに呼び出される関数\n");
    return a + b + 10.0f;
}

int main() {
    // Min テスト
    printf("int: %d\n", Min(5, 10));
    printf("float: %.2f\n", Min(3.5f, 2.1f));
    printf("double: %.4f\n", Min(7.2, 7.1999));

    char c1 = Min('3', '9');
    if (c1 != '\0') printf("char(数字): %c\n", c1);

    char c2 = Min('A', '2');
    if (c2 != '\0') printf("char(数字以外): %c\n", c2);

    // calc テスト
    printf("int calc: %d\n", calc(114, 514));
    printf("float calc: %.2f\n", calc(3.64f, 3.64f));

    return 0;
}
