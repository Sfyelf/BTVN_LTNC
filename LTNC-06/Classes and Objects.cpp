#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student
{
    public:
        int score[5];
        void input()
        {
            for (int i = 0; i < 5; i++)
            {
                cin >> score[i];
            }
        }
        
        int calculateTotalScore()
        {
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum+= score[i];
            }
            return sum;
        }
    
};

int main() {
    int n;
    cin >> n;
    
    student *st = new student[n];
    
    for (int i = 0; i < n; i++)
    {
        st[i].input();
    }
    
    int spscore = st[0].calculateTotalScore();
    
    int nscore = 0;
    int result;
    for (int i = 0; i < n; i++)
    {
        result = st[i].calculateTotalScore();
        if (result > spscore) nscore+= 1;
    }
    
    cout << nscore;
    
    return 0;
}
