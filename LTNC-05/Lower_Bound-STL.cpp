#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> v;

int main() {

    int n, x, q;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        cin >> x;
        int low = lower_bound(v.begin(), v.end(), x) - v.begin();

        if (v[low] == x) cout << "Yes" << " " << low+1 << "\n";
        else cout << "No" << " " << low+1 << "\n";
    }
    return 0;
}
