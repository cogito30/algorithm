// 배열에서 문자열 대소문자로 변환하기
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i < strArr.size(); ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < strArr[i].length(); ++j) {
                strArr[i][j] = tolower(strArr[i][j]);
            }
            answer.push_back(strArr[i]);
        } else {
            for (int j = 0; j < strArr[i].length(); ++j) {
                strArr[i][j] = toupper(strArr[i][j]);
            }
            answer.push_back(strArr[i]);
        }
    }
    return answer;
}