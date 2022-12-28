//1
#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	const int x = 0;
	int y;
	
	int Arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	cout  << "Increases" << "\n";
	for( int i = 0; i < 12; i++ ){
	 cout << Arr[i] << " ";
	 }
	 
	 cout  << "\n";
	 
	 cout  << "Decreases" << "\n";
	 for( int i = 11; i >= 0; i-- ){
	 cout << Arr[i] << " ";
	 }
	 return 0;
}
//2
#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	
	int Arr[10] = {-1,2,-3,-4,5,6,24,8,9,-10,};
	
	
	for( int i = 0; i < 10; i++ ){
	 if(Arr[i]<0 && i<7 ){
	 	
	 	Arr[i] = 0;
	 	}
	 cout << Arr[i] << " ";
	 }
	 
	 
	 return 0;
}
