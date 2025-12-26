#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int a, b, c, d, temp;
    cout << "A= "; cin >> a;
    cout << "B= "; cin >> b;
    cout << "C= "; cin >> c;
    cout << "D= "; cin >> d;
    cout << "A= " << a << ", B= " << b << ", C= " << c << ", D= " << d << endl;
    temp = a;
    a = d;
    d = c;
    c = b;
    b = temp;
    cout << "A= " << a << ", B= " << b << ", C= " << c << ", D= " << d;
}