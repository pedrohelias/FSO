#include <stdio.h>
#include <stdlib.h>

float cvtTempo(float tempo, int tempoLeva){
    float operacao = tempo/1000;
    return (tempoLeva/operacao);
}


float operacao(float fator, float tempo){
    return fator * tempo;
    
}
int main(){
    //float tempo = 500;
    //float cvt = cvtTempo(tempo);
    //printf("%.1f\n", cvt);
    
    int rotacoes = 0;
    float tempo = 0;
    int tempoLeva = 0;
    int pid = 0;
    float fator = 0;
    float recebeOp = 0;
    int somador = 0;
    scanf("%d", &rotacoes);
    scanf("%f", &tempo);


    for(int i = 1; i <= rotacoes; i++){
        scanf("%d", &pid);
        scanf("%d", &tempoLeva);
        fator = cvtTempo(tempo, tempoLeva);
        recebeOp = operacao(fator, tempo);
        somador = recebeOp + somador;
        printf("%d (%d)\n", pid, somador);

        


    }

    return 0;
}