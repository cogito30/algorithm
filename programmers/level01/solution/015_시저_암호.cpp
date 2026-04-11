// 시저 암호
#include <string>
#include <vector>

using namespace std;

char change_alpha(char ch, int n) {
    char result;
    if (ch >= 'a' && ch <= 'z') {
        result = 'a' + (ch - 'a' + n) % 26;    
    } else if (ch >= 'A' && ch <= 'Z') {
        result = 'A' + (ch - 'A' + n) % 26;
    } else {
        result = ch;
    }
    return result;
}

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.length(); ++i) {
        answer += change_alpha(s[i], n);
    }
    return answer;
}