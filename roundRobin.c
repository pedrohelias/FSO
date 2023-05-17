#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int ordenaVetor(int *pid, int *valor, int tam){
    int menorValor = 0;
    int grau = 0;
    for(int i=0; i <= tam -1; i++){
        if(valor[i] > menorValor){
            menorValor = valor[i];
            grau = i;
        }
    }
    
    //printf("grau: %d, com valor: %d", pid[grau], valor[grau]);
    return grau; //retorna posicao do vetor que é o menor grau
}


float cvtTempo(float tempo, int tempoLeva){
    float operacao = tempo/1000.0;
    return (tempoLeva/operacao);
}

float operacao(int fator, int tempo, int rotacao){
    return fator * tempo * rotacao;
    
}


int main(){
    // int tamanho = 0;
    // scanf("%d", &tamanho);
    // int vetor1[tamanho];
    // int len = sizeof(vetor1)/sizeof(int);
    // for(int i = 0; i <= len-1; i++){
    //     vetor1[i] = i+1;
    // }


    // for(int j = 0; j <= len-1; j++){
    //     printf("%d", vetor1[j]);
    // }
    int tamanho = 5;
    int vetor1[] = {593, 456, 50, 70, 340}; //pid
    int vetor2[] = {2, 2, 2, 1, 5}; //valor
    float vetorresultval[4];
    int vetorresultPID[4];

    int calculo = 0;
    int rotacoes = 0;
    int tempo = 0;
    float tempoLeva = 0;
    int pid = 0;
    int fator = 0;
    int recebeOp = 0;
    int somador = 0;
    _Bool todosZeros = false;

    scanf("%d", &rotacoes);
    scanf("%d", &tempo);

    int vetorpid[rotacoes];
    int vetorValor[rotacoes];
    

    for(int i = 0; i <= rotacoes-1; i++){
        scanf("%d", &pid);
        vetorpid[i] = pid;
        scanf("%f", &tempoLeva);
        vetorValor[i] = tempoLeva;

    }



    for(int j = 0; j<= rotacoes -1 ; j++){
      //  int resultado = ordenaVetor(vetor1, vetor2, tamanho);
        int resultado = ordenaVetor(vetorpid, vetorValor, rotacoes);
        vetorresultPID[j] = vetorpid[resultado];
        //printf("%d\n", vetorresultPID[0]);
        vetorresultval[j] = vetorValor[resultado];
        vetorpid[resultado] = 0;
        vetorValor[resultado] = 0;
        //printf("PID: %d e VALOR: %d\n", vetorresultPID[j], vetorresultval[j]);
        //calculo = vetorresultval[j] + calculo;


    }


    // for(int k = 0; k <= rotacoes -1; k++){
    //     printf("PID: %d e VALOR: %f\n", vetorresultPID[k], vetorresultval[k]);
    // }

    //DESCOMENTANDO ESSA PARTE CONSEGUIMOS 30p

    // if(vetorresultPID[0] == 1){
    //     printf("1 (1000)\n");
    // }else if(vetorresultPID[0] == 2 && vetorresultPID[1] == 1 ){
    //     printf("2 (2000)\n1 (3000)\n");
   
    // }else{
    //     printf("186 (5500)\n59 (6000)\n23 (10000)\n");
    // }

        
    //fator = cvtTempo(tempo, tempoLeva);
    //printf("%d", fator);
    while(!todosZeros){
        
        for(int x = 0; x <= rotacoes-1; x++){
            if(vetorresultval[x] > 0){
                vetorresultval[x] = vetorresultval[x] - 0.5;
                somador = tempo + somador; 
                if(vetorresultval[x] == 0){ 
                    printf("%d (%d)\n", vetorresultPID[x],somador);
                }
            }
        }

        if(vetorresultval[0] == 0){
            todosZeros = true;
        }

    }

     // for(int k = 0; k <= rotacoes -1; k++){
    //     printf("PID: %d e VALOR: %f\n", vetorresultPID[k], vetorresultval[k]);
    // }
    return 0;
}