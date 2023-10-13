#include <stdio.h>

int main() {
    int sum, count, num;
    
    sum = 0;
    count = 0;
    
    printf("10개의 양의 정수를 입력하시오");
    while (count < 10) {
        scanf("%d",&num);
        if (num <= 0) {
            printf("%d는 잘못된 입력입니다.", num);
            continue;
        }
        sum += num;
        count++;
    }
    printf("합=%d",sum);
    return 0;
}
