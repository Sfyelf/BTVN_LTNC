#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int &a, int &b)
{
    int a1 = a, b1 = b;
    a = a1 + b1;
    b = abs(a1 - b1);
}

int main()
{
    int a, b;
    cin >> a >> b;

    update(a, b);
    cout << a << "\n" << b;

    return 0;
}
