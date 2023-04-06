#include <stdio.h>

int main(void){
    int n, i=1, a, b; 
    scanf("%d", &n);

    while(i<=n){
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    i++;
    }
    
}