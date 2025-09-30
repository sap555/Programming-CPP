#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    if (number < 0) cout << "Negative" << endl;
    else if (number = 0) cout << "Zero" << endl;
    else cout << "Positive" << endl;
    if (number % 2 == 0) cout << "Even";
    else cout << "Odd";
    return 0;
}