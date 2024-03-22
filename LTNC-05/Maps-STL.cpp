#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map <string, int> m;

int main() {

    int n;
    cin >> n;

    int a, y;
    string x;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> x >> y;
            m[x] += y;
        }
        else if (a == 2)
        {
            cin >> x;
            m[x] = 0;
        }
        else
        {
            cin >> x;
            cout << m[x] << "\n";
        }
    }

    return 0;
}
