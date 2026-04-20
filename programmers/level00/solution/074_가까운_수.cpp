// 가까운 수
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int diff = 0;
    int min_diff = n;
    for (int i = 0; i < array.size(); ++i) {
        diff = abs(n - array[i]);
        if (diff < min_diff) {
            min_diff = diff;
            answer = array[i];
        } else if (diff == min_diff) {
            if (answer > array[i]) {
                answer = array[i];
            }
        }
    }
    return answer;
}