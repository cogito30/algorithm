// 1차: 비밀지도
#include <string>
#include <vector>


using namespace std;

string dec_to_bin(int num, int len) {
    vector<string> str;
    string result;
    int str_len = 0;
    while (num > 0) {
        if (num % 2 == 1) {
            str.push_back("#");
        } else {
            str.push_back(" ");
        }
        num /= 2;
    }
    
    str_len = str.size();
    
    for (int i = 0; i < len - str_len; ++i) {
        result += " ";
    }
    
    for (int i = str.size() - 1; i >= 0; --i) {
        result += str[i];
    }
    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string result1;
    string result2;
    string result3;
    for (int i = 0; i < arr1.size(); ++i) {
        result1 = dec_to_bin(arr1[i], n);
        result2 = dec_to_bin(arr2[i], n);
        result3 = "";
        for (int i = 0; i < n; ++i) {
            if (result1[i] == '#' || result2[i] == '#') {
                result3 += "#";
            } else {
                result3 += " ";
            }
        }
        answer.push_back(result3);
    }
    
    return answer;
}