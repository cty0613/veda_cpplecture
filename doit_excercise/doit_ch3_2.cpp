#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
};


void check_age(Person* _persons, int _count) { // 포인터를 매개변수로! < 배열명 자체는 애초에 주소임
    for (int i = 0; i < _count; i++) {
        if (_persons[i].age >25){
            cout << "Name: " << _persons[i].name << endl;
            cout << "Age: " << _persons[i].age << endl;
            cout << endl;
        } else {
            cout << "[!] " << _persons[i].name << " is not over 25" << endl << endl;
        }
    }
}

int main(){
    string name[10] = {"김서준", "이민준", "박도윤", "최시윤", "김지호", "박하준", "이지호", "현우진","한석원", "정승제"};
    int age[10] = {27, 23, 32, 17, 31, 21, 25, 34, 43, 33};
    
    int size;

    cout << "배열의 크기를 입력하세요" << endl;
    cin >> size;

    if (size < 1) { 
        size = 1;
        cout << "배열의 크기는 1보다 커야 합니다." << endl;
        cout << "배열의 크기를 1로 초기화 합니다." << endl; 
    } else if (size > 10) {
        size = 10;
        cout << "배열의 크기는 10보다 작아야 합니다." << endl;
        cout << "배열의 크기를 10으로 초기화 합니다." << endl; 
    }

    

    Person* persons = new Person[10];

    for (int i = 0; i < size; i++) {
        persons[i].name = name[i];
        persons[i].age = age[i];
    }

    check_age(persons, size);
    
    return 0;
}