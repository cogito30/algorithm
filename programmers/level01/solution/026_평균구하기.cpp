/* 평균구하기 */ 
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double total_sum = 0;
    for (vector<int>::iterator iter = arr.begin(); iter != arr.end(); ++iter) {
        total_sum += *iter;
    }
    answer = total_sum / arr.size();
    return answer;
}