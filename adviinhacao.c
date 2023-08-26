#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação!*\n");
    printf("****************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    
    int numerosecreto = numerogrande % 100;
    int tentativa = 1;
    double pontos = 1000;

    int chute;

        while(1) {
            printf("Tentativa %d\n", tentativa);
            printf("Qual o seu chute? ");
            scanf("%d", &chute);
            printf("Seu chute foi %d\n", chute);

            if(chute < 0) {
                printf("Você não pode chutar números negativos!!\n");
                continue;
            }

            int acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;

            if(acertou) {
                printf("Parabéns, você acertou!\n");
                printf("Jogue novamente, você é um bom jogador!\n");
                break;
            }
            else if(maior) {
                printf("Seu chute foi maior que o número secreto!\n");
            }

            else {
                printf("Seu chute foi menor que o número secreto!\n");
            }
            tentativa++;

            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;

        }
    
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativa);
    printf("Você fez %.1f pontos!\n", pontos);
}