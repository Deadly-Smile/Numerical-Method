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
double func(double t, double y) {
    return t-y;
}

double rungeKutta(double t0, double y0, double h, int n) {
    double t{t0};
    double y{y0};
    for (int i = 0; i < n; i++) {
        double k1 = h * func(t, y);
        double k2 = h * func(t + h/2, y + k1/2);
        double k3 = h * func(t + h/2, y + k2/2);
        double k4 = h * func(t + h, y + k3);
        y = y + (k1 + 2*k2 + 2*k3 + k4) / 6.0;
        t = t + h;
    }
    return y;
}


int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        double t0{0.0000};
        double y0{0.0000};
        double h{0.0000};
        int n{0};

        std::cin >> t0 >> y0 >> h >> n;
        double result = rungeKutta(t0, y0, h, n);

        std::cout << "Result: " << result << std::endl;
    }
    
    return 0;
}