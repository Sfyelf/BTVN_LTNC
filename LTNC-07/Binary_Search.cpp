#include <iostream>

using namespace std;

//search position of x int sorted array n numbers

int BinarySearch (int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l)/2;

        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }

    return -1;
}

int main()
{
    int n, x;
    cin >> n >> x;

    int Arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    int res = BinarySearch(Arr, 0, n - 1, x);

    if (res == -1) cout << "Element is not present in array.";
    else cout << "Element is present at index: " << res;
}