#include <iostream>

using namespace std;

template <class T>
T add(T x, T y) {
    cout << "by template function add" << endl;
    return (x+y);
};

template <class T, class Y>
T sub(T x, Y y) {  // 부분 특수화 템플릿
    cout << "by partial-specialization template function sub" << endl;
    return (x-y); 
};

template <>
double add(double x, double y) { // 사실상 오버로딩과 동일
    cout << "by specialization template function add" << endl;
    return (x+y);
}

int main() {

    int i(1), j(2);
    cout << add(i,j) << endl;

    double p(3.4), q(2.5);
    cout << add(p,q) << endl;

    cout << sub(3, 1) << endl;

    return 0;
}