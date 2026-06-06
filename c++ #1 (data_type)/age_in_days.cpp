#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int age_in_days,years,months,days,rest_of_days;
    cin >> age_in_days;

    years = age_in_days/365;
    floor(years);

    if (years >= 1)
    {
        rest_of_days = age_in_days-(years*365);
        months = rest_of_days/30;
        floor(months);

        if (months >= 1)
        {
            days = rest_of_days - (months*30);
            floor(days);
        }else if(months==0){
            days=rest_of_days;
        }
    }else if(years == 0){

        months=age_in_days/30;
        floor(months);
        rest_of_days = age_in_days-(months*30);

        if (months >= 1)
        {
            days = rest_of_days;
            
        }else if(months==0){
            days = age_in_days;
        }
    }
    
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}