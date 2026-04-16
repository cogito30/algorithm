// 공백으로 구분하기 2
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream ss;
    ss.str(my_string);
    string str;
    while (ss >> str) {
        answer.push_back(str);
    }
    return answer;
}