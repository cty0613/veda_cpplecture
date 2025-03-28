#include <iostream>

class Parent {
    private:
        int parent_var;

    public:
        Parent() { std::cout << "void constructor of parent" << std::endl; };
        Parent(int _i) : parent_var(_i) { std::cout << "int constructor of parent" << std::endl; }; // Overloading
        ~Parent() {std::cout << "destructor of parent" << std::endl;}
        int getParentVar() const { return parent_var; }



};

class Child : public Parent{  
    private:
        int child_var;

    public:
        Child(int _i) :  // Parent의 void 생성자 호출
            child_var(_i) { 
                std::cout << "int constructor of child" << std::endl; 
            };

        Child(int _i, int _o) : // Parent의 int 생성자 호출
            child_var(_i), 
            Parent(_o) { 
                std::cout << "parent int call constructor of child" << std::endl;
            }

        ~Child() { std::cout << "destructor of child" << std::endl; }
        int getChildVar() const { return child_var; }

};


int main() {
    Child(2, 3);
    Child(2);
    return 0;
}