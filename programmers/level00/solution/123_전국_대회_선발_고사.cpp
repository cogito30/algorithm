// 전국 대회 선발 고사
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int, int>> rank_index;
    for (int i = 0 ; i < rank.size(); ++i) {
        if (attendance[i]) {
            rank_index.push_back({rank[i], i});    
        }
    }
    sort(rank_index.begin(), rank_index.end());
    for (int i = 0; i < 3; ++i) {
        answer *= 100;
        answer += rank_index[i].second;
    }
    return answer;
}