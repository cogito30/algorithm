// 연속된 수의 합
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int start = 0, end = 0;
    if (num % 2 == 1) {
        start = total / num - (num / 2);
        end = total / num + (num / 2);
    } else {
        start = total / num - (num / 2) + 1;
        end = total / num + (num / 2);
    }
    for (int i = start; i <= end; ++i) {
        answer.push_back(i);
    }        

    return answer;
}