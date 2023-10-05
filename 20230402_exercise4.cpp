#include <stdio.h>

int main() {
    int n, i, num;
    printf("출력할 마지막 정수>");
    scanf("%d",&n);
    num = 1;
    while (1) {
        for (i = 0; i <8; i++){
            if (num>n) goto end;
            printf("%6d", num);
            num++;
        }
        printf("\n");
    }
end:
    printf("good bye\n");
    return 0;
}
