/* 대소문자 바꿔서 출력하기 */ 
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    string answer = "";
    for (int i = 0; i < str.length(); ++i) {
        if (islower(str[i]))
            answer += toupper(str[i]);
        else
            answer += tolower(str[i]);
    }
    cout << answer;
    return 0;
}