#include <stdio.h>

int main() {
    int N = 0;
    printf("N의 값을 입력하세요");
    scanf("%d",&N);
    for (int a=0; a<N; a++) {
        for( int i = N-2; i>=a; i--){
            printf(" ");
        }
        for ( int j = 0; j <=a; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
