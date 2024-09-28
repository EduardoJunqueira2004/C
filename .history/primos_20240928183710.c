#include<stdio.h>

int N;

char primo(int N){
    if(N<=1){
        return 0;
    }
    else{
        for(int i=2;i<=N/2;i++){
            if(N%i==0){
                return 1; // Não é primo, pois num é divisível por i
            }
        }
        return 0; // É primo
    }
}
int main(){
    printf("Porfavor introduza um numero inteiro");
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