// 수열과 구간 쿼리 2
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int s, e, k;
    for (int i = 0; i < queries.size(); ++i) {
        s = queries[i][0];
        e = queries[i][1];
        k = queries[i][2];
        vector<int> sub_vec(arr.begin() + s, arr.begin() + e + 1);
        sort(sub_vec.begin(), sub_vec.end());
        for (int j = 0; j < sub_vec.size(); ++j) {
            if (sub_vec[j] > k) {
                answer.push_back(sub_vec[j]);
                break;
            } else if (j == sub_vec.size() - 1) {
                answer.push_back(-1);
            }
        }
    }
    return answer;
}