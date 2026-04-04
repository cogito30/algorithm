/* 폰켓몬 */
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int half_num = nums.size() / 2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    int nums_len = nums.size();
    
    if (half_num <= nums_len) {
        answer = half_num;
    } else {
        answer = nums_len;
    }
    
    return answer;
}