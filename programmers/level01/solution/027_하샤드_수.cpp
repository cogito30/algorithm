// 하샤드 수
#include <string>
#include <vector>

using namespace std;

int check_div(int a) {
    int result = 0;
    while (a > 0) {
        result += a % 10;
        a /= 10;
    }
    return result;
}

bool solution(int x) {
    bool answer = true;
    int div = check_div(x);
    
    if (x % div != 0) {
        answer = false;
    }
    
    return answer;
}