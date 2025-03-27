#include <iostream>
#include <cassert> // assert를 사용하려면 필요

int divide(int a, int b) {
    assert(b != 0);  // 조건이 false면 종료됨
    return a / b;
}

int main() {
    int result = divide(10, 0);
    std::cout << "결과: " << result << std::endl;
    return 0;
}