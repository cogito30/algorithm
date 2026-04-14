// 공백으로 구분하기 1
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream ss(my_string);
    string str;
    while (true) {
        if (ss.eof()) {
            break;
        }
        ss >> str;
        answer.push_back(str);
    }
    return answer;
}