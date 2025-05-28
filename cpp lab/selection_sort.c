#include <stdio.h>

int main() {
    int pin, loop = 0;
    while (1) {
        loop += 1;
        if (loop != 3) {
            printf("enter pin:");
            scanf("%d", &pin);
            if (pin == 1234) {
                printf("welcome");
                break;
            } else {
                printf("try again\n");
            }
        } else {
            printf("access denied");
            break;
        }
    }
    return 0;
}
