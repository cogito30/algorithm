// 접미사인지 확인하기
#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 1;
    int suffix_index = my_string.length() - is_suffix.length();
    for (int i = 0; i < is_suffix.length(); ++i) {
        if (is_suffix[i] != my_string[suffix_index + i]) {
            answer = 0;
            break;
        }
    }
    return answer;
}