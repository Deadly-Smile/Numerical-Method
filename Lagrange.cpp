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
double lagrange(vector<double> X, vector<double> Y, double x) {
    double y = 0;
    for (int i = 0; i < X.size(); i++) {
        double p = 1;
        for (int j = 0; j < X.size(); j++) {
            if (i != j) {
                p *= (x - X[j]) / (X[i] - X[j]);
            }
        }
        y += Y[i] * p;
    }
    return y;
}

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        int n{0};   std::cin >> n;
        std::vector<double> X(n),Y(n);
        for (auto &i : X) {
            std::cin >> i;
        }
        for (auto &i : Y) {
            std::cin >> i;
        }

        double ans = lagrange(X, Y, n);
        std::cout << "f(" << n << ") = " << ans << std::endl;


    }
    
    return 0;
}