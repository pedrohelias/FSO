#include <stdio.h>
#include <stdlib.h>

// float cvtTempo(float tempo, int tempoLeva){
//     float operacao = tempo/1000;
//     return (tempoLeva/operacao);
// }


// float operacao(float fator, float tempo){
//     return fator * tempo;
    
// }
// int main(){
//     //float tempo = 500;
//     //float cvt = cvtTempo(tempo);
//     //printf("%.1f\n", cvt);
    
//     int rotacoes = 0;
//     float tempo = 0;
//     int tempoLeva = 0;
//     int pid = 0;
//     float fator = 0;
//     float recebeOp = 0;
//     int somador = 0;
//     scanf("%d", &rotacoes);
//     scanf("%f", &tempo);


//     for(int i = 1; i <= rotacoes; i++){
//         scanf("%d", &pid);
//         scanf("%d", &tempoLeva);
//         fator = cvtTempo(tempo, tempoLeva);
//         recebeOp = operacao(fator, tempo);
//         somador = recebeOp + somador;
//         printf("%d (%d)\n", pid, somador);

        


//     }

//     return 0;
// }

int ordenaVetor(int *pid, int *valor, int tam){
    int menorValor = 999;
    int grau = 0;
    for(int i=0; i <= tam -1; i++){
        if(valor[i] < menorValor){
            menorValor = valor[i];
            grau = i;
        }
    }
    
    //printf("grau: %d, com valor: %d", pid[grau], valor[grau]);
    return grau; //retorna posicao do vetor que é o menor grau
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
    int vetorresultval[4];
    int vetorresultPID[4];

    for(int j = 0; j<= tamanho -1 ; j++){
        int resultado = ordenaVetor(vetor1, vetor2, tamanho);
        vetorresultPID[j] = vetor1[resultado];
        //printf("%d\n", vetorresultPID[0]);
        vetorresultval[j] = vetor2[resultado];
        vetor1[resultado] = 9999;
        vetor2[resultado] = 9999;
        printf("PID: %d e VALOR: %d\n", vetorresultPID[j], vetorresultval[j]);
//        printf("%d\n", vetorresultval[j]);

    }
        //  printf("saiu do loop com: %d\n", vetorresultPID[0]);
    

    // for(int k = 0; k <= tamanho -1; k++){
    //     printf("PID: %d e VALOR: %d\n", vetorresultPID[k], vetorresultval[k]);
    // }
    //printf("%d", vetor1[resultado]);
    return 0;
}