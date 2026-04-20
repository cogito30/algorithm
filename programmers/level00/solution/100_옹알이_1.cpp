// 옹알이 (1)
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> words = {"aya", "ye", "woo", "ma"};
    int start = 0;
    for (int i = 0; i < babbling.size(); ++i) {
        start = 0;
        for (int k = 0; k < babbling[i].length(); ++k){
            for (int j = 0; j < words.size(); ++j) {
                if (babbling[i].substr(start, k - start + 1) == words[j]) {
                    start = k + 1;
                }
            }    
        }
        cout << start << "\n";
        if (start == babbling[i].size()) {
            answer++;
        }
    }
    return answer;
}