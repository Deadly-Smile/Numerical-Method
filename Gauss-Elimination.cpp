//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> pairs;
typedef std::vector<int> VI;
typedef std::vector<pairs> VII;
//---------------------------Good luck---------------------------------//

void gaussianElimination(double **A, double *B, int n) {
    for (int k = 0; k < n-1; k++) {
        for (int i = k+1; i < n; i++) {
            double factor = A[i][k] / A[k][k];
            for (int j = k+1; j < n; j++) {
                A[i][j] = A[i][j] - factor * A[k][j];
            }
            B[i] = B[i] - factor * B[k];
        }
    }

    for (int k = n-1; k >= 0; k--) {
        for (int i = k-1; i >= 0; i--) {
            double factor = A[i][k] / A[k][k];
            for (int j = k; j >= 0; j--) {
                A[i][j] = A[i][j] - factor * A[k][j];
            }
            B[i] = B[i] - factor * B[k];
        }
    }

    for (int i = 0; i < n; i++) {
        B[i] = B[i] / A[i][i];
        A[i][i] = 1;
        for (int j = i+1; j < n; j++) {
            A[i][j] = 0;
        }
    }
}

int main() {
    int n = 3;
    double **A = new double*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new double[n];
    }

    double *B = new double[n];

    A[0][0] = 2; A[0][1] = 1; A[0][2] = -1; B[0] = 8;
    A[1][0] = -3; A[1][1] = -1; A[1][2] = 2; B[1] = -11;
    A[2][0] = -2; A[2][1] = 1; A[2][2] = 2; B[2] = -3;

    gaussianElimination(A, B, n);

    for (int i = 0; i < n; i++) {
        std::cout << "x[" << i << "] = " << B[i] << std::endl;
    }

    return 0;
}
