// 콜라츠 추측
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long number = num; // int의 경우 범위를 벗어남
    while (number > 1) {
        if (number % 2 == 0) {
            number /= 2;
        } else {
            number = number * 3 + 1;
        }
        
        answer++;
        
        if (answer >= 500) {
            answer = -1;
            break;
        }
    }
    return answer;
}