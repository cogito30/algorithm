/* 머쓱이보다 키 큰 사람 */
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for (vector<int>::iterator iter = array.begin(); iter != array.end(); ++iter) {
        if (*iter > height) {
            answer++;
        }
    }
    return answer;
}