// 홀수 vs 짝수
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd_sum = 0;
    int even_sum = 0;
    for (int i = 0; i < num_list.size(); ++i) {
        if (i % 2 == 0) {
            even_sum += num_list[i];
        } else {
            odd_sum += num_list[i];
        }
    }
    if (odd_sum < even_sum) {
        answer = even_sum;
    } else {
        answer = odd_sum;
    }
    return answer;
}