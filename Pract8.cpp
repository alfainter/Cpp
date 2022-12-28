//2.6
#include <iostream>

using namespace std;

int main() {
	int c0, counter = 0;
	cout << "Enter Value: ";
	cin >> c0;
	do {
		if (c0 % 2 == 0) c0 /= 2;
		else c0 = 3 * c0 + 1;
		cout << c0 << endl;
		counter++;
	} while (c0 != 1);
	cout << "steps =" << counter;
}
//2.7
#include <iostream>

using namespace std;
int main(void) {
  double pi4 = 0.;
  long n;
  long j = 1;
  
  cout << "Number of iterations? ";
  cin >> n;
  
  for(int i=0; i<n; i=i+2){
    pi4 = pi4 + ((1./j)-(1./(j+2)));
    j=j+4;
  }
  
  cout.precision(20);
  cout << "Pi = " << (pi4 * 4.) << endl;
  return 0;
}
//2.10
#include <iostream>
using namespace std;
     int main(void) {
cout<<"Enter number: "<<'\n';
      int x=0;
w:cin>>x;
while(x<10 && x>-1){
cout << '+';
for(int i = 0; i < x; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < x; i++) {
cout << '|';
for(int j = 0; j < x; j++)
cout << ' ';
cout << '|' << endl;}
cout << '+';
for(int i = 0; i < x; i++)
cout << '-';
cout << '+' << endl;
return 0;}
cout<<"Enter number 1-10: "<<'\n';
goto w;
}
