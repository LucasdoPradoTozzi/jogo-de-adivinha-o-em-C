#include <stdio.h>

int main() {
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação!*\n");
    printf("****************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qual o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if(chute == numerosecreto) {
        printf("Parabéns, você acertou!\n");
        printf("Jogue novamente, você é um bom jogador!\n");
    }
    else {
        printf("Você errou!\n");
        printf("Não desanime, tente novamente!\n");
    }
    
}