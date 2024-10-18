#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("I divisori di %d sono: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
