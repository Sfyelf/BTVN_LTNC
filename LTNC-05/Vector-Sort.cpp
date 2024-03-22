#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> v;

int main() {
    
    int n, x;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}
