/* 나머지가 1이 되는 수 찾기 */ 
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int x = 1; x <= n; ++x) {
        if (n % x == 1) {
            answer = x;
            break;
        }
    }
    return answer;
}