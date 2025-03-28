#include <iostream>


class Parent {
    private:
        int pval;

    public :
        Parent() : pval(100){};
        int getValue() { return pval;} ;
        void sayHello() { std::cout << "Hello!" << std::endl;}
};

class Child : public Parent {
    private:
        int cval;

    public:
        Child() : cval(300){}
        int getValue() { return cval; }
        
};

int main () {

    Parent *parent = new Parent();
    Child *child = new Child();
    std::cout << parent->getValue() << std::endl;
    std::cout << child->getValue() << std::endl;
    child->sayHello();


    delete parent;
    delete child;
    
}