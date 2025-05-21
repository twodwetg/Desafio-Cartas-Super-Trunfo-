#include <stdio.h>

void desafio1() {
    int forca1 = 80, forca2 = 70;

    printf("\n[Desafio 1] Super Trunfo - Comparando Força\n");
    printf("Carta do Jogador: Força = %d\n", forca1);
    printf("Carta do Oponente: Força = %d\n", forca2);

    if (forca1 > forca2)
        printf("Você venceu!\n");
    else if (forca1 < forca2)
        printf("Você perdeu!\n");
    else
        printf("Empate!\n");
}

void desafio2() {
    int escolha;
    int cartaJogador[3] = {80, 70, 60};  // força, magia, velocidade
    int cartaPC[3] = {75, 65, 85};

    printf("\n[Desafio 2] Escolha o atributo para competir:\n");
    printf("1 - Força\n2 - Magia\n3 - Velocidade\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if (cartaJogador[0] > cartaPC[0])
                printf("Você venceu na Força!\n");
            else if (cartaJogador[0] < cartaPC[0])
                printf("Você perdeu na Força.\n");
            else
                printf("Empate na Força.\n");
            break;
        case 2:
            if (cartaJogador[1] > cartaPC[1])
                printf("Você venceu na Magia!\n");
            else if (cartaJogador[1] < cartaPC[1])
                printf("Você perdeu na Magia.\n");
            else
                printf("Empate na Magia.\n");
            break;
        case 3:
            if (cartaJogador[2] > cartaPC[2])
                printf("Você venceu na Velocidade!\n");
            else if (cartaJogador[2] < cartaPC[2])
                printf("Você perdeu na Velocidade.\n");
            else
                printf("Empate na Velocidade.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void desafio3() {
    int escolha1, escolha2;
    int jogador[3] = {70, 85, 60}; // força, magia, velocidade
    int pc[3] = {65, 80, 75};
    int pontosJogador = 0, pontosPC = 0;

    printf("\n[Desafio 3] Escolha dois atributos:\n");
    printf("1 - Força\n2 - Magia\n3 - Velocidade\n");

    printf("Primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Segundo atributo: ");
    scanf("%d", &escolha2);

    pontosJogador += (jogador[escolha1 - 1] > pc[escolha1 - 1]) ? 1 : 0;
    pontosPC     += (jogador[escolha1 - 1] < pc[escolha1 - 1]) ? 1 : 0;

    pontosJogador += (jogador[escolha2 - 1] > pc[escolha2 - 1]) ? 1 : 0;
    pontosPC     += (jogador[escolha2 - 1] < pc[escolha2 - 1]) ? 1 : 0;

    if (pontosJogador > pontosPC)
        printf("Você venceu com %d pontos!\n", pontosJogador);
    else if (pontosJogador < pontosPC)
        printf("Você perdeu com %d pontos.\n", pontosJogador);
    else
        printf("Empate! Cada um ficou com %d ponto(s).\n", pontosJogador);
}

int main() {
    int opcao;

    do {
        printf("\n==== Super Trunfo C ====\n");
        printf("1 - Desafio 1 (if / if-else)\n");
        printf("2 - Desafio 2 (if-else + switch)\n");
        printf("3 - Desafio 3 (operador ternário + lógica combinada)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: desafio1(); break;
            case 2: desafio2(); break;
            case 3: desafio3(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }

    } while(opcao != 0);

    return 0;
}
