/* 수박수박수박수박수박수? */
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    bool odd = false;
    if (n % 2 == 1) {
        odd = true;
    }
    
    int cnt = n / 2;
    for (int i = 0; i < cnt; ++i) {
        answer.append("수박");
    }
    
    if (odd) {
        answer.append("수");
    }
    
    return answer;
}