// 이상한 문자 만들기
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s.at(i) == ' ') {
            cnt = 0;
        } else {
            cnt++;
        }
        
        if (cnt % 2 == 1) {
            answer += toupper(s.at(i));
        } else {
            answer += tolower(s.at(i));
        }
    }
    return answer;
}