#include <iostream>
#include <iomanip>
#include <cmath> // For std::floor
using namespace std;

int main() {
    // Read the input number as a double
    double N;
    cin >> N;
    
    // Find the integer part by truncating the decimal portion
    int integer_part = floor(N); // or use int(N) if you prefer

    // Find the decimal part by subtracting the integer part from N
    double decimal_part = N - integer_part;
    
    // Check if the decimal part is zero
    if (decimal_part == 0) {
        // If the decimal part is zero, it is an integer
        cout << "int " << integer_part << endl;
    } else {
        // If there's a decimal part, it's a float
        cout << "float " << integer_part << " " << fixed << setprecision(3) << decimal_part << endl;
    }
    
    return 0;
}
