#include <stdio.h>
int main(void){

    int s, e;

        while(1)
    {
        scanf("%d %d", &s, &e);
        if(2>s || s>9 || 2>e || e>9) {
            printf("INPUT ERROR!\n");
        } else {
            if(s < e) {
                    for(int j=s; j<=e; j++){
                        printf("%d * %d = %2d", j, i, j * i);
                    }
                    printf("\n");
                }
            } 
            else {
                for(int i=1; i<=9; i++){
                    for(int j=s; j>=e; j--){
                        printf("%d * %d = %2d", j, i, j * i);
                    }
                    printf("\n");
            }
            break;
        } 
        /*if(2<=s && s<=9 && 2<=e && e<=9) {
            printf("O");
        } else {
            printf("X");
        }*/
}
}
