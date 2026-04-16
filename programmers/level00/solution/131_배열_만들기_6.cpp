// 배열 만들기 6
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> stack;
    int i = 0;
    while (i < arr.size()) {
        if (stack.size() == 0) {
            stack.push_back(arr[i]);
            i++;
        } else if (stack[stack.size() - 1] == arr[i]) {
            stack.pop_back();
            i++;
        } else if (stack[stack.size() - 1] != arr[i]) {
            stack.push_back(arr[i]);
            i++;
        }
    }
    if (stack.size() == 0) {
        answer = {-1};
    } else {
        answer = stack;
    }
    return answer;
}