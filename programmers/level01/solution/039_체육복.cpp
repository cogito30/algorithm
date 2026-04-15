// 체육복
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n,1);
    for (int i = 0; i < reserve.size(); ++i) {
        students[reserve[i]-1]++;
    }

    for (int i = 0; i < lost.size(); ++i) {
        students[lost[i]-1]--;
    }

    for (int i = 0; i < n; ++i) {
        if (students[i] == 0) {
            if (students[i - 1] == 2 && i > 0) {
                students[i]++;
                students[i-1]--;
                answer++;
            } else if (students[i + 1] == 2 && i < n - 1) {
                students[i]++;
                students[i+1]--;
                answer++;
            }
        } else {
            answer++;
        }
    }
    
    return answer;
}