// 배열 비교하기
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if (arr1.size() < arr2.size()) {
        answer = -1;
    } else if (arr1.size() > arr2.size()) {
        answer = 1;
    } else {
        int arr1_sum = 0;
        int arr2_sum = 0;
        for (int i = 0; i < arr1.size(); ++i) {
            arr1_sum += arr1[i];
            arr2_sum += arr2[i];
        }
        answer = (arr1_sum > arr2_sum) ? 1 : (arr1_sum == arr2_sum) ? 0 : -1;
    }
    return answer;
}