// 문자열안에 문자열
#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2;
    if (str1.find(str2) != string::npos) {
        answer = 1;
    }
    return answer;
}