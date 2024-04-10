#include <iostream>

using namespace std;

const int maxn = 1009;
int n, m, x1, y1;
char A[maxn][maxn];

int dx[5] = {-1, 0, 0, 1};
int dy[5] = {0, -1, 1, 0};

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

    if (i == n) return 1;
    A[i][j] = 'R';

    for (int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && A[i1][j1] != 'R')
        {
            if(dfs(i1, j1)) return 1;
        }
    }

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
