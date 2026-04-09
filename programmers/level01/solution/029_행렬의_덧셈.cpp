/* 행렬의 덧셈 */ 
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for (int row = 0; row < arr1.size(); ++row) {
        vector<int> tmp_row;
        for (int col = 0; col < arr1.at(0).size(); ++col) {
            tmp_row.push_back(arr1.at(row).at(col) + arr2.at(row).at(col));
        }
        answer.push_back(tmp_row);
    }
    
    return answer;
}