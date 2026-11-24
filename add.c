#include <stdio.h>
//zum compelieren folgendenen befehl eingeben: gcc -std=c17 add.c -o add
int main(void) {
    int x;
    int y;
    int sum;
    int rem;
    float div;
    
    printf("Geben sie die erste ganze Zahl ein: ");
    if (scanf("%d", &x) != 1) {
        printf("Ungueltige Eingabe.\n");
        return 1;
    }

    printf("Geben sie die zweite ganze Zahl ein: ");
    if (scanf("%d", &y) != 1) {
        printf("Ungueltige Eingabe.\n");
        return 1;
    }
    sum = x + y;
    rem = x % y;
    div= x/y;
    div= (float)x / (float)y;
    printf("der wert von x+y: %d\n", sum);
    printf("der wert von x/y: %.2f\n", div);   
    printf("der wert von x/y: %d\n", x/y);
    printf("der wert von x%%y: %d\n", rem);
    return 0;
}