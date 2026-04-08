#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    printf("%s", a % 2 == 0 ? "Even" : "Odd");
    return 0;
}