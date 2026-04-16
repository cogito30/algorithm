// 문자열 잘라서 정렬하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string str = "";
    for (int i = 0; i < myString.length(); ++i) {
        if (myString[i] == 'x') {
            if (str.length() > 0)
                answer.push_back(str);
            str = "";
        } else {
            str += myString[i];
        }
    }
    if (str.length() > 0)
        answer.push_back(str);
    sort(answer.begin(), answer.end());
    return answer;
}