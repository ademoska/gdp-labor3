#include <stdio.h>

int main() {
    double zahl1, zahl2, ergebnis;
    char operator;

    printf("Erste Zahl: ");
    scanf("%lf", &zahl1);

    printf("Zweite Zahl: ");
    scanf("%lf", &zahl2);

    printf("Operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Leerzeichen wichtig, um Eingabereste zu vermeiden

    if (operator == '+') {
        ergebnis = zahl1 + zahl2;
        printf("Ergebnis: %.2f + %.2f = %.2f\n", zahl1, zahl2, ergebnis);
    } else if (operator == '-') {
        ergebnis = zahl1 - zahl2;
        printf("Ergebnis: %.2f - %.2f = %.2f\n", zahl1, zahl2, ergebnis);
    } else if (operator == '*') {
        ergebnis = zahl1 * zahl2;
        printf("Ergebnis: %.2f * %.2f = %.2f\n", zahl1, zahl2, ergebnis);
    } else if (operator == '/') {
        if (zahl2 == 0) {
            printf("Fehler: Division durch 0 ist nicht erlaubt!\n");
        } else {
            ergebnis = zahl1 / zahl2;
            printf("Ergebnis: %.2f / %.2f = %.2f\n", zahl1, zahl2, ergebnis);
        }
    } else {
        printf("Ungültiger Operator!\n");
    }

    return 0;
}
