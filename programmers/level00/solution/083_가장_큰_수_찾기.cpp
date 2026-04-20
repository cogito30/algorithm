// 가장 큰 수 찾기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max_val = 0;
    int max_idx = 0;
    for (int i = 0; i < array.size(); ++i) {
        if (array[i] > max_val) {
            max_val = array[i];
            max_idx = i;
        }
    }
    answer.push_back(max_val);
    answer.push_back(max_idx);
    return answer;
}