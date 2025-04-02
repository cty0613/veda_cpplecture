#include <iostream>

using namespace std;

class Aircraft {
    private:
        int throttle;
        int altitude;
        int air_speed;
        int fuel;
        
    public:
        Aircraft() :throttle(0), altitude(0), air_speed(0), fuel(200) { cout << "aircraft created." << endl; }
        virtual ~Aircraft() { };
        virtual int takeoff() = 0;
        virtual int climb(int clmb_amount) = 0;
        virtual int cruise(int cruise_level) = 0;
        virtual int descend(int des_amount) = 0;
        virtual int land() = 0;

        int fuelOut(int amount) { 
            fuel = fuel - amount;
            cout << "Remaining Fuel Now : " << fuel << endl;
            return fuel;
        }

        int adjAlt(int FL){
            altitude = altitude + FL;
            cout << "Altitude Now : " << altitude << endl;
            return altitude;
        }

        int setAlt(int FL) {
            altitude = FL;
            cout << "Altitude Now : " << altitude << endl;
            return altitude;
        }

        int adjAirSpd(int knot) {
            air_speed = air_speed + knot;
            cout << "AirSpeed Now : " << air_speed << endl;
            return air_speed;
        }

        int setAirSpd(int speed) {
            air_speed = speed;
            cout << "AirSpeed Now : " << air_speed << endl;
            return air_speed;
        }

};

class FixedWing : public Aircraft {
    public:
        int takeoff() { 
            cout << " --- FixedWing Aircraft is now T.O. --- " << endl;
            fuelOut(5);
            adjAlt(5);
            adjAirSpd(100);
            return 0;
        }

        int climb(int clmb_amount) {
            cout << " --- FixedWing Aircraft is now CLB --- " << endl;
            fuelOut(10);
            adjAlt(clmb_amount);
            adjAirSpd(-20);
            return 0;
        }

        int cruise(int cruise_level) {
            cout << " --- FixedWing Aircraft is now CRZ --- " << endl;
            fuelOut(20);
            setAlt(cruise_level);
            adjAirSpd(50);
            return 0;
        }

        int descend(int des_amount) {
            cout << " --- FixedWing Aircraft is now DES --- " << endl;
            fuelOut(5);
            adjAlt(-des_amount);
            adjAirSpd(20);
            return 0;
        }

        int land() { 
            cout << " --- FixedWing Aircraft is now LAND --- " << endl;
            fuelOut(5);
            setAlt(0);
            setAirSpd(0);
            return 0;
        }
};

int main() {
    Aircraft *B737 = new FixedWing();

    B737->takeoff();

    B737->climb(10);
    B737->climb(10);

    B737->cruise(150);

    B737->descend(10);
    B737->descend(10);

    B737->land();


    delete B737;

    return 0;
}