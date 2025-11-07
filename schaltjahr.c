#include <stdio.h>

int main() {
    int jahr;

    printf("Geben Sie ein Jahr ein: ");
    scanf("%d", &jahr);

    if ((jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0)) {
        printf("%d ist ein Schaltjahr.\n", jahr);
    } else {
        printf("%d ist kein Schaltjahr.\n", jahr);
    }

    return 0;
}
