// 특정 문자열로 끝나는 가장 긴 부분 문자열 찾기
#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int i = myString.rfind(pat);
    answer = myString.substr(0, i + pat.length());
    return answer;
}