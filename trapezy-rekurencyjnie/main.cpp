#include <iostream>

using namespace std;

double f(double x)
{
    return x*x;
}

double trapez(double a, double b, double eps)
{   //|----------|----------|

    double d = b-a; // dlugosc |AB|
    if(d>eps)
    {
        double a1=a;      double b2=b;
        double a2=a+d/2;  double b1=a2;
        double pole = trapez(a1, b1, eps) + trapez(a2, b2, eps);
        return pole;
    } else
    {
        double pole = (f(a) + f(b))*0.5*d;
        return pole;
    }
}

int main()
{
    double a, b, eps;
    cout << "podaj a: ";
    cin >> a;
    cout << "podaj b: ";
    cin >> b;
    cout << "podaj eps: ";
    cin >> eps;
    cout << "Pole wynosi " << trapez(a, b, eps) << endl;
    return 0;
}
