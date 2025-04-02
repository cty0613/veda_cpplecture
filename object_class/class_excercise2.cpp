#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
        int fuel;
        int drive_cost;
        int meter;
        string name;

    public: 
        Car(string _name, int _fuel, int _drive_cost);
        ~Car();
        int drive(int accel);
        int refuel(int refuel_amount);
        int getFuel() const;
        int getMeter() const;
      
};

Car::Car(string _name, int _fuel, int _drive_cost){
    fuel = _fuel;
    drive_cost = _drive_cost;
    name = _name;
    meter = 0;
    cout << "Car ["<< _name << "]" <<  " is created." << endl;
    cout << "    >>  init fuel : " << fuel << endl;
    cout << "    >>  drive cost : " << drive_cost << endl;
    cout << endl;
}

Car::~Car(){
    cout << "object Car has destructed." << endl;
}

int Car::drive(int accel) {
    fuel -= accel*drive_cost;
    int ahead = accel*5;
    meter = meter + ahead;
    cout << "drive " << ahead << "km" << endl;
    cout << "meter " << getMeter() << "km" << endl;
    return ahead;
}

int Car::refuel(int refuel_amount) {
    fuel = fuel + refuel_amount;
    cout << "refuel " << refuel_amount << "L" << endl;
    cout << "fuel remained : " << getFuel() << endl;
    return fuel;
}

int Car::getFuel() const {
    return fuel;
}

int Car::getMeter() const {
    return meter;
}

int main(){
    string car_name;
    int init_fuel;
    int init_di; 

    cout << "Create New Car ..." << endl;
    cout << "Car Name? : ";
    cin >> car_name;

    cout << "initial Fuel? : ";
    cin >> init_fuel;
    
    cout << "Drive Cost? : ";
    cin >> init_di;

    Car* myCar = new Car(car_name, init_fuel, init_di);

    while(1) {
        int operation;
    
        cout << "1 : drive / 2 : refuel / 3 : view meter / 4 : exit" << endl;
        cout << "-------------------------" << endl;
        cout << "Select Operation : ";
        cin >> operation;

        if (operation == 1) {
            int user_accel;
            cout << "Accel Amount? : ";
            cin >> user_accel;
            myCar->drive(user_accel);
            
        } else if (operation == 2) {
            int user_refuel;
            cout << "Refuel Amount? : ";
            cin >> user_refuel;
            myCar->refuel(user_refuel);

        } else if (operation == 3) {
            cout << "meter : " << myCar->getMeter() << endl;
        } else if (operation == 4){
            break;
        }
    }
    

    delete myCar;

}