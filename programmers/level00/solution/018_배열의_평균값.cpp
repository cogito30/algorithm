/*  */ 
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double total_sum = 0.0;
    for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
        total_sum += *iter;
    }
    
    answer = total_sum / numbers.size();
    
    return answer;
}