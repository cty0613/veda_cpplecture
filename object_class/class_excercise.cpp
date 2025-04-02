#include <iostream>

using namespace std;

class Car {
    private: 
        int fuel;
        int drive_cost;

    public:
        Car(int _fuel, int _drive_cost): fuel(_fuel), drive_cost(_drive_cost) { // initialization list
            cout << "[Car 객체 생성 완료]" << endl;
            cout << "  >>  연료량 : " << fuel << endl;
            cout << "  >>  연비 : " << drive_cost << endl;
        };  // 생성자 : Constructor

        ~Car(){
            cout << "[Car 객체 파괴 완료]" << endl;
        };  // 파괴자 : Destructor

        int drive(int accel) {
            fuel -= accel*10;
            
            return accel*drive_cost; // 이동한 거리
        };

        int getFuel() const { // readonly, 멤버 변경 불가 선언!
            return fuel;
        };

        int refuel(int refuel_amount) {
            fuel = fuel + refuel_amount;
            return fuel;
        }

};


int main() {

    #if 0
    Car myCar(100, 5);   // @stack

    cout << endl;
    cout << "myCar Moved : " << myCar.drive(2) << "km" << endl;
    cout << "myCar's remained fuel : " << myCar.getFuel() << "L" << endl;
    
    int refuel;
    cout << "input refuel amount : ";
    cin >> refuel;

    myCar.refuel(refuel);
    cout << "myCar refueled... " << endl;
    cout << "myCar's remained fuel : " << myCar.getFuel() << "L" << endl;
    #endif

    Car* myCar = new Car(100, 5);   // @heap, dynamic

    cout << endl;
    cout << "myCar Moved : " << myCar->drive(2) << "km" << endl;
    cout << "myCar's remained fuel : " << myCar->getFuel() << "L" << endl;
    
    int refuel;
    cout << "input refuel amount : ";
    cin >> refuel;

    myCar->refuel(refuel);
    cout << "myCar refueled... " << endl;
    cout << "myCar's remained fuel : " << myCar->getFuel() << "L" << endl;

    delete myCar;
    

    return 0;
}