// OX퀴즈
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (int j = 0; j < quiz.size(); ++j) {
        stringstream ss;
        ss.str(quiz[j]);
        string str;
        vector<string> string_list;

        while (ss >> str) {
            string_list.push_back(str);
        }

        int eval = 0;
        int sign = 1;
        for (int i = 0; i < string_list.size(); ++i) {
            if (string_list[i] == "+") {
                sign = 1;
            } else if (string_list[i] == "-") {
                sign = -1;
            } else if (string_list[i] == "=") {
                if (eval == stoi(string_list[i+1])) {
                    answer.push_back("O");
                } else {
                    answer.push_back("X");
                }
                break;
            } else {
                eval += sign * stoi(string_list[i]);
                sign = 1;
            }
        }        
    }
    return answer;
}