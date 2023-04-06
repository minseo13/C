#include <stdio.h>
int main(void)
{
    int i = 1;

    while(i)
    {
        printf("%d * %d = %d\n", 2, i, 2* i);
        i++;
        if(i>9)
        {
            break;
            }
    }
}