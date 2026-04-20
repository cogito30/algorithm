// 문자열 정렬하기 (2)
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> str_list;
    for (int i = 0; i < my_string.length(); ++i) {
        str_list.push_back(tolower(my_string[i]));
    }
    sort(str_list.begin(), str_list.end());
    for (int i = 0; i < str_list.size(); ++i) {
        answer += str_list[i];
    }
    return answer;
}