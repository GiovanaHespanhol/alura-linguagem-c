#include <stdio.h>

int main() {
    // Imprime o cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao Bem-vindo ao Jogo de Adivinhacao *\n");
    printf("******************************************\n");

    // Declaração de variáveis
    int numeroSecreto = 42;
    int chute;

    // Solicita a entrada do usuário
    printf("Qual o seu chute? ");
    scanf("%d", &chute);
    
    // Exibe o número que o usuário digitou
    printf("Seu chute foi %d\n", chute);

    // Estrutura condicional para verificar o chute
    if(chute == numeroSecreto) {
        printf("Parabens! Voce acertou!\n");
    } else {
        printf("Que pena, voce errou. Tente novamente!\n");
    }

    return 0;
}