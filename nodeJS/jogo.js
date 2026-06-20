const crypto = require('crypto');
const prompt = require('prompt-sync')();

const numero_escolhido = crypto.randomInt(1, 101)
 let tentativas = 0;
while(tentativas < 7){

    let n = prompt("Digite seu palpite (1 a 100): ");
    tentativas++;
    if(n == numero_escolhido){
        console.log("Parabéns acertaste em cheio em apenas "+ tentativas+" tentativas");
        break;
    }else{
        if(n < numero_escolhido){
            console.log("Baixo");
        }else
            console.log("Alto");
    }
    if (tentativas == 7)
    console.log("O número era: " + numero_escolhido + ". Fim de jogo!!");
}



