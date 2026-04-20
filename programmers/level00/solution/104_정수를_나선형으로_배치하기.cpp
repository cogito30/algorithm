// 정수를 나선형으로 배치하기
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for (int i = 0; i < n; ++i) {
        answer.push_back(vector<int> (n, 0));
    }
    int num = 1;
    int start_row = 0, start_col = 0;
    int end_row = n, end_col = n;
    while (num <= n * n) {
        for (int i = start_col; i < end_col; ++i) {
            answer[start_row][i] = num;
            num++;
        }
        start_row++;
        for (int i = start_row; i < end_row; ++i) {
            answer[i][end_col-1] = num;
            num++;
        }
        end_col--;
        for (int i = end_col - 1; i >= start_col; --i) {
            answer[end_row-1][i] = num;
            num++;
        }
        end_row--;
        for (int i = end_row - 1; i >= start_row; --i) {
            answer[i][start_col] = num;
            num++;
        }
        start_col++;
    }
    return answer;
}