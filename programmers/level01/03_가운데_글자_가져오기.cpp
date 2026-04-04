/* 가운데 글자 가져오기*/
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int mid = s.size()/2;
    if (s.size() % 2 == 0) {
        answer = s.substr(mid-1, 2);
    } else {
        answer = s[mid];
    }
    
    return answer;
}