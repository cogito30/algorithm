// 둘만의 암호
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool check_alpha_in_list(char alpha, string skip) {
    for (int i = 0; i < skip.size(); ++i) {
        if (skip[i] == alpha) {
            return true;
        }
    }
    return false;
}

char change_alpha(char alpha, vector<char> alpha_list, int index) {
    int pos = find(alpha_list.begin(), alpha_list.end(), alpha) - alpha_list.begin();
    int new_pos = (pos + index) % alpha_list.size();
    char ch = alpha_list[new_pos];
    return ch;
}

string solution(string s, string skip, int index) {
    string answer = "";
    vector<char> alpha_list;
    
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (!check_alpha_in_list(ch, skip)) {
            alpha_list.push_back(ch);    
        }
    }
    
    for (int i = 0; i < s.size(); ++i) {
        answer += change_alpha(s[i], alpha_list, index);
    }
    
    return answer;
}