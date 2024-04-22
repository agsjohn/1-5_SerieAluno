#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int serie;
    printf("Digite em que série o aluno estuda: ");
    do
    {
        scanf("%i", &serie);
        getchar();
        if(serie >= 1 && serie <= 4)
        {
            printf("Turno da manhã");
        }
        else if(serie >= 5 && serie <= 8)
        {
            printf("Turno da tarde");
        }
        else
        {
            printf("Série inválida, digite novamente: ");
        }
    }
    while(serie < 1 || serie > 8);
    getchar();
}
