#include <stdio.h>

int main() {
    int number = 0;
    int countOfChar;
    do {
        printf("Type a whole number:");
        scanf("%d", &number);
        /* Kontrola vstupně výstupního bufferu=pamět, do které se ukládají znaky z klávesnice.
         * Funkce getchar() přečte 1 znak z vv bufferu a zárověn ho vymaže. Pokud vstupně výstupní buffer
         * obsahuje znaky, funkce scanf nepozastaví konzoli a uživatel nemůže zadat další číslo.
         * To způsobí nekonečný cyklus*/
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        /* Pokud proměnná countOfChar se nerovná nule, ve vstupně výstupním bufferu byly nalezeny
         * znaky, tj. uživatel nezadal celé číslo.*/
        if (countOfChar!=0) {
            printf ("No whole number has been typed. Try again.\n");
        }
        else if (number == 0) {
            printf("The number %d is zero. Program will be closed.\n", number);
        } else if (number > 0) {
            printf("The number %d is positive.\n", number);
        } else {
            printf("The number %d is negative.\n", number);
        }
    } while (countOfChar !=0 || number != 0);
    return 0;

}
