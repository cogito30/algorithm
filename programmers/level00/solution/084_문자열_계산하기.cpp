// 문자열 계산하기
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss;
    ss.str(my_string);
    string str;
    int sign = 1;
    while (ss >> str) {
        if (str == "+") {
            sign = 1;
        } else if (str == "-") {
            sign = -1;
        } else {
            answer += sign * stoi(str);
            sign = 1;
        }
    }
    return answer;
}