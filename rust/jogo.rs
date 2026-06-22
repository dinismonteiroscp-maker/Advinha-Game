use rand::Rng;
use inquire::CustomType;

fn main() {
    let mut rng = rand::rng();
    let numero_escolhido = rng.random_range(1..=100); 
    
    let mut n: i32;
    let mut tentativas: i32 = 0; 
    
    n = CustomType::new("Digite seu palpite (1 a 100): ")
        .prompt()
        .unwrap();
        
    while tentativas < 7 {
        
       

        n = CustomType::new("Digite seu palpite (1 a 100): ")
        .prompt()
        .unwrap();
         tentativas += 1; 
         
        if n == numero_escolhido {
           println!("\nParabéns acertaste em cheio em apenas {} tentativas", tentativas);
        }else {
            if n < numero_escolhido {
                println!("Baixo");
            }else {
                println!("Alto");
            }
        }
        if tentativas == 7 && n != numero_escolhido {
            println!("O número era: {}. Fim de jogo!!",numero_escolhido)
        }

    }
}
