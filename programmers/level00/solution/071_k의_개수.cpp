// k의 개수
#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string num_str = "";
    for (int num = i; num <= j; ++num) {
        num_str = to_string(num);
        for (int l = 0; l < num_str.length(); ++l) {
            if (num_str[l] == (k + '0')) {
                answer++;
            }
        }
    }
    return answer;
}