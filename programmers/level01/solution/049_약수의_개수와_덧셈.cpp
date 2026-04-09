/* 약수의 개수와 덧셈 */ 
#include <string>
#include <vector>

using namespace std;

bool check_even_count_measure(int num) {
    bool state = false;
    int cnt = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cnt++;
        }
    }
    
    if (cnt % 2 == 0) {
        state = true;
    }
    return state;
}

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; ++i) {
        if (check_even_count_measure(i)) {
            answer += i;
        } else {
            answer -= i;
        }
    }
    
    return answer;
}