// 그림 확대
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string str = "";
    for (int i = 0; i < picture.size(); ++i) {
        str = "";
        for (int j = 0; j < picture[i].length(); ++j) {
            for (int l = 0; l < k; ++l) {
                str += picture[i][j];    
            }
        }
        for (int l = 0; l < k; ++l) {
            answer.push_back(str);
        }
    }
    return answer;
}