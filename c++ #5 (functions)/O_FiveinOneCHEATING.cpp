#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int getMaxDivisors(int arr[], int size) {
    int maxDivisors = 0;
    int maxDivisorNum = 0;
    for (int i = 0; i < size; i++) {
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisors || (divisors == maxDivisors && arr[i] > maxDivisorNum)) {
            maxDivisors = divisors;
            maxDivisorNum = arr[i];
        }
    }
    return maxDivisorNum;
}

int main(){
    int size; cin>>size;
    int arr[size];
    // get array
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    // MAXIMUM & minimun
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min){min=arr[i];}
        if(arr[i]>max){max=arr[i];}
    }
    cout<<"The maximum number : "<<max<<"\n";

    cout<<"The minimum number : "<<min<<"\n";

    
    cout << "The number of prime numbers : " << countPrimes(arr, size)<<"\n";

    // palindrome
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    cout << "The number of palindrome numbers : "<<count<<"\n";

    cout << "The number that has the maximum number of divisors : " << getMaxDivisors(arr, size);


    return 0;
}