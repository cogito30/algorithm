// 문자열 여러 번 뒤집기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    int s, e;
    for (int i = 0; i < queries.size(); ++i) {
        s = queries[i][0];
        e = queries[i][1];
        answer = "";
        for (int j = 0; j < s; ++j) {
            answer += my_string[j];
        }
        for (int j = e; j >= s; --j) {
            answer += my_string[j];
        }
        for (int j = e + 1; j < my_string.length(); ++j) {
            answer += my_string[j];
        }
        my_string = answer;
    }
    return answer;
}