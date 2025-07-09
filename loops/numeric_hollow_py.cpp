#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of rows

    for(int row = 0; row < n; row++) {
        // Print leading spaces
        for(int space = 0; space < n - row - 1; space++) {
            cout << " ";
        }

        // Print numbers with hollow logic
        for(int col = 0; col <= row; col++) {
            // First and last element in row or last row
            if(col == 0 || col == row || row == n - 1) {
                cout << col + 1;
            } else {
                cout << " ";
            }

            // Add space between elements
            if(col != row) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
