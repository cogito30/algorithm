// 간단한 식 계산하기
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    string num = "";
    vector<string> num_list;
    for (int i = 0; i < binomial.length(); ++i) {
        if (binomial[i] == '+') {
            answer = stoi(binomial.substr(0,i-1)) + stoi(binomial.substr(i+1));
        } else if (binomial[i] == '-') {
            answer = stoi(binomial.substr(0,i-1)) - stoi(binomial.substr(i+1));
        } else if (binomial[i] == '*') {
            answer = stoi(binomial.substr(0,i-1)) * stoi(binomial.substr(i+1));
        }
    }
    return answer;
}