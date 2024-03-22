#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

set <int> s;
set <int> :: iterator it;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, a , b;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (a == 1) s.insert(b);
        else if (a == 2) s.erase(b);
        else
        {
            it = s.find(b);
            if (it != s.end()) cout << "Yes";
            else cout << "No";

            cout << "\n";
        }
    }

    return 0;
}
