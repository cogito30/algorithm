// 한 번만 등장한 문자
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> map;
    for (int i = 0; i < s.length(); ++i) {
        map[s[i]]++;
    }
    for (int i = 0; i < 26; ++i) {
        if (map['a' + i] == 1)
            answer += 'a' + i;
    }
    return answer;
}