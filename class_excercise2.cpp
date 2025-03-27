#include <iostream>

using namespace std;

class Car{
    private:
        int fuel;
        int drive_cost;
        int meter;

    public: 
        Car(int _fuel, int _drive_cost);
        ~Car();
        int drive(int accel);
        int refuel(int refuel_amount);
        int getFuel() const;
        int getMeter() const;
      
};

Car::Car(int _fuel, int _drive_cost){
    fuel = _fuel;
    drive_cost = _drive_cost;
    meter = 0;
    cout << "object Car has created." << endl;
    cout << "    >>  init fuel : " << fuel << endl;
    cout << "    >>  drive cost : " << drive_cost << endl;
}

Car::~Car(){
    cout << "object Car has destructed." << endl;
}

int Car::drive(int accel) {
    fuel -= accel*drive_cost;
    meter = meter + (accel*5);

    return accel*5;
}

int Car::refuel(int refuel_amount) {
    fuel = fuel + refuel_amount;
    return fuel;
}

int Car::getFuel() const {
    return fuel;
}

int Car::getMeter() const {
    return meter;
}




int main(){
    Car* myCar = new Car(100, 5);

    cout << endl;
    cout << "myCar Moved : " << myCar->drive(2) << "km" << endl;
    cout << "myCar's remained fuel : " << myCar->getFuel() << "L" << endl;
    
    int refuel;
    cout << "input refuel amount : ";
    cin >> refuel;

    myCar->refuel(refuel);
    cout << "myCar refueled... " << endl;
    cout << "myCar's remained fuel : " << myCar->getFuel() << "L" << endl;


    cout << "myCar's meter : " << myCar->getMeter() << "km" << endl;

    delete myCar;

}