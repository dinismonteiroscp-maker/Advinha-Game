import java.util.Random;
import java.util.Scanner;

public class jogo {
    public static void main(String[] args) {
        Random rand = new Random();
        int numero_escolhido = rand.nextInt(100) + 1;
        Scanner scanner = new Scanner(System.in);
        int n = 0;
        int tentativas = 0;
        while (tentativas < 7) {
            
            System.out.print("Digite seu palpite (1 a 100): ");
            n = scanner.nextInt();
            tentativas ++;

            if (n == numero_escolhido) {
                System.out.println("\nParabéns acertaste em cheio em apenas "+ tentativas+" tentativas");
                break;
            } else {
                if(n < numero_escolhido){
                    System.out.println("Baixo");
                }
                    
                else{
                    System.out.println("Alto");
                }
                    
            }
        }
        if(tentativas == 7 && n != numero_escolhido)
            System.out.println("O número era:" + numero_escolhido + ". Fim de jogo!!");
        scanner.close();
    }
}