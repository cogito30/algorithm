/* 모의고사 */ 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> first_student = {1,2,3,4,5};
    vector<int> second_student = {2,1,2,3,2,4,2,5};
    vector<int> third_student = {3,3,1,1,2,2,4,4,5,5};
    vector<int> scores = {0, 0, 0};
    for (int i = 0; i < answers.size(); ++i) {
        if (answers[i] == first_student[i % 5]) {
            scores[0]++;
        }
        if (answers[i] == second_student[i % 8]) {
            scores[1]++;
        }
        if (answers[i] == third_student[i % 10]) {
            scores[2]++;
        }    
    }
    
    int max_score = *max_element(scores.begin(), scores.end());
    
    for (int i = 0; i < 3; ++i) {
        if (max_score == scores[i]) {
            answer.push_back(i + 1);
        }
    }
    
    
    return answer;
}