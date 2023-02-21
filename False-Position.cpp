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
double func(double x) {
    return x * x - 4;
}

double falsePosition(double a, double b) {
    double ans = a;
    while ((b - a) >= E) {
        ans = (a * func(b) - b * func(a)) / (func(b) - func(a));

        if (func(ans) == 0.0) {
            break;
        } else if (func(ans) * func(a) < 0) {
            b = ans;
        } else {
            a = ans;
        }
    }
    return ans;
}

int main() {
    
    int test{0};   std::cin >> test;
    while(test--) {
        double a{0.0000},b{0.0000};
        std::cin >> a >> b;
        if(a > b) {
            std::swap(a,b);
        }
        double root = falsePosition(a, b);

        std::cout << "Root: " << root << std::endl;
    }

    return 0;
}
