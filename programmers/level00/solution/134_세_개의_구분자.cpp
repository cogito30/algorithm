// 세 개의 구분자
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string str;
    for (int i = 0; i < myStr.length(); ++i) {
        if ((myStr[i] == 'a') || (myStr[i] == 'b') || (myStr[i] == 'c')) {
            if (str != "")
                answer.push_back(str);
            str = "";
        } else {
            str += myStr[i];    
        }
    }
    if (str != "") {
        answer.push_back(str);
    }
    if (answer.size() == 0) {
        answer = {"EMPTY"};
    }
    return answer;
}