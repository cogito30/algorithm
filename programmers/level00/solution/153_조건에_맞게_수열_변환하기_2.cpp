// 조건에 맞게 수열 변화하기 2
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> arr1(arr);
    vector<int> arr2 = arr1;
    while (true) {
        answer++;
        arr1 = arr2;
        for (int i = 0; i < arr.size(); ++i) {
            if ((arr2[i] >= 50) && (arr2[i] % 2 == 0)) {
                arr2[i] /= 2;
            } else if ((arr2[i] < 50) && (arr2[i] % 2 == 1)) {
                arr2[i] = arr2[i] * 2 + 1;
            }
        }
        
        // x+1이므로 -1을 해줌         
        if (arr1 == arr2) {
            answer--;
            break;
        }
    }
    
    return answer;
}