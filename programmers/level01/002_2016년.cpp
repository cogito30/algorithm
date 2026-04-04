/* 2016년 */ 
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    int total_day = 5;
    vector<int> month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<std::string> day = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    for (int i = 0; i < a; ++i) {
        total_day += month.at(i);
    }
    
    total_day += b;
    total_day -= 1;
    answer = day.at(total_day % 7);

    return answer;
}