/* 정수 내림차순으로 배치하기 */ 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> num_list;
    while (n > 0) {
        num_list.push_back(n % 10);
        n /= 10;
    }
    
    sort(num_list.begin(), num_list.end(), greater<int>());
    
    for (vector<int>::iterator iter = num_list.begin(); iter != num_list.end(); ++iter) {
        answer *= 10;
        answer += *iter;
    }
    
    return answer;
}