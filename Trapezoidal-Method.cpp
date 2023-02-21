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
const double E = 0.0001;
const double M_PI = 3.14159265358979323846264338327950288;
double func(double x) {
    return sin(x);
}

double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (func(a) + func(b)) / 2.0;
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += func(x);
    }
    return h * sum;
}

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        double a{0},b{M_PI};
        int n{0};
        std::cin >> a >> n;
        double result = trapezoidal(a, b, n);
        std::cout << "Result: " << result << std::endl;
    }
    
    return 0;
}