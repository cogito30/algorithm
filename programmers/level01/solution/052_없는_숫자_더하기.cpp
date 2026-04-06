/* 없는 숫자 더하기 */ 
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    int tmp_num = 0;
    for (int i = 0; i < 10; ++i) {
        tmp_num = i;
        for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
            if (i == *iter) {
                tmp_num = 0;
                break;
            }
        }
        answer += tmp_num;
    }
    return answer;
}