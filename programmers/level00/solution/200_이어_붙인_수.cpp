// 이어 붙인 수
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd_str = "";
    string even_str = "";
    for (int i = 0; i < num_list.size(); ++i) {
        if (num_list[i] % 2 == 0) {
            even_str += to_string(num_list[i]);
        } else {
            odd_str += to_string(num_list[i]);
        }
    }
    answer = stoi(even_str) + stoi(odd_str);
    return answer;
}