using System;

class jogo
{
    static void Main()
    {
        Random random = new Random();

        int numero_escolhido = random.Next(1,101);
        int tentativas = 0;
        int n;

        while(tentativas < 7)
        {
            Console.WriteLine("Digite seu palpite (1 a 100): ");
            n = int.Parse(Console.ReadLine());
            tentativas++;
            if(n == numero_escolhido)
                Console.WriteLine($"\nParabéns acertaste em cheio em apenas {tentativas} tentativas\n");
            else   
                if(n < numero_escolhido)
                    Console.WriteLine("Baixo");
                else
                     Console.WriteLine("Alto");
            if(tentativas == 7 && n != numero_escolhido)
            {
                Console.WriteLine($"O número era: {numero_escolhido}. Fim de jogo!!");
            }
        }

    }
}