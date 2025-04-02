#include <iostream>
#include <string>

using namespace std;

template <class T, class Y>
class MyPackage {
    private:
        T my_val_T;
        Y my_val_Y;
    public:
        MyPackage(T t, Y y) : my_val_T(t), my_val_Y(y)  { };
        void my_print() {
            cout << "first arg : " << my_val_T << ",  sencond arg : " << my_val_Y << endl;
        }
};

int main() {

    MyPackage<int, string> myPackage(3, "hello");
    myPackage.my_print();
    return 0;
}