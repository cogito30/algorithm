// 문자열 묶기
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    map<int, int> map;
    for (int i = 0; i < strArr.size(); ++i) {
        map[strArr[i].length()]++;
    }
    
    int max_val = 0;
    for (auto& p: map) {
        if (max_val < p.second) {
            max_val = p.second;
        }
    }
    answer = max_val;
    return answer;
}