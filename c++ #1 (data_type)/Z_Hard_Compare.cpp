#include <iostream>
#include <cmath> // for log
#include <iomanip> // for fixed and setprecision

int main() {
    double A, B, C, D;
    std::cin >> A >> B >> C >> D;

    double left = B * std::log(A);
    double right = D * std::log(C);

    if (left > right) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
