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
    int numerodetentativas;
    int acertou = 0;
    int nivel;

    printf("Qual nivel de dificuldade você quer jogar?\n");
    printf("Fácil (1), Médio (2), Dificil (3)\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    if(nivel == 1) {
        numerodetentativas = 20;
    }
    else if(nivel ==2) {
        numerodetentativas = 15;
    }
    else {
        numerodetentativas = 6;

    }

        for(int i = 1; i <= numerodetentativas; i++) {
            printf("Tentativa %d\n", tentativa);
            printf("Qual o seu chute? ");
            scanf("%d", &chute);
            printf("Seu chute foi %d\n", chute);

            if(chute < 0) {
                printf("Você não pode chutar números negativos!!\n");
                continue;
            }

            acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;

            if(acertou) {
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
    
    if(acertou) {
        printf("Parabéns, você acertou!\n");
        printf("Você acertou em %d tentativas!\n", tentativa);
        printf("Você fez %.1f pontos!\n", pontos);
        printf("Fim de jogo!\n");
                
    }

    else {
        printf("Você perdeu!Tente novamente\n");
        printf("Fim de jogo!\n");
    }
        

   
}