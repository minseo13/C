#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char* grade) {
    int answer = 0;
    if(grade == "S") {
        answer = price * 0.95;
    } 
    else if(grade == "G") {
        answer = price * 0.9;
    }
    else {
        answer = price * 0.85;
    }
    
    return answer;
}

int main() {
    int price1 = 2500;
    char* grade = "V";
    int ret1 = solution(price1, grade 1);

    printf("solution: return value of the function is %d ,\n", ret1)

    int price2 = 96900;
    char* grade2 = "5";
    int 
}

