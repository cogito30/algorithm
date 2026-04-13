// 1로 만들기
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int count, num;
    for (int i = 0; i < num_list.size(); ++i) {
        count = 0;
        num = num_list[i];
        while (num > 1) {
            count++;
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num -= 1;
                num /= 2;
            }
        }
        answer += count;
    }
    return answer;
}