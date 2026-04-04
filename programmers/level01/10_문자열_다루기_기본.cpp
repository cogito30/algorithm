/* 문자열 다루기 기본 */ 
#include <string>
#include <vector>

using namespace std;

bool check_str (string str) {
    char ch;
    for (int i = 0; i < str.size(); ++i) {
        ch = str.at(i);
        if (ch < '0' || ch > '9') {
            return false;
        }
    }
    return true;
}

bool solution(string s) {
    bool answer = true;
    
    int len_s = s.size();
    if (len_s != 4 && len_s != 6) {
        answer = false;
    } else {
        answer = check_str(s);
    }
    
    return answer;
}