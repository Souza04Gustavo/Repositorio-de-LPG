#include <stdio.h>


int tipo_triangulo(float x, float y, float z){

    if(x < y + z){
    return 0;
    }else{
        return 1;
    }

}

int main(){

    float vetor[3], x, y, z;
    printf("Insira 3 lados de um triangulo:\n");
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

    int num;
    num = tipo_triangulo(x, y, z);
    printf("%i", num);

}