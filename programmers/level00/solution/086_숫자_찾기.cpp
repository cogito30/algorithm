// 숫자 찾기
#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string num_str = to_string(num);
    for (int i = 0; i < num_str.length(); ++i) {
        if (num_str[i] == (k + '0')) {
            answer = i + 1;
            break;
        }
    }
    return answer;
}