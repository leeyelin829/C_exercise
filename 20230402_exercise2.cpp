#include <stdio.h>

int main() {
    int N, i, j;
    printf("N의 값을 입력하세요");
    scanf("%d",&N);
    
    for(int i = N; i>0; i--) {
        for (int k = N - i; k>0; k--){
            printf(" ");
        }
        for(int j =i*2-1; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i<N; i++) {
        for (int k = N - (i+1); k>0; k--){
            printf(" ");
        }
        for(int j =(i+1)*2-1; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
