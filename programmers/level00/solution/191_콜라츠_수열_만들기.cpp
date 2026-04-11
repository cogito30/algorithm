// 콜라츠 수열 만들기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer = {n};
    while (true) {
        if (n % 2 == 0) {
            n /= 2;
        } else if(n % 2 == 1) {
            n = 3 * n + 1;
        }
        answer.push_back(n);
        
        if (n == 1) {
            break;
        }
    }
    return answer;
}