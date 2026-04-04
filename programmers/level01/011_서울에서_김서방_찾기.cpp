/* 서울에서 김서방 찾기 */ 
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int pos = 0;
    for (vector<std::string>::iterator iter = seoul.begin(); iter != seoul.end(); ++iter) {
        if (*iter == "Kim") {
            answer = "김서방은 " + std::to_string(pos) + "에 있다";
            break;
        }
        pos++;
    }
    return answer;
}