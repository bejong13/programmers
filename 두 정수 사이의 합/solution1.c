#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) { // 변수 a,b 선언
    if (a == b) return a; // a와 b 값이 같을경우 return a

    int sum = a + b, count = b - a + 1; // 
    if (a > b)
        count = a - b + 1;
    return (long long)sum * count / 2;
}

// github link : https://github.com/ppangjong/programmers.git