#include <iostream>

using namespace std;

int fibo(int n);
int main() {

    int size, gap;

    cout << "배열의 전체 크기를 입력하세요" << endl;
    cin >> size;
    cout << "배열의 간격을 입력하세요" << endl;
    cin >> gap;

    int* array = new int[size];

    for (int i = 0; i < size; i++) {
        array[i] = fibo(i);
    }

    for (int i = 0; i < size; i+=gap) {
        cout << "fibo[" << i << "] = " << array[i] << endl;
    }
    
    
    delete[] array;

    return 0;
}

int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}