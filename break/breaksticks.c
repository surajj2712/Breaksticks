#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int breaksticks(int N,int* A, int M, int desiredlength){
}
int main(){
    int N;
    scanf("%d", &N);
    int*A = (int*)malloc(N * sizeof(int));
    for(int j=0;j<N;j++){
        scanf("%d", &A[j]);
    }
    int M;
    scanf("%d", &M);
    int desiredlength;
    scanf("%d", &desiredlength);
    int result;
    result = breaksticks(N, A, M, desiredlength);
    printf("%d", result);
    return 0;
}