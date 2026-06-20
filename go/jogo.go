package main

import (
	"fmt"
	"math/rand/v2"
)

func main() {
	numero_escolhido := rand.IntN(100) + 1
	var n, tentativas int = 0, 0

	for tentativas < 7 {
		fmt.Printf("Digite seu palpite (1 a 100): ")
		fmt.Scanln(&n)
		tentativas++

		if n == numero_escolhido {
			fmt.Printf("\nParabéns! Acertaste em cheio em apenas %v tentativas\n", tentativas)
			break
		} else {
			if n < numero_escolhido {
				fmt.Println("Baixo!")
			} else {
				fmt.Println("Alto!")
			}
		}

		if tentativas == 7 && n != numero_escolhido {
			fmt.Printf("\nO número era: %v. Fim de jogo!!\n", numero_escolhido)
		}
	}
}