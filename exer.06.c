//exercicio 06
#include<stdio.h>

int main()
{
    int idade;
    char sexo;

    printf("Vamos ver se vc pode se alistar!!!");
    printf("\nDigite seu sexo sendo 'f' ou 'm' : ");
    scanf("%c", &sexo);
    printf("\nDigite sua idade:");
    scanf("%d", &idade);

    if(sexo == 'f' && idade >=18)
    {
        printf("\nSeu alistamento eh opcional");
    }
    else if(sexo == 'm' && idade >=18)
    {
        printf("\nVoce DEVE se alistar");
    }
    else
    {
        printf("\nVoce nao pode se alistar");
    }

    return 0;
}
