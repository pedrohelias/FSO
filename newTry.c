#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>






int main(){
    int rotacoes = 0;
    int pid = 0; //vai receber o valor do pid no for
    float valor = 0; //vai receber o valor no for
    float quantum = 0;
    float somador = 0;
    _Bool tudoZero = false;

    int quantumABS = 0;

    scanf("%d", &rotacoes);
    scanf("%f", &quantum);

    



    int vetorpid[100];
    float vetorValor[100];

    for(int i = 0; i<=rotacoes-1; i++){
        scanf("%d", &pid);
        vetorpid[i] = pid;
        scanf("%f", &valor);
        vetorValor[i] = valor;
    }

    if(quantum < 101 || quantum > 1000){
        return 0;
    }

    float fator = (quantum/1000);

    // for(int j = 0; j <= rotacoes-1; j++){
    //     printf("PID: %d com valor: %f\n", vetorpid[j], vetorValor[j]);
    // }
    //printf("%f", (quantum/1000));
    while(!tudoZero){
        //printf("cheguei aqui\n");
        for(int k = 0; k <= rotacoes-1; k++){
            if(vetorValor[k] > 0){
                vetorValor[k] = vetorValor[k] - fator;
                //printf("%f\n", vetorValor[k]);
                somador = quantum + somador;
                if(vetorValor[k] <= 0){
                    float novoValor = vetorValor[k]*1000.0;
                    //printf("%f\n", novoValor);
                    //printf("%f\n", somador);
                    float op = (somador + novoValor);
                    //printf("%f\n", op);
                    printf("%d (%.f)\n", vetorpid[k],op);
                    somador = op;
                }


            }
        }
        //printf("saiu do loop\n");

        for(int l = 0; l <= rotacoes - 1; l++){
            //printf("entrou aqui\n");
            if(vetorValor[l] <= 0){
                tudoZero = true;
                //printf("teste\n");
                
            }else{
                //printf("caindo aqui\n");
                tudoZero = false;
                break;
            }
        }
    }



    return 0;
}