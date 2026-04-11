// 코드 처리하기
#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for (int i = 0; i < code.length(); ++i) {
        if (code[i] == '1') {
            mode = mode ? 0 : 1;
        } else if (mode == 0) {
            if (i % 2 == 0)
                answer += code[i];
        } else {
            if (i % 2 == 1)
                answer += code[i];
        }
    }
    if (answer == "") {
        answer = "EMPTY";
    }
    return answer;
}