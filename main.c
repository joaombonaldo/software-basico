#include "stdio.h"

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros, o tamanho do
vetor e um valor a ser procurado. A fun¸c˜ao deve procurar o valor no
vetor, caso encontre deve retornar a posi¸c˜ao (´ındice) no vetor. Caso
n˜ao encontre, deve retornar -1.
*/
int posicao(int vetor[], int vetSize, int valor){
    int *ptr = vetor;
    for (int i =0; i < vetSize; i++){
        if (*ptr == valor){
            return i;
        }
        ptr++;
    }
    return -1;
}


/*
Escreva uma fun¸c˜ao que receba dois vetores de inteiros de mesmo ta-
manho, e o tamanho de um deles. A fun¸c˜ao dever´a copiar os elementos
do primeiro vetor para o segundo.
*/

void vetores(int vet[], int vetDois[], int size){
    int *ptr = vet;
    int *ptrDois = vetDois;
    for (int i = 0; i < size; i++){
        *ptrDois = *ptr;
        ptr++;
        ptrDois++;
    }
}

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros e o tamanho do
vetor. A fun¸c˜ao dever´a inverter a ordem dos elementos do vetor.
*/

void inverte(int vet[], int size){
    int vetDois[size];
    int *ptr = vet+size-1;
    int *ptrDois = vetDois;
    for (int i = 0; i < size; i++){
        *ptrDois = *ptr;
        ptr--;
        ptrDois++;
    }

    ptr = vet;
    ptrDois = vetDois;
    for (int i = 0; i < size; i++){
        *ptr = *ptrDois;
        ptr++;
        ptrDois++;
    }
    
}

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros e o tamanho do
vetor. A fun¸c˜ao dever´a ordenar os elementos (implemente, por exemplo,
bubble sort).
*/



int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9};
    int vetorDois[9];
    int pos = posicao(vetor, 9, 8);
    if (pos == -1){
        printf("numero nao encontrado\n");
    } else {
        printf("A posicao eh: %d\n", pos);
    }

    vetores(vetor, vetorDois, 9);
    for (int i = 0; i < 9; i++){
        printf("vetor 1 - pos %d: %d\n", i ,vetor[i]);
        printf("vetor 2 - pos %d: %d\n", i ,vetorDois[i]);
    }

    inverte(vetor, 9);
    for (int i = 0; i < 9; i++){
        printf("vetor 1 - pos %d: %d\n", i ,vetor[i]);
    }
    return 0;
}