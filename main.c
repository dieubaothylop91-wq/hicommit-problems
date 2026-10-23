#include <stdio.h>

int main() {
    float dtb;
    scanf("%f", &dtb);

    if (dtb >= 9.0) {
        printf("A\n");
    } else if (8.0 <= dtb < 9.0) {
        printf("B+\n");
    }

    return 0;
}