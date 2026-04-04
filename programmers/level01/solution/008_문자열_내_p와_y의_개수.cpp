/* 문자열 내 p와 y의 개수 */ 
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = false;

    int cnt_p = 0;
    int cnt_y = 0;
    char ch;
    for (int i=0; i < s.size(); ++i) {
        ch = s.at(i);
        if (ch == 'p' || ch == 'P') {
            cnt_p++;
        } else if (ch == 'y' || ch == 'Y') {
            cnt_y++;
        }
    }
    
    if (cnt_p == cnt_y) {
        answer = true;
    }

    return answer;
}