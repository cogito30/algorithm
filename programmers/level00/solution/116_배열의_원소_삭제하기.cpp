// 배열의 원소 삭제하기
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    map<int, int> map;
    for (int i = 0; i < delete_list.size(); ++i) {
        map[delete_list[i]]++;
    }
    for (int i = 0; i < arr.size(); ++i) {
        if (map[arr[i]] <= 0)
            answer.push_back(arr[i]);
    }
    return answer;
}