// 쵀대공약수와 최소공배수
#include <string>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
    int tmp = a;
    if (a < b) {
        a = b;
        b = tmp;
    }
    return;
}

int lcm(int a, int b) {
    if (a < b) swap(a, b);
    int tmp = 0;
    while (b > 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int lcm_res = lcm(n, m);
    int gcd_res = n * m / lcm_res;
    answer.push_back(lcm_res);
    answer.push_back(gcd_res);
    return answer;
}