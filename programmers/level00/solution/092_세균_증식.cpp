// 세균 증식
#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    int square_num = 2;
    for (int i = 1; i < t; ++i) {
        square_num *= 2;
    }
    answer = n * square_num;
    return answer;
}