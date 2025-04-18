#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Declaração de variáveis das cartas
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10], buffer[100]; // A variável buffer seria a "lixeira" dos inputs indesejados que ficam no stdin
    char nome_cidade1[50], nome_cidade2[50];
    int pontos_turisticos1, pontos_turisticos2, comp_populacao, comp_area, comp_pib, comp_pontos, comp_densidade, comp_capita, comp_poder, opcao1, opcao2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidade_populacional1, pib_capita1, densidade_populacional2, pib_capita2, super_poder1, super_poder2;
    
    // Leitura dos dados digitados pelo usuário
    printf("Bem vindo ao Super trunfo\n");
    printf("Cadastre suas cartas abaixo\n");

    //Cadastro da Carta 1
    printf("\nCarta 1\n");

    printf("Estado [Digite uma letra de A a H]: ");
    scanf("%c",&estado1);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    printf("Digite o código da carta [Letra do estado seguida de um número de 01 a 04]: ");
    fgets(codigo_carta1, 50, stdin);
    codigo_carta1[strcspn(codigo_carta1, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 50, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite a população: ");
    scanf("%ld", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    //Cadastro da carta 2
    printf("\nCarta 2\n");

    printf("Estado [Digite uma letra de A a H]: ");
    scanf("%c",&estado2);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    printf("Digite o código da carta [Letra do estado seguida de um número de 01 a 04]: ");
    fgets(codigo_carta2, 50, stdin);
    codigo_carta2[strcspn(codigo_carta2, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 50, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite a população: ");
    scanf("%ld", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    printf("--------------------------------------");

    // Calculando Densidade Populacional e PIB per Capita

    pib_capita1 = (float) (pib1 * 1000000000) / populacao1;
    pib_capita2 = (float) (pib2 * 1000000000) / populacao2;

    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;   

    // Exibição dos dados na tela do usuário
    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    printf("--------------------------------------");

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    printf("--------------------------------------");

    //Escolha dos atributos para comparar
    printf("\nEscolha um atributo que você gostaria de comparar entre as 2 cartas\n");
    printf("1: População\n");
    printf("2: Área\n");
    printf("3: PIB\n");
    printf("4: Pontos turísticos\n");
    printf("5: Densidade populacional\n");
    printf("6: PIB per Capita\n");
    printf("Digite a primeira opção desejada:");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo:\n");

    //Switch para indicar qual opção ja foi escolhida
    switch (opcao1) {
        case 1: 
            printf("Opção 1 (População) não disponível\n"); 
            break;
        case 2: 
            printf("Opção 2 (Área) não disponível\n"); 
            break;
        case 3: 
            printf("Opção 3 (PIB) não disponível\n"); 
            break;
        case 4: 
            printf("Opção 4 (Pontos turísticos) não disponível\n"); 
            break;
        case 5: 
            printf("Opção 5 (Densidade populacional) não disponível\n");
            break;
        case 6: 
            printf("Opção 6 (PIB per Capita) não disponível\n"); 
            break;
        default: 
            printf("Opção inválida\n"); 
            break;
    }

    //Segundo atributo
    printf("Digite a segunda opção desejada: ");
    scanf("%d", &opcao2);
    
    if (opcao2 == opcao1) {
        printf("--------------------------------------\n");
        printf("Você escolheu uma opção indisponivel, a segunda comparação não sera executada\n");
    }

    printf("--------------------------------------");

    //Primeira comparação
    switch (opcao1)
    {
    case 1:
        printf("\nComparando as populações:\n");
        printf("Carta 1: %ld\n", populacao1);
        printf("Carta 2: %ld\n", populacao2);

        if (populacao1 > populacao2) {
            printf("A carta 1 venceu com uma vantagem de %ld pontos\n", (populacao1-populacao2));
        } else if (populacao2 > populacao1) {
            printf("A carta 2 venceu com uma vantagem de %ld pontos\n", (populacao2-populacao1));
        } else {
            printf("Houve um empate entre os atributos\n");
        }
        break;
    case 2:
        printf("\nComparando as Áreas:\n");
        printf("Carta 1: %.2f\n", area1);
        printf("Carta 2: %.2f\n", area2);

        if (area1 > area2) {
            printf("A carta 1 venceu com uma vantagem de %.2f pontos\n", (area1-area2));
        } else if (area2 > area1) {
            printf("A carta 2 venceu com uma vantagem de %.2f pontos\n", (area2-area1));
        } else {
            printf("Houve um empate entre os atributos\n");
        }
        break;
    case 3:
        printf("\nComparando os PIBs:\n");
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);

        if (pib1 > pib2) {
            printf("A carta 1 venceu com uma vantagem de %.2f pontos\n", (pib1-pib2));
        } else if (pib2 > pib1) {
            printf("A carta 2 venceu com uma vantagem de %.2f pontos\n", (pib2-pib1));
        } else {
            printf("Houve um empate entre os atributos\n");
        }
        break;
    case 4:
        printf("\nComparando os pontos turísticos:\n");
        printf("Carta 1: %d\n", pontos_turisticos1);
        printf("Carta 2: %d\n", pontos_turisticos2);

        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("A carta 1 venceu com uma vantagem de %d pontos\n", (pontos_turisticos1-pontos_turisticos2));
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("A carta 2 venceu com uma vantagem de %d pontos\n", (pontos_turisticos2-pontos_turisticos1));
        } else {
            printf("Houve um empate entre os atributos\n");
        }
        break;
    case 5:
        printf("\nComparando as densidades populacionais:\n");
        printf("Carta 1: %.2f\n", densidade_populacional1);
        printf("Carta 2: %.2f\n", densidade_populacional2);

        if (densidade_populacional1 < densidade_populacional2) {
            printf("A carta 1 venceu com uma diferença de %.2f pontos\n", (densidade_populacional2-densidade_populacional1));
        } else if (densidade_populacional2 < densidade_populacional1) {
            printf("A carta 2 venceu com uma diferença de %.2f pontos\n", (densidade_populacional1-densidade_populacional2));
        } else {
            printf("Houve um empate entre os atributos\n");
        }
        break;
    case 6:
        printf("\nComparando PIB per capita:\n");
        printf("Carta 1: %.2f\n", pib_capita1);
        printf("Carta 2: %.2f\n", pib_capita2);

        if (pib_capita1 > pib_capita2) {
            printf("A carta 1 venceu com uma vantagem de %.2f pontos\n", (pib_capita1-pib_capita2));
        } else if (pib_capita2 > pib_capita1) {
            printf("A carta 2 venceu com uma vantagem de %.2f pontos\n", (pib_capita2-pib_capita1));
        } else {
            printf("Houve um empate entre os atributos\n");
        }
        break;
    default:
        printf("Opção inválida");
        break;
    }

    printf("--------------------------------------");

    //Segunda comparação
    if (opcao2 == opcao1) {
        return 0;
    } else {
        switch (opcao2)
        {
        case 1:
            printf("\nComparando as populações:\n");
            printf("Carta 1: %ld\n", populacao1);
            printf("Carta 2: %ld\n", populacao2);

            if (populacao1 > populacao2) {
                printf("A carta 1 venceu com uma vantagem de %ld pontos\n", (populacao1-populacao2));
            } else if (populacao2 > populacao1) {
                printf("A carta 2 venceu com uma vantagem de %ld pontos\n", (populacao2-populacao1));
            } else {
                printf("Houve um empate entre os atributos\n");
            }
            break;
        case 2:
            printf("\nComparando as Áreas:\n");
            printf("Carta 1: %.2f\n", area1);
            printf("Carta 2: %.2f\n", area2);

            if (area1 > area2) {
                printf("A carta 1 venceu com uma vantagem de %.2f pontos\n", (area1-area2));
            } else if (area2 > area1) {
                printf("A carta 2 venceu com uma vantagem de %.2f pontos\n", (area2-area1));
            } else {
                printf("Houve um empate entre os atributos\n");
            }
            break;
        case 3:
            printf("\nComparando os PIBs:\n");
            printf("Carta 1: %.2f\n", pib1);
            printf("Carta 2: %.2f\n", pib2);

            if (pib1 > pib2) {
                printf("A carta 1 venceu com uma vantagem de %.2f pontos\n", (pib1-pib2));
            } else if (pib2 > pib1) {
                printf("A carta 2 venceu com uma vantagem de %.2f pontos\n", (pib2-pib1));
            } else {
                printf("Houve um empate entre os atributos\n");
            }
            break;
        case 4:
            printf("\nComparando os pontos turísticos:\n");
            printf("Carta 1: %d\n", pontos_turisticos1);
            printf("Carta 2: %d\n", pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("A carta 1 venceu com uma vantagem de %d pontos\n", (pontos_turisticos1-pontos_turisticos2));
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("A carta 2 venceu com uma vantagem de %d pontos\n", (pontos_turisticos2-pontos_turisticos1));
            } else {
                printf("Houve um empate entre os atributos\n");
            }
            break;
        case 5:
            printf("\nComparando as densidades populacionais:\n");
            printf("Carta 1: %.2f\n", densidade_populacional1);
            printf("Carta 2: %.2f\n", densidade_populacional2);

            if (densidade_populacional1 < densidade_populacional2) {
                printf("A carta 1 venceu com uma diferença de %.2f pontos\n", (densidade_populacional2-densidade_populacional1));
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("A carta 2 venceu com uma diferença de %.2f pontos\n", (densidade_populacional1-densidade_populacional2));
            } else {
                printf("Houve um empate entre os atributos\n");
            }
            break;
        case 6:
            printf("\nComparando PIB per capita:\n");
            printf("Carta 1: %.2f\n", pib_capita1);
            printf("Carta 2: %.2f\n", pib_capita2);

            if (pib_capita1 > pib_capita2) {
                printf("A carta 1 venceu com uma vantagem de %.2f pontos\n", (pib_capita1-pib_capita2));
            } else if (pib_capita2 > pib_capita1) {
                printf("A carta 2 venceu com uma vantagem de %.2f pontos\n", (pib_capita2-pib_capita1));
            } else {
                printf("Houve um empate entre os atributos\n");
            }
            break;
        default:
            printf("Opção inválida");
            break;
        }
    printf("--------------------------------------");
    }
    return 0;
}