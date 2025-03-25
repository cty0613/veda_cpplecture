#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float val_float = 3.141592f;
    double val_double = 3.14159265358987;

    cout << "float : " << sizeof(float) << " bytes" << endl;
    cout << "float value : "<< val_float << endl;
    cout << "float value : "<< setprecision(numeric_limits<float>::digits10+1) << val_float << endl;
    cout << "double : " << sizeof(double) << " bytes" << endl;
    cout << "double value : "<< val_double << endl;
    cout << "double value : "<< setprecision(numeric_limits<double>::digits10+1) << val_double << endl;
    
    return 0;
}