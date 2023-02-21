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
double f(double x) {
    return x * x - 4;
}

double df(double x) {
    return 2 * x;
}

double newtonRaphson(double x0) {
    double x1 = x0 - f(x0) / df(x0);
    while (abs(x1 - x0) >= E) {
        x0 = x1;
        x1 = x0 - f(x0) / df(x0);
    }
    return x1;
}

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        double a{0};
        std::cin >> a;
        double root = newtonRaphson(a);
        std::cout << "Root: " << root << std::endl;
    }
    
    return 0;
}