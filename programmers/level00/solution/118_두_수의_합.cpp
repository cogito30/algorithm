// 두 수의 합
#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    vector<string> num_list;
    int a_idx = a.length() - 1;
    int b_idx = b.length() - 1;
    int carry = 0;
    int num = 0;
    while (true) {
        num = (a[a_idx] - '0') + (b[b_idx] - '0') + carry;
        carry = num / 10;
        num_list.push_back(to_string(num % 10));
        a_idx--;
        b_idx--;
        if (a_idx < 0 || b_idx < 0) {
            break;
        }
    }
    while (a_idx >= 0) {
        num = (a[a_idx] - '0') + carry;
        carry = num / 10;
        num_list.push_back(to_string(num % 10));
        a_idx--;
    }
    while (b_idx >= 0) {
        num = (b[b_idx] - '0') + carry;
        carry = num / 10;
        num_list.push_back(to_string(num % 10));
        b_idx--;
    }
    if (carry == 1) {
        num_list.push_back(to_string(carry));
    }
    for (int i = num_list.size() - 1; i >= 0; --i) {
        answer += num_list[i];
    }
    return answer;
}