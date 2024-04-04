#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <char> ch = {'a', 'b', 'c', 'd'};

int main()
{
    sort(ch.begin(), ch.end());

    do {
        cout << ch[0] << " " << ch[1] << " " << ch[2] << "\n";
    } while (next_permutation(ch.begin(), ch.end()));
}