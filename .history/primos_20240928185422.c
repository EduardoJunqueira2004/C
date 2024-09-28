#include<stdio.h>

int N;

void primo(int N){
    for(int i=2;i<=N/2;i++){
            if(N%i==0){
                printf("O numero introduzido: %d nao e primo", N);
            }
        }
    if(N<=1){
        printf("O numero introduzido: %d nao e primo", N);
    }else{
        printf("O numero introduzido: %d e primo", N);
    }
}
int main(){
    printf("Porfavor introduza um numero inteiro: ");
    scanf("%d", &N);
    primo(N);
    /*if(N<=1){
        printf("O numero introduzido nao e primo");
    }
    else{
        for(int i=2;i<=N/2;i++){
            if(N%i==0){
                printf("O numero introduzido nao e primo");
                return 0;
            }
        }
        printf("O numero introduzido e primo");
    }
    */
    return 0;
}