#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    string s;
    cin >> t;
    
    for (int j = 1; j <= t; j++)
    {
        cin >> s;
        s = s;
        int n = s.size();
        
        for (int i = 0; i < n; i = i + 2) cout << s[i];
        cout << " ";
        for (int i = 1; i < n; i = i + 2) cout << s[i];
        
        cout << "\n";
    }
        
    return 0;
}
