#include <iostream>

class Parent {
    private:
        int pval;

    public :
        Parent() : pval(100){};
        Parent(int _i) : pval(_i){}
        int getValue() { return pval;} ;
        void sayHello() { std::cout << "Hello!" << std::endl;}
        Parent& operator+( const Parent &operand ) {
            Parent temp;
            temp.pval = pval + operand.pval;
            return temp;
        }

        Parent& operator=( const Parent &operand ) {
            pval = operand.pval;
            return *this;
        }
 };

class Child : public Parent {
    private:
        int cval;

    public:
        Child() : cval(300){}
        int getValue() { return cval; }
        
        
};


int main () {

    Parent c1(1);
    Parent c2(2);

    Parent c3;

    c3 = c1 + c2;
    // Error! 이러한 피연산자와 일치하는 "+" 연산자가 없습니다.
    // 연산자 오버로딩 후 : 
    // c3 = c1.operator+(c2)

    // std::cout << c3 << std::endl;
    // 이러한 피연산자와 일치하는 "<<" 연산자가 없습니다.
    
}