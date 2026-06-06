#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Read the input number as a double
    double N;
    cin >> N;
    
    // Extract the integer part of N
    int integer_part = static_cast<int>(N);
    
    // Extract the decimal part of N
    double decimal_part = N - integer_part;
    
    if (decimal_part == 0) {
        // If the decimal part is zero, it is an integer
        cout << "int " << integer_part << endl;
    } else {
        // If there's a decimal part, it's a float
        cout << "float " << integer_part << " " << fixed << setprecision(3) << decimal_part << endl;
    }
    
    return 0;
}
