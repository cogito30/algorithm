/* 두 정수 사이의 합 */ 
#include <string>
#include <vector>

using namespace std;

void swap(int& num1, int& num2) {
    int tmp = 0;
    if (num1 > num2) {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    return;
}

long long seq_sum(int& num1, int& num2) {
    long long sum = 0;
    for (int i = num1; i <= num2; ++i) {
        sum += i;
    }
    return sum;
}

long long solution(int a, int b) {
    long long answer = 0;
    
    swap(a, b);
    
    if (a == b) {
        answer = a;
    } else {
        answer = seq_sum(a, b);
    }
    
    return answer;
}