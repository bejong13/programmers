#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int i=0; // 왼쪽 피연산자
    int j=0; // 오른쪽 피연산자
    int result[201]={0}; // 조건 : 0 ~ 100의 숫자중 최대값은 200
    int result_len=0; // 결과값 길이
    for(i=0;i<numbers_len-1;i++){ // 왼쪽 피연산자는 i의 다음 수부터 읽는다
        for(j=i+1;j<numbers_len;j++){ // 오른쪽 피연산자는 i의 다음 수부터 읽는다
            if(result[numbers[i]+numbers[j]]==0){ // 중복값이 아니라면
                result[numbers[i]+numbers[j]]=1; // 체크
                result_len++; // 결과값 길이 추가
            }
        }
    }
    // 동적할당 (int 4byte * 길이)
    int* answer = (int*)malloc(sizeof(int)*result_len);
    
    // 계수정렬
    int index=0;
    for(i=0;i<201;i++){
        if(result[i]==1){
            answer[index++]=i;
        }
    }
    return answer;
}

github link : https://github.com/ppangjong/programmers.git