#include <stdio.h>

int main() {
    int a1, a2, r;
    char Tc, Fc;
    
    printf("연세가 쓴 수식");
    scanf("%d %c %d = %d", &a1, &Fc, &a2, &r);
    
    if (Fc == '+'){
        Tc = '-';
    } else if (Fc == '-'){
        Tc = '+';
    } else if (Fc == '*'){
        Tc = '/';
    } else if (Fc == '/'){
        Tc = '*';
    }
    
    printf("바보야, %c가 아니라 %c겠지!",Fc,Tc);
    return 0;
}
