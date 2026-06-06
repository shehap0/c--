#include <iostream>
using namespace std;

int main(){
    float num_interval;
    cin >> num_interval;

    if (num_interval < 0)
    {
        cout << "Out of Intervals";
        return 0;
    }
    if (num_interval >= 0 and num_interval <= 25)
    {
        cout << "Interval [0,25]";
        return 0;
    }
    if (num_interval > 25 and num_interval <=50)
    {
        cout << "Interval (25,50]";
        return 0;
    }
    if (num_interval > 50 and num_interval <= 75)
    {
        cout << "Interval (50,75]";
        return 0;
    }
    if (num_interval > 75 and num_interval <=100)
    {
        cout << "Interval (75,100]";
        return 0;
    }
    if (num_interval > 100)
    {
        cout << "Out of Intervals";
        return 0;
    }
    
    
    

    return 0;
}