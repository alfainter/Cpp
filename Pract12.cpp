//1
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[4][3] = {{1, 2, 3},{4, 4, 4}, {6, 7, 8}, {9, 6, 8}};
	int k = 0;
	
	for(int i = 0; i < 4; ++i){
		k = 0;
	for(int j = 0; j < 3; ++j)
	if(Arr[i][j] % 2==0){
		k++;
		}
	cout << "Для " << i << "-го рядку k= " << 	k<<"\n";
	}
}
//2
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[6][4] = {{1, 2, 3, 5},{4, 4, 4, 4}, {6, 7, 8, 9}, {9, 6, 8, 3}, {6, 7, 8, 2}, {9, 6, 8, 4}};
	int k = 0;
	
	for(int j = 0; j < 4; ++j){
		k = 0;
	for(int i = 0; i < 6; ++i)
	if(Arr[i][j] % 2==0){
		k++;
		}
	cout << "Для " << j << "-го стовпчику k= " << 	k<<"\n";
	}
}
//3
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[5][7] = {{1, 2, 3, 4, 5, 6, 7},{4, 4, 4, 4, 4, 4, 4}, {6, 7, 8, 9, 9, 9, 2}, {9, 6, 8, 3, 4, 5, 7}, {1, 1, 1, 1, 1, 1, 1}};
	int k = 0;
	
	for(int i = 0; i < 5; ++i){
		k = 0;
	for(int j = 0; j < 7; ++j){
	k=k+Arr[i][j];}
	cout << "Для " << i << "-го рядку сумма= " << k<<"\n";
	
	}
}
//4
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[4][6] = {{1, 2, 3, 5, 6, 7},{4, 4, 4, 4, 4, 4}, {6, 7, 8, 9, 1, 2}, {1, 1, 1, 1, 1, 1}};
	int k = 0;
	
	for(int j = 0; j < 6; ++j){
		k = 0;
	for(int i = 0; i < 4; ++i){
	k=k+Arr[i][j];}
	cout << "Для " << j << "-го стовпчику сумма= " << k<<"\n";
	}
}
//5
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[3][4] = {{1, 2, 3, 5},{4, 4, 4, 4}, {6, 7, 8, 9}};
	int max=0;
	int ii;
	int jj;
	
	for(int i = 0; i < 3; ++i){
	for(int j = 0; j < 4; ++j)
	if(Arr[i][j] >max){
		max=Arr[i][j];
		ii=i;
		jj=j;
		}
	}
	cout<<max<<" Рядок: "<<ii<<" Стовпчик: "<<jj<<" *за умови рахування від нуля*";
}
//6
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[4][7] = {{1, 2, 3, 5, 6, 6, 7},{4, 4, 4, 4, 4, 4, 4}, {6, 7, 8, 9, 3, 2, 5}, {9, 6, 8, 3, 3, 5, 0}};
	int min=9;
	int ii;
	int jj;
	
	for(int j = 0; j < 7; ++j){
	for(int i = 0; i < 4; ++i)
	if(Arr[i][j] <min){
		min=Arr[i][j];
		ii=i;
		jj=j;
		}
	}
	cout<<min<<" Рядок: "<<ii<<" Стовпчик: "<<jj<<" *за умови рахування від нуля*";
}
//15
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[3][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
	int sum=Arr[1][1];
	
	for(int i = 0; i < 3; ++i){
	for(int j = 0; j < 3; ++j)
	if(i%2==0 &&  j%2==0){
		sum=sum+Arr[i][j];
		}
	
	}
	cout<<sum;
}
