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

double func(double x) {
	// return log(x);
	return (double) (1/(1 + ((double)x*x)));
}

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
    	double a,b,h,k,y;
	    std::cin >> a >> b;
	    int n{0};   std::cin >> n;
	    h = (b-a)/n;

	    if(n % 3 == 0) {
	    	y = func(a) + func(b);
	    	for (int i = 1; i < n; i++) {
	    	    if(i % 3 == 0) {
	    	    	y += 2 * func(a+(i*h));
	    	    } else {
	    	    	y += 3 * func(a+(i*h));
	    	    }
	    	}
	    	y = (h*3/8) * y;
	    	std::cout << y << std::endl;
	    } else {
	    	std::cout << "Not divided by 3" << std::endl;
	    }
    }
    return 0;
}