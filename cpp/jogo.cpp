#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){

    int numero_escolhido =  rand() % 101; // Número aleatórios
    int tentativas = 0;
    int n;
    while (tentativas < 7)
    {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d",&n);
        tentativas++;
        if(n == tentativas){
            printf("\nParabéns acertaste em cheio em apenas %d tentativas",tentativas);
            break;
        }else{
            if(n < numero_escolhido){
                printf("Baixo");
            }else{
                printf("Alto");
            }
        }
        if(tentativas == 7 && n != numero_escolhido){
            printf("O número era: %d. Fim de jogo!!",numero_escolhido);
        }
    }
    return 0;
}