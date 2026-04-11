// 더 크게 합치기
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int num1 = stoi(to_string(a) + to_string(b));
    int num2 = stoi(to_string(b) + to_string(a));
    if (num1 < num2) {
        answer = num2;
    } else {
        answer = num1;
    }
    return answer;
}