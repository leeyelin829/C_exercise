
#include <stdio.h>

int main() {
    int D;
    printf("오늘이 3월 몇일인지 아니?");
    scanf("%d일 ",&D);
    
    int day = D+22;
    if (day > 31){
        day -= 31;
    }
    
    int week_day = D % 7;
    
    printf("4월 %d일", day);
    switch(week_day) {
        case 0:
            printf("월요일\n");
            break;
        case 1:
            printf("화요일\n");
            break;
        case 2:
            printf("수요일\n");
            break;
        case 3:
            printf("목요일\n");
            break;
        case 4:
            printf("금요일\n");
            break;
        case 5:
            printf("토요일\n");
            break;
        case 6:
            printf("일요일\n");
            break;
    }
    if (week_day == 5 || week_day ==6){
        printf(":)");
    } else{
        printf(":(");
    }
    
    
    return 0;
}
