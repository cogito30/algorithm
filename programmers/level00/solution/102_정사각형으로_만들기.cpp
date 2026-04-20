// 정사각형으로 만들기
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer(arr);
    int row_len = arr.size();
    int col_len = arr[0].size();
    if (row_len > col_len) {
        for (int i = 0; i < row_len; ++i) {
            for (int j = 0; j < row_len - col_len; ++j) {
                answer[i].push_back(0);
            }
        }
    } else {
        for (int i = 0; i < col_len - row_len; ++i) {
            vector<int> tmp(col_len, 0);
            answer.push_back(tmp);
        }
    }
    return answer;
}