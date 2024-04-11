#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

int powerSum(int X, int N) {
 vector<vector<int>> dp(X+1, vector<int>(X+1, 0));
    
    for(int i=0; i<X+1; i++){
        dp[X][i] = 0;
    }
    
    for(int i=0; i<=X; i++){
        dp[i][X] = 1;
    }
    
    //calculates the number of ways to get a sum of 'j' using only the first 'i' integers to the power of 'N'
    for(int i=X-1; i>=0; i--){
        for(int j=X-1; j>=0; j--){
            if(j+pow(i,N) > X) dp[i][j] = dp[i+1][j];
            else dp[i][j] = dp[i+1][j] + dp[i+1][j+pow(i, N)];
        }
    }
    
    return dp[1][0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
