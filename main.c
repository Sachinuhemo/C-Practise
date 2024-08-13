#include <stdio.h>

int main() {
    int a;
    printf("2+3=?\n");
    scanf_s("%d", &a);
    if (a == 5) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}
