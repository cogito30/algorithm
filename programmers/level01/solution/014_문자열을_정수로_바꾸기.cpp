/* 문자열을 정수로 바꾸기 */ 
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int idx = 0;
    short sign = 1;
    if (s.at(0) == '-') {
        sign = -1;
        idx++;
    } else if (s.at(0) == '+') {
        sign = 1;
        idx++;
    }
    
    while (idx < s.length()) {
        answer *= 10;
        answer += s.at(idx) - '0';
        idx++;
    }
    answer = sign * answer;
    return answer;
}