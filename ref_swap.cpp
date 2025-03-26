#include <iostream>

void swap(int x, int y); // 적절하지 않은 함수
void swap_ptr(int* x, int* y); // 포인터를 이용한 함수
void swap_ref(int& x, int& y); 
// 참조자를 이용한 함수 => 원본의 별명을 전달받음 => 변수 원본에 접근하여 수정!

int main() {

    return 0;
}