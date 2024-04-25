#include <iostream>

using namespace std;

const int maxn = 1009;
int n, m, x1, y1;
char A[maxn][maxn];

void input()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == 'Y')
            {
                x1 = i;
                y1 = j;
            }

        }
    }

//    for (int j = 1; j <= m; j++)
//    {
//        if (A[n][j] == 'E') A[n][j] = 'F';
//
//    }
}

bool dfs (int i, int j)
{
//    cout << i << " " << j << "\n";

    if (A[i][j] == 'R') return 0;

    if (i == n) return 1;
    A[i][j] = 'R';

    int new_j;

    new_j = j - 1;
    if(new_j >= 1 && (A[i][new_j] == 'E')){
       if(dfs(i + 1, new_j)) return 1;
    }

    new_j = j + 1;
    if(new_j <= m && (A[i][new_j] == 'E')){
       if(dfs(i + 1, new_j)) return 1;
    }

    new_j = j;
    if(dfs(i + 1, new_j)) return 1;

    return 0;

    return 0;

}

int main()
{
    input();


//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cout << A[i][j];
//        }
//        cout << "\n";
//    }

    if (dfs(x1, y1)) cout << "YES";
    else cout << "NO";
}
