#include <iostream>

// void swap(int x, int y); // 적절하지 않은 함수
void swap_ptr(int* x, int* y); // 포인터를 이용한 함수
void swap_ref(int& x, int& y); // 원본의 별명(레퍼런스)을 전달받음 => 원본에 접근하여 수정!

int main() {

    int a = 10;
    int b = 20;

    std::cout << "Before swap" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap_ref(a, b);
//  swap_ptr(&a, &b);

    std::cout << std::endl;
    std::cout << "After swap" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}

void swap_ref(int &x, int &y){
    int t = x;
    x = y;
    y = t;
}

void swap_ptr(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}