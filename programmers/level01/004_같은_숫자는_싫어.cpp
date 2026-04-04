/* 같은 숫자는 싫어 */ 
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    vector<int>::iterator prev = arr.begin();
    answer.push_back(*prev);

    for (vector<int>::iterator iter = prev + 1; iter != arr.end(); ++iter, ++prev) {
        if (*prev != *iter) {
            answer.push_back(*iter);
        }
    }

    return answer;
}