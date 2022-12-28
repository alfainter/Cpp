//1
#include <iostream>
using namespace std;
int main() {
cout << "Enter number from 100 to 999: " << endl;
	int N, counter = 0;
	int a, b, c;
	cin >> N;
	a = N / 100, b = (N / 10) % 10, c = N % 10;
	cout << a << " " << b << " " << c << endl;

	if (a % 2 != 1) counter++;
	if (b % 2 != 1) counter++;
	if (c % 2 != 1) counter++;
	cout << "Amount of even numbers is: "<<counter << endl;
	return 0;
}
//2
 #include <iostream>
using namespace std;
int main() {
  char A;
  cycle:
  cout << "Enter first letter of country: ";
  cin >> A;
  switch(A){
    case('A'):
      cout << "Austria, Europe,82 409" << endl;
      break;
    case('B'):
      cout << "Belarus, Europe,202,910	 " << endl;
      break;
    case('C'):
      cout << "China, Asia, 9,388,211	" << endl;
      break;
      case('D'):
      cout << "Democratic Republic of the Congo, Africa, 2,267,050	" << endl;
      break;
       case('E'):
      cout << "Egypt, Asia, 995,450		" << endl;
      break;
       case('G'):
      cout << "Germany, Europe, 348,560	" << endl;
      break;
       case('F'):
      cout << "France, Europe, 547,557" << endl;
      break;
       case('H'):
      cout << "Hungary, Europe, 90,530	" << endl;
      break;
       case('I'):
      cout << "India, Asia, 364,555	" << endl;
      break;
      case('J'):
      cout << "	Japan, Asia, 191,800 " << endl;
      break;
      case('K'):
      cout << "Kyrgyzstan, Asia, 2,69970" << endl;
      break;
      case('L'):
      cout << "Latvia, Europe, 62,200" << endl;
      break;
    default:
      cout << "Enter correct model" << endl;
  }
  goto cycle;
    return 0;
}
