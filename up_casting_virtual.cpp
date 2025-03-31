#include <iostream>

using namespace std;

class X {
    public:
        X() {cout << "X-constructor" << endl;}
        virtual void func(void) { cout << "X func" << endl;} // 야 여기말고 자식놈들 메서드 찾아봐
        virtual void func(void) = 0; // 자식놈들이 반드시 구현해줘야함, 무조건 override 필요, 함수작성도 여기서 안함

        ~X() { cout << "X-destrtucted" << endl;}

};

class XX : public X {
    public:
        XX() { cout << "XX-constructor" << endl;}
        void func(void) override { cout << "XX func" << endl;} // 부모의 메서드를 '오버라이드'
        // void func(void) final {cout << "XX's final func" << endl;} // 이 아래도 더이상 없다! final!

        ~XX() { cout << "XX-destrtucted" << endl;}

};

int main() {
    // XX *pxx = new XX(); // OK
    X *px = new XX(); // OK, 부모 객체인 X 포인터가 자식인 XX 객체를 받음 (UPCASTING)
    // XX *Wpxx = new X(); // XX, No!
    // [E] "X *" 형식의 값을 사용하여 "XX *" 형식의 엔터티를 초기화할 수 없습니다.

    // pxx->func();
    /*
        X-constructor
        XX-constructor
        XX func
        XX-destrtucted
        X-destrtucted
    */

    px->func();
    /*
        X-constructor
        XX-constructor
        X func // 담겨진 포인터 객체를 따라감 (=X의 func())
        X-destrtucted // 담겨진 포인터 객체를 따라감 (X의 소멸자만 수행)
    */

    //  -> 부모 클래스 X는 자식 클래스인 XX를 담아서 처리할 수 있음! (다형성 구현)
    //  -> virtual 키워드로 부모가 자식 메서드를 처리

    /* 
        X-constructor
        XX-constructor
        XX func
    */


    // delete pxx;
    // delete px;
    return 0;
}