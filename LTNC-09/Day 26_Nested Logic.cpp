#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int d1, m1, y1, d2, m2, y2, res = 0;
    
    cin >> d1 >> m1 >> y1;
    cin.ignore();
    cin >> d2 >> m2 >> y2;
    cin.ignore();
    
    if(y1 > y2) res = 10000;
    else if (y1 == y2 && m1 > m2) res = 500*(m1 - m2);
    else if (y1 == y2 && m1 == m2 && d1 > d2) res = 15*(d1 - d2);
    
    cout << res;
    return 0;
}
