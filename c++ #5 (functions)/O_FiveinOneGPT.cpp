#include <iostream>
#include <algorithm>
using namespace std;

// Function to get the maximum number in the array
int getMax(int arr[], int N) {
    int maxNum = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

// Function to get the minimum number in the array
int getMin(int arr[], int N) {
    int minNum = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }
    return minNum;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to count prime numbers in the array
int countPrimes(int arr[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// Function to count palindrome numbers in the array
int countPalindromes(int arr[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    return count;
}

// Function to get the number of divisors of a given number
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

// Function to get the number with the maximum number of divisors
int getMaxDivisors(int arr[], int N) {
    int maxDivisors = 0;
    int maxDivisorNum = 0;
    for (int i = 0; i < N; i++) {
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisors || (divisors == maxDivisors && arr[i] > maxDivisorNum)) {
            maxDivisors = divisors;
            maxDivisorNum = arr[i];
        }
    }
    return maxDivisorNum;
}

int main() {
    int N;
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "The maximum number : " << getMax(arr, N) << endl;
    cout << "The minimum number : " << getMin(arr, N) << endl;
    cout << "The number of prime numbers : " << countPrimes(arr, N) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(arr, N) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxDivisors(arr, N) << endl;

    return 0;
}
