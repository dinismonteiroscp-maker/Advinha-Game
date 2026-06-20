import random

numero_escolhido = random.randint(1, 100)
tentativas = 0

while tentativas < 7:
    n = int(input("Introduza um número (entre 1 e 100): "))
    tentativas += 1
    if n == numero_escolhido:
        print(f"Parabéns acertaste em cheio em apenas {tentativas} tentativas")
        break
    else:
        if n < numero_escolhido:
            print("Baixo")
            
        else:
            print("Alto")
    if tentativas == 7 & n != numero_escolhido:
        print(f"O número era {numero_escolhido}. Fim de jogo!")
    