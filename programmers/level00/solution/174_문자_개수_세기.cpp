// 문자 개수 세기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for (int i = 0; i < my_string.length(); ++i) {
        if (my_string[i] >= 97) {
            answer[my_string[i] - 'a' + 26]++;    
        } else {
            answer[my_string[i] - 'A']++;    
        }
    }
    return answer;
}