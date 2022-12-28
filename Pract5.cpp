//1
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++) {

        float x;
        float y;

        cin >> x;

        y = pow(sin(x), 5) - fabs(5 * x - 1.5);

        cout << y << "\n";
    }

    return 0;
}
//2
#include <iostream>
using namespace std;
int factorial(int N)
{
	int F = 1;
	for(int i=1; i<=N; ++i)
	{
		F *= i;
	}
	return F;
}
int main()
{
	int N;
	cout << "N = ";
	cin >> N;	
	if(N >= 0)
	{
		cout << factorial(N); 
	}
	else
	{
		cout << "Error: N < 0.";
	}
	return 0;
}
//3

#include <iostream>
using namespace std;

int main()
{
  int a, b, h;
  int y = 0;

  cout << "Enter a:";
  cin >> a;

  cout << "Enter b:";
  cin >> b;

  cout << "Enter h:";
  cin >> h;

  for (int x = a; x <= b; x += h) {
    if (x + 5 != 0) {
      y = 1/x + (pow((x + 3),2))+6;
      cout << "-----------------------:\n";
      cout << ":   X :        Y       :\n";
      cout << "-----------------------:\n";
      cout << ":   " << x << " : " << y << "      :\n";
      cout << "-----------------------:\n";
    }
    else {
      cout << "Invalid value for x";
    }
  }
  return 0;
  
}
