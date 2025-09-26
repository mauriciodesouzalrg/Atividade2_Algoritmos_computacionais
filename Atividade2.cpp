#include <stdio.h>

int main() {
    int opcao, escolha;
    char continuar = 's', confirmar;

    char pedidos[50][30]; // Array para armazenar os itens do pedido
    int count = 0;

    // Listas de opcoes
    const char *pratos[] = {"Feijoada", "Churrasco", "Lasanha"};
    const char *bebidas[] = {"Refrigerante", "Suco", "Agua"};
    const char *sobremesas[] = {"Pudim", "Sorvete", "Mousse"};

    while (continuar == 's' || continuar == 'S') {
        // Menu principal
        printf("\n    MENU PRINCIPAL    \n");
        printf("1 - Pratos\n");
        printf("2 - Bebidas\n");
        printf("3 - Sobremesas\n");
        printf("4 - Finalizar Pedido\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Escolha de pratos
            printf("\n    PRATOS    \n1 - Feijoada\n2 - Churrasco\n3 - Lasanha\nEscolha: ");
            scanf("%d", &escolha);

            if (escolha >= 1 && escolha <= 3) {
                printf("Voce escolheu %s. Confirmar? (s/n): ", pratos[escolha - 1]);
                scanf(" %c", &confirmar);

                if (confirmar == 's' || confirmar == 'S') {
                    sprintf(pedidos[count++], "%s", pratos[escolha - 1]);
                    printf("%s adicionado ao pedido.\n", pratos[escolha - 1]);
                } else {
                    printf("Escolha cancelada, retornando ao menu.\n");
                }
            } else {
                printf("Opcao invalida.\n");
            }

        } else if (opcao == 2) {
            // Escolha de bebidas
            printf("\n    BEBIDAS    \n1 - Refrigerante\n2 - Suco\n3 - Agua\nEscolha: ");
            scanf("%d", &escolha);

            if (escolha >= 1 && escolha <= 3) {
                printf("Voce escolheu %s. Confirmar? (s/n): ", bebidas[escolha - 1]);
                scanf(" %c", &confirmar);

                if (confirmar == 's' || confirmar == 'S') {
                    sprintf(pedidos[count++], "%s", bebidas[escolha - 1]);
                    printf("%s adicionada ao pedido.\n", bebidas[escolha - 1]);
                } else {
                    printf("Escolha cancelada, retornando ao menu.\n");
                }
            } else {
                printf("Opcao invalida.\n");
            }

        } else if (opcao == 3) {
            // Escolha de sobremesas
            printf("\n    SOBREMESAS    \n1 - Pudim\n2 - Sorvete\n3 - Mousse\nEscolha: ");
            scanf("%d", &escolha);

            if (escolha >= 1 && escolha <= 3) {
                printf("Voce escolheu %s. Confirmar? (s/n): ", sobremesas[escolha - 1]);
                scanf(" %c", &confirmar);

                if (confirmar == 's' || confirmar == 'S') {
                    sprintf(pedidos[count++], "%s", sobremesas[escolha - 1]);
                    printf("%s adicionada ao pedido.\n", sobremesas[escolha - 1]);
                } else {
                    printf("Escolha cancelada, retornando ao menu.\n");
                }
            } else {
                printf("Opcao invalida.\n");
            }

        } else if (opcao == 4) {
            // Finalizar pedido
            printf("\n    RESUMO DO PEDIDO    \n");

            if (count == 0) {
                printf("Nenhum item escolhido.\n");
            } else {
                for (int i = 0; i < count; i++) {
                    printf("%d - %s\n", i + 1, pedidos[i]);
                }
            }

            printf("\nConfirmar pedido para pagamento? (s/n): ");
            scanf(" %c", &confirmar);

            if (confirmar == 's' || confirmar == 'S') {
                printf("\n Pedido confirmado! Redirecionando para pagamento...\n");
                break; // Sai do loop
            } else {
                printf("Pedido nao confirmado. Retornando ao menu.\n");
            }

        } else {
            printf("Opcao invalida.\n");
        }

        // Mostrar lista parcial sempre que houver itens
        if (count > 0 && opcao != 4) {
            printf("\n   Itens do pedido:    \n");
            for (int i = 0; i < count; i++) {
                printf("%d - %s\n", i + 1, pedidos[i]);
            }
        }

        // Pergunta se quer continuar escolhendo
        if (opcao != 4) {
            printf("\nDeseja continuar escolhendo? (s/n): ");
            scanf(" %c", &continuar);
        }
    }

    // Exibir resumo final ao sair do programa
    printf("\n    FIM DO PEDIDO    \n");
    if (count == 0) {
        printf("Nenhum item escolhido.\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("%d - %s\n", i + 1, pedidos[i]);
        }
    }

    printf("\n Atividade2 - Algoritmos computacionais - escrito por Mauricio de Oliveira!\n Obrigado por usar nosso sistema!\n");
    return 0;
}