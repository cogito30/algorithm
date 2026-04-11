// 추억 점수
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> name_yearning;
    for (int i = 0; i < name.size(); ++i) {
        name_yearning.insert({name[i], yearning[i]});
    }
    
    for (int i = 0; i < photo.size(); ++i) {
        int score = 0;
        for (int j = 0; j < photo[i].size(); ++j) {
            
            if (name_yearning.find(photo[i][j]) != name_yearning.end()) {
                score += name_yearning[photo[i][j]];
            }
        }
        answer.push_back(score);
    }
    return answer;
}