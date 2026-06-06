#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string N;
    std::cin >> N;

    // Find the position of the decimal point
    size_t decimalPos = N.find('.');

    if (decimalPos == std::string::npos) {
        // No decimal point found, it is an integer
        std::cout << "int " << N << std::endl;
    } else {
        // Split the number into integer part and decimal part
        std::string integerPart = N.substr(0, decimalPos);
        std::string decimalPart = N.substr(decimalPos + 1);

        // Check if the decimal part is all zeros
        bool isInteger = true;
        for (char c : decimalPart) {
            if (c != '0') {
                isInteger = false;
                break;
            }
        }

        if (isInteger) {
            // If the decimal part is all zeros, treat it as an integer
            std::cout << "int " << integerPart << std::endl;
        } else {
            // Otherwise, it is a float
            std::cout << "float " << integerPart << " ." << decimalPart << std::endl;
        }
    }

    return 0;
}
