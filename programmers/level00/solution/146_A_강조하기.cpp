// A 강조하기
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < myString.length(); ++i) {
        if (myString[i] == 'a') {
            answer += toupper(myString[i]);
        } else {
            answer += tolower(myString[i]);
        }
    }
    return answer;
}