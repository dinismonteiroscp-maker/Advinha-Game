<?php

    $numero_escolhido = rand(1,100);
    $tentativas = 0;
    $n;
     echo "".$numero_escolhido;
    while( $tentativas < 7){
        
        $n = readline("Introduza um número (entre 1 e 100): ")   ;
        $tentativas ++;
        if($n == $numero_escolhido){
            echo"\nParabéns acertaste em cheio em apenas ". $tentativas. " tentativas\n";
            break;
        }else{
            if($n < $numero_escolhido){
                echo"Baixo\n";
            }else{
                echo"Alto\n";
            }
        }
    
        if($tentativas == 7 && $n != $numero_escolhido){
            echo "O número era ".$numero_escolhido.". Fim de jogo!";
            break;
        }

    }




?>