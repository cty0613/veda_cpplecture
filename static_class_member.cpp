#include <iostream>

using namespace std;
class X {
    public:
        int mi;
        static int si;
        
        X() : mi(123){ };
        static void sfunc() { 
            // cout << "mi is : " << mi << endl; // mi는 정적할당이 이뤄지지 않음, 객체 생성 없이 부를수 없음
            cout << "si is : "<< si << endl;
        }
};

int X::si = 456;


int main() {
    cout << X::si << endl; // 객체 생성없이 사용가능
    X::sfunc();  // 객체 생성없이 사용가능

    return 0;
}