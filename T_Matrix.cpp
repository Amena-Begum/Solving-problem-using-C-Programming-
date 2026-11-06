#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    long long primaryDiagonalSum = 0;
    long long secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
    }

    for (int i = 0; i < n; i++) {
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    long long absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum); // corrected here
    cout << absoluteDifference << endl;

    return 0;
}