#include <iostream>

class P {
    private:

        static int Pstatic;
        int count;
        int p_var;
    
    public:
        P() {};
        P(int _init) {
            p_var = _init;
        };
        P(const P& copy){
            count = copy.count;
            p_var = copy.p_var;
        };

        int getVar() const {
            return p_var;
        };

        P& add(int a) { // 나 자신을 반환 직접 반환 (P&로 복사본이 아닌 그 자체를 반환)
            p_var = p_var + a;
            std::cout << "p_var" << p_var << std::endl;
            return *this; // 위 연산이 완료된 이 객체 자신
        }
        ~P() { };

    
};

class C : public P {
    private:
        int c_count;
        int c_var;
    public:
        C() { };
        C(int _init) {
            c_var = _init;
        }
        ~C() { };

};

int main (){
    P p_origin(10);
    P p_copy(p_origin);

    // std::cout << "object p_origin's private var : " <<  p_origin.getVar() << std::endl;
    // std::cout << "object p_copy's private var : " <<  p_copy.getVar() << std::endl;

    // 함수 체이닝
    std::cout << p_origin.add(1).add(1).add(1).getVar() << std::endl; // 10 +1 +1 +1 == 13

    return 0;
}