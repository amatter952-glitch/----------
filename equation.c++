#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int x2, x1, x0;
double b1, b2;
cout << "the eqn. n ax2 + bx + c = 0"<<endl;
cout << "enter the factor a: " << endl;
cin >> x2;
cout << "enter the factor b: " << endl;
cin >> x1;
cout << "enter the factor c: " << endl;
cin >> x0;
if (pow(x1, 2) - 4 * x2 * x0 >= 0)
{
b1 = (-1 * x1 + sqrt(pow(x1, 2) - 4 * x2 * x0)) / (2 * x2);
b2 = (-1 * x1 - sqrt(pow(x1, 2) - 4 * x2 * x0)) / (2 * x2);
cout << "b1= " << b1 << endl << "b2= " << b2 << endl;
}
else
{
b1 = -1 * x1;
b2=-1*sqrt((pow(x1, 2) - 4 * x2 * x0)) / (2 * x2);
cout << "b1= " << b1<<"+ i*"<< b2<< endl << "b2= " << b1<<"- i*"<<b2 << endl;
}
return 0;
}