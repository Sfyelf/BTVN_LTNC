#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e4+9;
int A[maxn];

int main() {
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    
    for (int i = n; i >= 1; i--)
    {
        cout << A[i] << " ";
    }
    
    return 0;
}
