/* 직사각형 별찍기 */ 
#include <iostream>

using namespace std;

int main(void) {
    int n;
    int m;
    std::cin >> n >> m;
    
    for (int row = 0; row < m; ++row) {
        for (int col = 0; col < n; ++col) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}