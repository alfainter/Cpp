#include <iostream>

using namespace std;

int main(void)
{
    bool answer;
    int value;

    cout << "Enter a value: ";
    cin >> value;

    if ((0 <= value && 10 > value)
        || (value * 2 <= 20 && value - 2 > -2)
        || (value - 1 < 1 && value / 2 < 10)
        || (value == 111)) {
        answer = true;
    }
    else
        answer = false;

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}
//7
#include <iostream>

using namespace std;

int main()
{
    float a = 2.3;
    float b = 2.3;
    float c = 2.123456;
    float d = 2.123456;
    float e = 2.123456;

    printf("%.1f\n", a);
    printf("%.2f\n", b);
    printf("%f\n", c);
    printf("%.2f\n", d);
    printf("%.f\n", e);

    return 0;
}
//8
#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;

    cin >> a;
    cin >> b;

    if (a == b)
        cout << "Results are equal (by 0.000001 epsilon)";
    else
        cout << "Results are not equal (by 0.000001 epsilon)";

    return 0;
}
//9
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if (a, b, c, d <= 255)
        cout << a << "." << b << "." << c << "." << d;
    else
        cout << "Incorrect ip";

    return 0;
}
