#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout << "Enter five numbers: "<<endl;
    cin >> a >> b >> c >> d >> e;
    cout << a << b << c << d << e <<endl;
    if (a > b) swap(a,b);
    if (c > d) swap(c,d);
    if (a > c) swap(b,d),c = a;
    a = e;
    if (a > b) swap(a,b);
    if (c > a) swap(b,d),a = c;
    if (a > d) cout << d;
    else cout << a;
}