#include <stdio.h>
int main() {
    int idade;

    printf("Vamos ver se o Greg gosta de voce...\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 15) {
        printf("Voce nao e para o Greg.\n");
    } else {
        printf("Voce e para Gameles.\n");
        getchar();
        getchar();
    }
    return 0;
}