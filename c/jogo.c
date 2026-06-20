#include <stdio.h>
#include <stdlib.h>
int main(){

    int numero_escolhido = rand() % 101;
    int tentativas = 0;
    int n;

    while (tentativas < 7)
    {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d",&n);
        tentativas++;
        if(n == numero_escolhido){
            printf("\nParabéns acertaste em cheio em apenas %d tentativas\n",tentativas);
            break;
        }else{
            if(n<numero_escolhido)
                printf("Baixo\n");
            else
                printf("Alto\n");
        }
        if(tentativas == 7 && n != numero_escolhido){
            printf("O número era: %d. Fim de jogo!!",numero_escolhido);
        }
    }
    
    


    return 0;
}