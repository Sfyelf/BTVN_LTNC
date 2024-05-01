#include <bits/stdc++.h>

using namespace std;

typedef array<array<char, 10>, 10> Board;
Board crossword;
vector <string> words;

void printres(const Board& crossword)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << crossword[i][j];
        }
        cout << "\n";
    }
}

void input()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> crossword[i][j];
        }
    }

    string key;
    cin >> key;
    key += ";";

    int n = key.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
         if(key[i] == ';')
         {
             words.push_back(key.substr(cnt, i - cnt));
             cnt = i + 1;
         }
    }
}

bool canInsertByCol (const Board& crossword, const string& words, int row, int col)
{
    int n = words.size();
    if (row + n >= 11) return 0;
    for (int i = 0; i < n; i++)
    {
        if (crossword[row+i][col] != '-' && crossword[row+i][col] != words[i]) return 0;
    }
    return 1;
}

bool canInsertByRow (const Board& crossword, const string& words, int row, int col)
{
    int n = words.size();
    if (col + n >= 11) return 0;
    for (int i = 0; i < n; i++)
    {
        if (crossword[row][col+i] != '-' && crossword[row][col+i] != words[i]) return 0;
    }
    return 1;
}

Board insertByCol (const Board& crossword, const string& words, int row, int col)
{
    Board temp;
    int n = words.size();

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            temp[i][j] = crossword[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        temp[row+i][col] = words[i];
    }

    return temp;
}

Board insertByRow (const Board& crossword, const string& words, int row, int col)
{
    Board temp;
    int n = words.size();

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            temp[i][j] = crossword[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        temp[row][col+i] = words[i];
    }

    return temp;
}

bool solve (const Board& crossword, const vector <string>& words, int check)
{
    if (check == words.size())
    {
        printres(crossword);
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (canInsertByCol(crossword, words[check], i, j))
            {
                Board temp = insertByCol(crossword, words[check], i, j);
                if (solve(temp, words, check + 1)) return 1;
            }

            if (canInsertByRow(crossword, words[check], i, j))
            {
                Board temp = insertByRow(crossword, words[check], i, j);
                if (solve(temp, words, check + 1)) return 1;
            }
        }
    }

    return 0;
}

int main()
{
    input();

    solve(crossword, words, 0);

//    cout << "\n";
//    int n = words.size();
//    for (int i = 0; i < n; i++)
//    {
//        cout << words[i] << " ";
//    }



    return 0;
}
