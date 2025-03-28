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

    std::cout << "object p_origin's private var : " <<  p_origin.getVar() << std::endl;
    std::cout << "object p_copy's private var : " <<  p_copy.getVar() << std::endl;

    return 0;
}