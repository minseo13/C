#include <stdio.h>
#define STUDENTS 10

int main(void){
    int i,average;
    int sum;
    int scores[STUDENTS];

    for(i=0; i < STUDENTS; i++){
        printf("학생들의 성적을 입력하시오:");
        scanf("%d", &scores[i]);
}
for(i=0; i < STUDENTS; i++)
    sum += scores[i];
    //count 쓰는게 나을듯
}