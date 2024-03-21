#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e3;

int A[maxn], B[maxn];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n + 1; i++)
    {
        cin >> B[i];
    }
    
    sort(A + 1, A + 1 + n);
    sort(B + 1, B + 2 + n);
    
    for (int i = 1; i <= n; i++)
    {
        if (A[i] != B[i])
        {
            cout << B[i];
            return 0;
        }
    }
    
    cout << B[n+1];
    
    return 0;
}
