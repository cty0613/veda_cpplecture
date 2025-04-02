#include <iostream>
#include <string>
using namespace std;

template <class T>
class X{
    private:
        T *pobj; // T타입 포인터를 담는 변수
    public:
        X() : pobj(nullptr) { }; // 초기화 때 널포인터로 초기화
        void setObj( T *obj_ptr ) { pobj = obj_ptr; }; // T타입 포인터를 설정하는 메서드
        void Xprint() { // 설정된 포인터의 first 접근 + 출력
            cout << pobj->first << endl;
            // pobj의 first 멤버를 출력 (private 접근이므로 MyData에서 friend 허용 필요)
        }
};

template <class T = int>
class MyData {
    private:
        T first;
    public:
        MyData(T first) : first(first) { }
        friend X<MyData>;
        // X<MyData> 클래스가 first에 접근 가능하도록 friend 개방
};

int main() {

    // int 타입 MyData를 사용하는 (=MyData<>) X 객체 생성
    X< MyData<> > X_int_MyData;
    // string 타입 MyData를 사용하는(=MyData<string>) X 객체 생성
    X< MyData<string> > X_string_MyData;

    // int 타입 MyData 객체 생성
    MyData<> MyData_default(5);
    // string 타입 MyData 객체 생성
    MyData<string> MyData_string("hello");

    // X 객체에 MyData<> 객체 포인터 설정  
    X_int_MyData.setObj(&MyData_default);
    // X 객체에 MyData<string> 객체 포인터 설정
    X_string_MyData.setObj(&MyData_string);

    // MyData<int>의 first 값 출력
    X_int_MyData.Xprint();
    // MyData<string>의 first 값 출력
    X_string_MyData.Xprint();
    return 0;
}