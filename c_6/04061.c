#include <stdio.h>
int main (void)
{
    char op;
    int x, y, result;
    
    printf("수식을 입력하시오(예: 2 + 5)>>");
    scanf("%d %c %d", &x, &op, &y);

    if( op == '+') 
         result = x + y;
    else if( op == '-' )
        result = x - y;
    else if( op == '*' )
        result = x * y;
    else if( op == '/' )
        result = x / y;
    else if( op == '%' )
        result = x % y;
    else
        printf("지원되지 않는 연산자입니다. ");

    printf("%d %c %d = %d \n", x, op, y, result);
    return 0;
}
