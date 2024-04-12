#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    
    // Declare second integer, double, and String variables.
    int se_int;
    float se_fl;
    string se_str;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> se_int >> se_fl;
    cin.ignore();
    getline(cin, se_str);
    // Print the sum of both integer variables on a new line.
    cout << i + se_int << "\n";
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << (d+se_fl)*1.0 << "\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << se_str;
    return 0;
}