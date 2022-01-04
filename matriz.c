#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz {
    int n;
    float** valor;
};

Matriz* cria (int n){
    int i, j;
    Matriz *mat;
    mat = (Matriz*)malloc(sizeof(Matriz));
    if(mat == NULL){
        printf("ERRO!!! \n");
        exit(1);
    }
    mat->n = n;
    mat->valor = (float**)malloc(n*sizeof(float*));
    for(i = 0; i < n; i++){
        mat->valor[i] = (float*)malloc(n*sizeof(float));
        for(j = 0; j < n; j++){
            mat->valor[i][j] = 0;
        }
    }
    return mat;
}
void libera (Matriz* mat){
    if(mat != NULL){
        int i;
        for(i = 0; i < mat->n; i++){
            free(mat->valor[i]);
        }
        free(mat->valor);
        free(mat);
    }else{
        printf("matriz inexistente!\n");
        exit(1);
    }
}
float acessa (Matriz* mat, int l, int c){
    if(mat == NULL){
        printf("ERRO!!! \n");
        exit(1);
    }else if(l < 0 || l >= mat->n){
        printf("ERRO!!!  Linha fora da matriz \n");
        exit(1);
    }else if(c < 0 || c >= mat->n){
        printf("ERRO!!!  Coluna fora da matriz \n");
        exit(1);
    }else{
        return mat->valor[l][c];
    }
}
void atribui (Matriz* mat, int l, int c, float num){
    if(mat == NULL){
        printf("ERRO!!! \n");
        exit(1);
    }else if(l < 0 || l >= mat->n){
        printf("ERRO!!!  Linha fora da matriz \n");
        exit(1);
    }else if(c < 0 || c >= mat->n){
        printf("ERRO!!!  Coluna fora da matriz \n");
        exit(1);
    }else{
        mat->valor[l][c] = num;
    }
}
int linhas (Matriz* mat){
    if(mat == NULL){
        printf("ERRO!!! \n");
        exit(1);
    }else{
        return mat->n;
    }
}
int colunas (Matriz* mat){
    if(mat == NULL){
        printf("ERRO!!! \n");
        exit(1);
    }else{
        return mat->n;
    }
}
Matriz* somar(Matriz* a,Matriz* b){
    int i,j;
    Matriz* res;
    res = cria(a->n);
    for(i = 0; i < a->n; i++){
        for(j = 0; j < a->n; j++){
            res->valor[i][j] = a->valor[i][j] + b->valor[i][j];
        }
    }
    return res;
}

void exibir (Matriz* mat){
    int i,j;
    for(i = 0; i < mat->n; i++){
        for(j = 0; j < mat->n; j++){
            printf("%.1f \t", mat->valor[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
/*Matriz* multiplicar(Matriz* a,Matriz* b){
    Matriz* res;
    res = cria(a->n);
    for(i = 0; i < a->n; i++){
        for(j = 0; j < a->n; j++){

        }
    }
}
*/
