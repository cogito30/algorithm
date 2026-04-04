/* 예산 */ 
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(), d.end());
    
    for (vector<int>::iterator iter = d.begin(); iter != d.end(); ++iter) {
        budget -= *iter;
        
        if (budget < 0) {
            break;
        }
        answer++;
    }
    
    return answer;
}