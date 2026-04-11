// 수열과 구간 쿼리 3
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int tmp = 0;
    for (int i = 0; i < queries.size(); ++i) {
        tmp = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]]; 
        arr[queries[i][1]] = tmp;
    }
    answer = arr;
    return answer;
}