// 제일 작은 수 제거하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) {
        answer.push_back(-1);
    } else {
        int min_elem = *min_element(arr.begin(), arr.end());
        arr.erase(find(arr.begin(), arr.end(), min_elem));
        answer = arr;
    }
    return answer;
}