#include <stdio.h>

int main(){ 
    /*Se a idade for 18 oumais, o programa imprime 'Você é maior de idade'.
    No nosso exemplo, 20 é maior que 18, então a mensagem será exibida*/
    
    int idade = 17; //Mudando a idade



    if (idade >= 18 ){
        printf("Você é maior de idade\n"); //Só vai executar aqui dentro o que for verdadeiro, EXECUTOU PA A CONDIÇÃO FOI VERDADEIRA
        printf("Dentro IF\n");

        printf("Fora IF\n");
    
    }
        
   

}