#include <iostream>
using namespace std;

// Function to get the array elements
void get_array(int arr[500][500], int n) {
    for(int i = 0; i < n; i++) {
        for(int q = 0; q < n; q++) {
            cin >> arr[i][q];
        }
    }
}

// Function to swap rows
void swap_rows(int arr[500][500], int n, int x, int y) {
    for(int i = 0; i < n; i++) {
        int temp = arr[x][i];
        arr[x][i] = arr[y][i];
        arr[y][i] = temp;
    }
}

// Function to swap columns (if needed)
void swap_columns(int arr[500][500], int n, int x, int y) {
    for(int i = 0; i < n; i++) {
        int temp = arr[i][x];
        arr[i][x] = arr[i][y];
        arr[i][y] = temp;
    }
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    // Declare the array with a fixed size
    int arr[500][500];

    // Get the array elements
    get_array(arr, n);

    // Swap the specified rows
    swap_rows(arr, n, x, y);
    
    // Optionally swap the specified columns
    // swap_columns(arr, n, x, y);

    return 0;
}
