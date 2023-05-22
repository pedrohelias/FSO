#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int sinalSaiFilho = 0;

void capturaSinal(int sinalSIGUSR){
    sinalSaiFilho=sinalSIGUSR;
}

int main(void){
    signal(SIGUSR1, capturaSinal);
    signal(SIGUSR2, capturaSinal);

    pause(); //necessario para receber o proximo sinal

    if(fork()==0){ //criando um processo zumbi. Se estou dentro do proesso filho(== o), exit(0) faz ele morrer imediantamente
        return 0;
    }
    pause(); //processo pai ja fez um pause, ou seja, nao vai pegar o exit do filho
    wait(NULL); //matando o processo zumbi, independente do status.
    pause(); 
    return 0;
}
