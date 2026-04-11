// 문자 리스트를 문장려로 변환하기
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for (int i = 0; i < arr.size(); ++i) {
        answer += arr[i];
    }
    return answer;
}