#include <iostream>

int main() {
    int *my_array = new int[5];

    for (int i = 0; i <= 5; i++) {
        my_array[i] = i;
    }

    for (int i = 0; i <= 5; i++) {
        std::cout << my_array[i] << std::endl;
    }

    delete[] my_array;

    return 0;
}