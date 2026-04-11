// 원소들의 곱과 합
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul_val = 1;
    int sum = 0;
    for (int i = 0; i < num_list.size(); ++i) {
        mul_val *= num_list[i];
        sum += num_list[i];
    }
    
    if (mul_val < sum * sum) {
        answer = 1;
    } else {
        answer = 0;
    }
    return answer;
}