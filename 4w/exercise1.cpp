#include <stdio.h>

int main() {
    int hour, minute;
    printf("언제로 되돌아가나요?");
    scanf("%d %d",&hour,&minute);
    
    if ((hour < 12 && (hour + minute) % 3 == 0) || (hour >=12 && (hour + minute) % 7 == 0))
    {
        printf("가능");
    }
    else{
        printf("불가능");
    }
    return 0;
}
