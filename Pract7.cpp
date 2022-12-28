#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    int count = 0;
    cout << "Enter the positive value: ";
    cin >> x;
    while (x <= 0) {
        cout << "Mistake, please enter positive number: ";
        cin >> x;
    }
    while (x != 1) {
        if (x % 2 == 0)  x /= 2;
        else x = x * 3 + 1;
        cout << x << '\n';
        count++;
    }
    cout << "Steps = " << count;



    double pi4 = 0.;
    long n;
    cout << "Number of iterations: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)  pi4 += (1. / (i * 2 - 1));
        else pi4 -= (1. / (i * 2 - 1));
    }
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;






    int n;
    cout << "Enter the size of square greater than 1: ";
    cin >> n;
    while (n <= 1) {
        cout << "Enter the size of square greater than 1: ";
        cin >> n;
    }
    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < n - 2; i++) {
        cout << '|';
        for (int j = 0; j < n - 2; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;
    return 0;
}
