#include <stdio.h>

int main() {
    int notas[5][2] = {
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0}
    };

    for (int y = 0; y < 5; y++) {
        for (int j = 0; j < 2; j++) {
            printf("introduza a nota %d do aluno %d: ", j + 1, y + 1);
            scanf("%d", &notas[y][j]);
        }
    }

    printf("notas: ");
    for (int y = 0; y < 5; y++) {
        for (int j = 0; j < 2; j++) {
            printf("%d \n", notas[y][j]);
        }
    }

    int total = 0;
    int quantidade_notas = 0;
    float media = 0;


    for (int i = 0; i < 5; i++) {
        for (int x = 0; x < 2; x++) {
            total += notas[i][x];
            quantidade_notas++;
        }
        media = total / quantidade_notas;
        printf("a media do aluno %d foi de: %.2f\n", i + 1, media);
    }
    printf("\n");

    int total_teste = 0;
    int quantidade_testes = 0;


    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 5; x++) {
            total_teste += notas[x][i];
            quantidade_testes++;
        }
        media = total_teste / quantidade_testes;
        printf("a media do teste %d foi %.2f\n", i + 1, media);
    }
    printf("\n\n");

    int melhor_nota = 0;
    for (int i = 0; i < 5; i++)
        for (int x = 0; x < 2; x++)
            if (notas[x][i] > melhor_nota)
                melhor_nota = notas[x][i];
        printf("a melhor nota foi: %d\n", melhor_nota);

    printf("\n");


    int idade [] = {17, 17, 16, 18, 16};
    char *alunos [] = {"ANA", "CARLOS", "MANUEL", "RUI", "TIAGO"};

    int opcao;

    do {
        printf("\n1. media de idades\n");
        printf("2. nome dos alunos mais novos\n");
        printf("3. mumero total de alunos com idades superiores ou iguais a 18\n");
        printf("4. listagem dos nomes e respetiva idade\n");
        printf("0. sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int total = 0;
            for (int i = 0; i < 5; i++)
                total = total + idade[i];
            printf("media: %.2f\n", total / 5.0);
        } else if (opcao == 2) {
            int menor_idade = 0;
            for (int i = 0; i < 5; i++) {
                if (menor_idade > idade[i])
                menor_idade = idade[i];
            }
            printf("a menor idade e %d", menor_idade);
        } else if (opcao == 3) {
            int alunos18 = 0;
            for (int i = 0; i < 5; i++)
            if (idade[i] >= 18)
            alunos18 = idade[i];
            printf("o numero de alunos com idade superior ou igual a 18 e de: %d", alunos18);
        }else if (opcao == 4) {
            for (int i = 0; i < 5; i++)
                for (int z = 0; z < 5; z++) {
                    printf("idade: %d, aluno %d\n", idade [i], z);
}}
    } while (opcao != 0);

    return 0;
}