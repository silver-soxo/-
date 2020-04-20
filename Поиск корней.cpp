#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if(d == 0) //Если дискриминант = 0, будет 1 корень.
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        cout << x1 << " " << x1;
    }
    if(d > 0) //Если дискриминант > 0, будет 2 корня.
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << " " << x2;
    }
    if(d < 0) //Если дискриминант меньше нуля - нет корней.
    {
        cout << "No real roots";
    }
}
