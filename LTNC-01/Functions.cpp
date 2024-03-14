#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int maxin (int a, int b)
{
    if (a > b) return a;
    else return b;
}

int main() {
    int a, b, c, d, maxx;
    cin >> a >> b >> c >> d;
    
    maxx = maxin(maxin(maxin(a, b), c), d);
    
    cout << maxx;
    
    return 0;
}
