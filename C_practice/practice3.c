#include <stdio.h>

int main(void)

{
    long fact = 1;
    int i = 1, n;
    printf("정수를 입력하세요.:");
    scanf("%d", &n);
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("%d!은 %d입니다.", n, fact);
    return 0;
}