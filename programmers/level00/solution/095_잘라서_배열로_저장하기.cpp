// 잘라서 배열로 저장하기
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    if (my_str.length() % n == 0) {
        for (int i = 0; i < my_str.length() / n; ++i) {
            answer.push_back(my_str.substr(n*i, n));
        }
    } else {
        for (int i = 0; i < my_str.length() / n + 1; ++i) {
            answer.push_back(my_str.substr(n*i, n));
        }
    }
    return answer;
}