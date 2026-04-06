/* 부족한 금액 계산하기 */
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total_cnt = 0;
    for (int i = 1; i <= count; ++i) {
        total_cnt += i;
    }

    answer = price * total_cnt - money;
    
    if (answer < 0) {
        answer = 0;
    }
    return answer;
}