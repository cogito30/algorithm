/* K번째수 */ 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (vector<vector<int>>::iterator iter = commands.begin(); iter != commands.end(); ++iter) {
        vector<int> command = *iter;
        vector<int> tmp_arr;
        for (int i = command[0]; i <= command[1]; ++i) {
            tmp_arr.push_back(array.at(i-1));
        }
        
        sort(tmp_arr.begin(), tmp_arr.end());
        answer.push_back(tmp_arr.at(command[2]-1));

    }
    return answer;
}