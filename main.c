#include "stdio.h"

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros, o tamanho do
vetor e um valor a ser procurado. A fun¸c˜ao deve procurar o valor no
vetor, caso encontre deve retornar a posi¸c˜ao (´ındice) no vetor. Caso
n˜ao encontre, deve retornar -1.
*/
// int posicao(int vetor[], int vetSize, int valor){
//     int *ptr = vetor;
//     for (int i =0; i < vetSize; i++){
//         if (*ptr == valor){
//             return i;
//         }
//         ptr++;
//     }
//     return -1;
// }


/*
Escreva uma fun¸c˜ao que receba dois vetores de inteiros de mesmo ta-
manho, e o tamanho de um deles. A fun¸c˜ao dever´a copiar os elementos
do primeiro vetor para o segundo.
*/

// void vetores(int vet[], int vetDois[], int size){
//     int *ptr = vet;
//     int *ptrDois = vetDois;
//     for (int i = 0; i < size; i++){
//         *ptrDois = *ptr;
//         ptr++;
//         ptrDois++;
//     }
// }

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros e o tamanho do
vetor. A fun¸c˜ao dever´a inverter a ordem dos elementos do vetor.
*/

// void inverte(int vet[], int size){
//     int vetDois[size];
//     int *ptr = vet+size-1;
//     int *ptrDois = vetDois;
//     for (int i = 0; i < size; i++){
//         *ptrDois = *ptr;
//         ptr--;
//         ptrDois++;
//     }

//     ptr = vet;
//     ptrDois = vetDois;
//     for (int i = 0; i < size; i++){
//         *ptr = *ptrDois;
//         ptr++;
//         ptrDois++;
//     }
    
// }

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros e o tamanho do
vetor. A fun¸c˜ao dever´a ordenar os elementos (implemente, por exemplo,
bubble sort).
*/

// void ordena(int vet[], int size) {
//     int temp;
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if ((*(vet + i)) > (*(vet + j))) {
//                 temp = (*(vet + i));
//                 (*(vet + i)) = (*(vet + j));
//                 (*(vet + j)) = temp;
//             }
//         }
//     }
// }

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros, o tamanho do
vetor e um valor a ser procurado. A fun¸c˜ao deve procurar o valor no
vetor, caso encontre deve retornar a posi¸c˜ao (´ındice) no vetor. Caso
n˜ao encontre, deve retornar -1.
*/

int posicao(int vet[], int size, int n){
    for (int i = 0; i < size; i++){
        if ((*(vet + i)) == n) return i;
    }
    printf("%d\n", *(vet));
    printf("%p\n", vet);
    printf("%d\n", *(vet+1));
    printf("%p\n", vet+1);
    printf("%d\n", *(vet+2));
    printf("%p\n", vet+2);

    printf("Tamanho de um char: %zu bytes\n", sizeof(char));
    printf("Tamanho de um short: %zu bytes\n", sizeof(short));
    printf("Tamanho de um int: %zu bytes\n", sizeof(int));
    printf("Tamanho de um long: %zu bytes\n", sizeof(long));
    return -1;
}

/*
Escreva uma fun¸c˜ao que receba dois vetores de inteiros de mesmo tamanho, e o tamanho de um deles. A fun¸c˜ao dever´a copiar os elementos
do primeiro vetor para o segundo.
*/

void vetores(int oneVet[], int twoVet[], int size){
    for (int i = 0; i < size; i++){
        (*(twoVet + i)) = (*(oneVet + i));
    }
}

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros e o tamanho do
vetor. A fun¸c˜ao dever´a inverter a ordem dos elementos do vetor.
*/

void inverte(int vet[], int size){
    int temp[size];
    for (int i = 0; i < size; i++){
        *(temp + i) = *(vet + size - i - 1);
    }
    for (int j = 0; j < size; j++){
        *(vet + j) = *(temp + j);
    }
}

/*
Escreva uma fun¸c˜ao que receba um vetor de inteiros e o tamanho do
vetor. A fun¸c˜ao dever´a ordenar os elementos (implemente, por exemplo,
bubble sort).
*/

void ordena(int vet[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (*(vet + i) > *(vet + j)){
                temp = *(vet + j);
                *(vet + j) = *(vet + i);
                *(vet + i) = temp;
            }
        }
    }
}



int main(){
    int vetor[] = {3,2,1,8,4,6,5,9,7};
    int vetorDois[9];
    int pos = posicao(vetor, 9, 11);
    if (pos == -1){
        printf("numero nao encontrado\n");
    } else {
        printf("A posicao eh: %d\n", pos);
    }

    //vetores

    // vetores(vetor, vetorDois, 9);
    // for (int i = 0; i < 9; i++){
    //     printf("vetor 1 - pos %d: %d\n", i ,vetor[i]);
    //     printf("vetor 2 - pos %d: %d\n", i ,vetorDois[i]);
    // }

    //inverte

    // inverte(vetor, 9);
    // for (int i = 0; i < 9; i++){
    //     printf("vetor 1 - pos %d: %d\n", i ,(*(vetor + i)));
    // }

    //Ordena

    // for (int i = 0; i < 9; i++){
    //     printf(" Vetor antes: %d", (*(vetor+i)));
    //     if (i == 8) printf("\n");
    // }
    // ordena(vetor, 9);
    // for (int i = 0; i < 9; i++){
    //     printf(" Vetor depois: %d", (*(vetor+i)));
    //     if (i == 8) printf("\n");
    // }
    return 0;
}