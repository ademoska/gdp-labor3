
#include <stdio.h>

int main() {
    double temperatur;

    printf("Geben Sie die Temperatur in °C ein: ");
    scanf("%lf", &temperatur);

    if (temperatur < 0) {
        printf("Es friert!\n");
    } else if (temperatur <= 15) {
        printf("Es ist kalt\n");
    } else if (temperatur <= 25) {
        printf("Angenehme Temperatur\n");
    } else {
        printf("Es ist warm\n");
    }

    return 0;
}

