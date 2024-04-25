#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> v;

int main()
{
    int n, res = 0, cnt = 0;
    cin >> n;

    while (n > 0)
    {
        v.push_back(n%2);
        n = n/2;
    }

    n = v.size();

    if (v[0] == 1)
    {
        res = 1;
        cnt = 1;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] == 1) cnt++;
        else
        {
            res = max(res, cnt);
            cnt = 0;
        }
        res = max(res, cnt);
    }

    cout << res;

    return 0;
}
