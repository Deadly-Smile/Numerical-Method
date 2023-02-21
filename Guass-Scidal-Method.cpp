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

void gaussSeidel(double **A, double *B, double *X, int n, double tol, int maxiter) {
    int iter = 0;
    double error = tol + 1;
    while (error > tol && iter < maxiter) {
        error = 0;
        for (int i = 0; i < n; i++) {
            double sum = 0;
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    sum += A[i][j] * X[j];
                }
            }
            double xi_old = X[i];
            X[i] = (B[i] - sum) / A[i][i];
            error += fabs(X[i] - xi_old);
        }
        iter++;
    }
    if (iter >= maxiter) {
        cout << "Maximum number of iterations reached." << endl;
    } else {
        cout << "Solution found in " << iter << " iterations." << endl;
    }
}

int main() {
    int n = 3;
    double **A = new double*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new double[n];
    }

    double *B = new double[n];
    double *X = new double[n];

    A[0][0] = 4; A[0][1] = -1; A[0][2] = 0; B[0] = 3;
    A[1][0] = 1; A[1][1] = -3; A[1][2] = 1; B[1] = -5;
    A[2][0] = 1; A[2][1] = 1; A[2][2] = 3; B[2] = 9;

    for (int i = 0; i < n; i++) {
        X[i] = 0;
    }

    gaussSeidel(A, B, X, n, 1e-6, 1000);

    for (int i = 0; i < n; i++) {
        std::cout << "x[" << i << "] = " << X[i] << std::endl;
    }

    return 0;
}
