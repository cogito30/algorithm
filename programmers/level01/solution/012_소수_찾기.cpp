// 소수 찾기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> primes(n+1, true);
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i <= n; ++i) {
        for (int j = 2; j * i <= n; ++j) {
            primes[i*j] = false;
        }
    }
    
    for (int i = 0; i <= n; ++i) {
        if (primes[i])
            answer++;
    }
    
    return answer;
}