/*8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
para acertar. No final, informe se o usuário acertou ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite, tentativas = 0;
    const int MAX_TENTATIVAS = 7;
    
    srand(time(NULL));
    numeroSorteado = rand() % 100 + 1;

    printf("Tente adivinhar o número entre 1 e 100.\n");
    
    while (tentativas < MAX_TENTATIVAS) {
        printf("Tentativa %d: Digite seu palpite: ", tentativas + 1);
        scanf("%d", &palpite);
        
        if (palpite < 1 || palpite > 100) {
            printf("Palpite fora do intervalo. Digite um número entre 1 e 100.\n");
            continue;
        }
        
        tentativas++;
        
        if (palpite == numeroSorteado) {
            printf("Parabéns! Você acertou o número em %d tentativas.\n", tentativas);
            break;
        } else if (palpite < numeroSorteado) {
            printf("O número sorteado é maior.\n");
        } else {
            printf("O número sorteado é menor.\n");
        }
    }
    
    if (palpite != numeroSorteado) {
        printf("Você não acertou o número. O número sorteado era %d.\n", numeroSorteado);
    }

    return 0;
}