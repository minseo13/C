#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45  
int main (void)
{
    int i;

    srand( (unsigned)time( NULL ) ); /*난수 생성 but 중복가능성   unsigned뜻 부등호를 쓰지 않겠다*/
    for(i = 0; i < 6; i++)
        printf("%d\n", 1+rand()%MAX);
        return 0;
}