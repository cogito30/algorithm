// 조건에 맞게 수열 변환하기 3
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    if (k % 2 == 1) {
        for (int i = 0; i < arr.size(); ++i) {
            answer.push_back(arr[i] * k);
        }
    } else {
        for (int i = 0; i < arr.size(); ++i) {
            answer.push_back(arr[i] + k);
        }
    }
    return answer;
}