#include <stdio.h>

int main() {
    int n = 7;
    int a = 0, b = 1, c;

    for (int i = 0; i < n; i++) {
        if (i == 0) c = 0;
        else if (i == 1) c = 1;
        else { c = a + b; a = b; b = c; }
        printf("%d ", c);
    }

    printf("\n");
    return 0;
}
