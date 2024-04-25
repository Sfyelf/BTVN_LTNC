#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'factorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int factorial(int n) {
    if (n == 1) return 1;
    else return n*factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}
