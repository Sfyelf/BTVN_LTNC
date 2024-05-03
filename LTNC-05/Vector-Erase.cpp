#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> v;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, x, a, b;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    
    cin >> x >> a >> b;
    
    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    n = v.size();
    cout << n << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}
