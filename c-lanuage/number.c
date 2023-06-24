#include <stdio.h>

int main() {
    int numbers[] = {1, 5, 4, 2, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    for (i = length - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}