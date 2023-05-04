#include <stdio.h>
int main (void) {

    int a=0;

    for(int i=5; i>0, i-- ){
        for(int j=0; j<i; j++)
        {printf("*");
        }
        
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main(void) 
{
    int i, j, k, n;
    /*printf("입력하세요: ");
    scanf("%d",&n);*/
    for(i=1;i<=5;i++) 
    {
        for(k=1;k<=5-i;k++) 
        {
            printf(" ");
        }
        for(j=0;j<i;j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }
