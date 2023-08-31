#include <stdio.h>

int main(){

    printf("Insira 3 numeros inteiros:\n");
    for(int i = 0; i < 3; i++){
        scanf("%f", &vetor[i]);
    }

    //ordenando em ordem decrescente o vetor dos lados:
    float aux;
    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    //salvando as posicoes do vetor em variaveis fixas
    x = vetor[0];
    y = vetor[1];
    z = vetor[2];

}