#include <iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double x, y, max, min, c, rs;
    cout << "введите x:";
    cin >> x;
    cout << "введите y:";
    cin >> y;
    if (x >= y)
    {
        max = x;
        min = y;
    }
    else
    {
        min = x;
        max = y;
    }
    if ((fabs(x) + fabs(y)) <= 1 || x >= 0)
    {
        c = max + pow(x, 1. / 2);
        cout << c << "\n";
    }
    else if ((fabs(x) + fabs(y)) > 0 || x < 0 && y < 0)
    {
        c = min + pow(sin(x), 2.) - pow(cos(y), 2);
        cout << c;
    }
    else
    {
        rs = exp(pow(x, 2) + fabs(y));
        cout << rs;
    }
}
