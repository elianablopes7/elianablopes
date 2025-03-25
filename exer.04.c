#include <stdio.h>

int main()
{
    int a, b, c, d, e, aux;

    printf("Digite 5 numeros inteiros para analisarmos as ordens da sequecia:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    for (int i = 0; i < 4; i++)
    {
        if (a > b) { aux = a; a = b; b = aux; }
        if (b > c) { aux = b; b = c; c = aux; }
        if (c > d) { aux = c; c = d; d = aux; }
        if (d > e) { aux = d; d = e; e = aux; }
    }
    printf("\nExibindo a ordem crescente: %d %d %d %d %d\n", a, b, c, d, e);
    printf("Exibindo a ordem decrescente: %d %d %d %d %d\n", e, d, c, b, a);

    return 0;
}
