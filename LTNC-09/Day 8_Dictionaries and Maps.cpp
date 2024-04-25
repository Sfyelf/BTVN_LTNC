#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map <string, string> mp;

int main() {
    int n;
    cin >> n;
    
    string x, y;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        mp[x] = y;
    }
    
    while(cin >> x)
    {
        if  (mp.find(x) != mp.end()) cout << x << "=" << mp[x];
        else cout << "Not found";
        
        cout << "\n";
        
    }
    return 0;
}