// 중복된 문자 제거
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    map<char, int> map;
    for (int i = 0; i < my_string.length(); ++i) {
        if (map[my_string[i]]++ == 0) {
            answer += my_string[i];    
        }
    }
    return answer;
}