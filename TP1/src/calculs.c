#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("%d\n", num1 + num2); break;
        case '-': printf("%d\n", num1 - num2); break;
        case '*': printf("%d\n", num1 * num2); break;
        case '/':
            if (num2 == 0) printf("Erreur\n");
            else printf("%d\n", num1 / num2);
            break;
        case '%':
            if (num2 == 0) printf("Erreur\n");
            else printf("%d\n", num1 % num2);
            break;
        case '&': printf("%d\n", num1 & num2); break;
        case '|': printf("%d\n", num1 | num2); break;
        case '~': printf("%d\n", ~num1); break;
        default: printf("Erreur\n");
    }

    return 0;
}


