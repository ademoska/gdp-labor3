#include <stdio.h>

int main() {
    double gewicht, groesse, bmi;

    printf("Geben Sie Ihr Gewicht in kg ein: ");
    scanf("%lf", &gewicht);

    printf("Geben Sie Ihre Größe in Metern ein: ");
    scanf("%lf", &groesse);

    bmi = gewicht / (groesse * groesse);

    printf("Ihr BMI: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Bewertung: Untergewicht\n");
    } else if (bmi < 25.0) {
        printf("Bewertung: Normalgewicht\n");
    } else if (bmi < 30.0) {
        printf("Bewertung: Übergewicht\n");
    } else {
        printf("Bewertung: Adipositas\n");
    }

    return 0;
}
