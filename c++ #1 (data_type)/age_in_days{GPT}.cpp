#include <iostream>
using namespace std;

int main() {
    int age_in_days, years, months, days, rest_of_days;
    cin >> age_in_days;

    years = age_in_days / 365;
    rest_of_days = age_in_days % 365;

    months = rest_of_days / 30;
    days = rest_of_days % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
