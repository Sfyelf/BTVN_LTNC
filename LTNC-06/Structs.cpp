#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct
{
    int tuoi;
    string ten;
} thongtina, thongtinb;

int main() {

    cin >> thongtina.tuoi >> thongtina.ten >> thongtinb.ten >> thongtinb.tuoi;

    cout << thongtina.tuoi << " " << thongtina.ten << " " << thongtinb.ten << " " << thongtinb.tuoi;

    return 0;
}
