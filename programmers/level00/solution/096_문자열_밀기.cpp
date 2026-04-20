// 문자열 밀기
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    queue<char> str_A;
    queue<char> str_B;
    for (int i = 0; i < A.length(); ++i) {
        str_A.push(A[i]);
        str_B.push(B[i]);
    }
    
    int i = 0;
    while (i <= 100) {
        if (str_A == str_B) {
            break;
        }
        str_B.push(str_B.front());
        str_B.pop();
        i++;
    }
    if (i == 101) {
        answer = -1;
    } else {
        answer = i;    
    }
    
    return answer;
}