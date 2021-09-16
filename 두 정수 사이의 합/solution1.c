#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) { // ���� a,b ����
    if (a == b) return a; // a�� b ���� ������� return a

    int sum = a + b, count = b - a + 1; // 
    if (a > b)
        count = a - b + 1;
    return (long long)sum * count / 2;
}

// github link : https://github.com/ppangjong/programmers.git