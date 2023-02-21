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

double euler(double t0, double y0, double h, int n) {
    double t = t0;
    double y = y0;
    for (int i = 0; i < n; i++) {
        double dydt = func(t, y);
        y = y + (h * dydt);
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
        double result = euler(t0, y0, h, n);

        std::cout << "Result: " << result << std::endl;
    }
    
    return 0;
}