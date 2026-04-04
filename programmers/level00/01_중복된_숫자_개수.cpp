/* 중복된 숫자 개수 */
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    for (vector<int>::iterator iter = array.begin(); iter != array.end(); ++iter) {
        if (*iter == n) {
            answer++;
        }
    }
    return answer;
}