// 원하는 문자열 찾기
#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for (int i = 0; i < myString.length(); ++i) {
        myString[i] = tolower(myString[i]);
    }
    for (int i = 0; i < pat.length(); ++i) {
        pat[i] = tolower(pat[i]);
    }
    
    // pat의 길이가 myString 길이보다 긴 경우 주의
    if (pat.length() > myString.length()) {
        answer = 0;
    } else if (pat.length() == myString.length()) {
        if (myString == pat)
            answer = 1;
    } else {
        for (int i = 0; i < myString.length() - pat.length(); ++i) {
            if (myString.substr(i, pat.length()) == pat) {
                answer = 1;
                break;
            }
        }        
    }
    return answer;
}