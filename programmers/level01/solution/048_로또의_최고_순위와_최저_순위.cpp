// 로또의 최고 순위와 최저 순위
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero_cnt = 0;
    int cnt = 0;
    int high_rank, low_rank;
    for (int i = 0; i < lottos.size(); ++i) {
        if (lottos[i] == 0) {
            zero_cnt++;
            continue;
        }
        
        for (int j = 0; j < win_nums.size(); ++j) {
            if (lottos[i] == win_nums[j]) {
                cnt++;
                break;
            }
        }
    }
    
    high_rank = min(7 - cnt - zero_cnt, 6);
    low_rank = min(7 - cnt, 6);
    answer.push_back(high_rank);
    answer.push_back(low_rank);
    
    return answer;
}