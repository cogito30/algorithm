// 배열 만들기 2
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string num_str = "";
    for (int i = l; i <= r; ++i) {
        num_str = to_string(i);
        for (int j = 0; j < num_str.length(); ++j) {
            if ((num_str[j] != '5') && (num_str[j] != '0')) {
                break;
            } 
            if (j == num_str.length() - 1) {
                answer.push_back(i);
            }
        }
    }
    if (answer.size() == 0) {
        answer = {-1};
    }
    return answer;
}