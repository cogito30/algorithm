// 배열의 길이를 2의 거듭제곱으로 만들기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int count = 0;
    int len_arr = arr.size();
    while (len_arr > 0) {
        count++;
        len_arr /= 2;
    }

    int num = 2;
    for (int i = 1; i < count; ++i) {
        num *= 2;
    }
    
    if (arr.size() != num / 2) {
        for (int i = 0; i < num - arr.size(); ++i) {
            answer.push_back(0);
        }    
    }
    return answer;
}