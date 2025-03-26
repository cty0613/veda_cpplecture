#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
    float height;
    float weight;
};

void check_age(Person* _persons, int _count) { // 포인터를 매개변수로! < 배열명 자체는 애초에 주소임
    for (int i = 0; i < _count; i++) {
        if (_persons[i].age >25){
            cout << "Name: " << _persons[i].name << endl;
            cout << "Age: " << _persons[i].age << endl;
            cout << "Height: " << _persons[i].height << endl;
            cout << "Weight: " << _persons[i].weight << endl;
            cout << endl;
        } else {
            cout << "Name: " << _persons[i].name << " is not over 25" << endl;
        }
    }
}

int main() {

    Person persons[3] = {
        {"Alice", 25, 160.0f, 50.0f},
        {"Bob", 30, 180.0f, 70.0f},
        {"Charlie", 35, 170.0f, 60.0f}
    };

    check_age(persons, 3);

    return 0;
}